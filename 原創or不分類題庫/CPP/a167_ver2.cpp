#include <vector>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

// Begins Suffix Arrays implementation
// O(n log n) - Manber and Myers algorithm
// Refer to "Suffix arrays: A new method for on-line string searches",
// by Udi Manber and Gene Myers

// Usage:
//  Fill str with the characters of the string.
//  Call SuffixSort(n), where n is the length of the string stored in str.
//  That's it!

// Output:
//  pos = The suffix array. Contains the n suffixes of str sorted in lexicographical order.
//        Each suffix is represented as a single integer (the position of str where it starts).
//  rank = The inverse of the suffix array. rank[i] = the index of the suffix str[i..n)
//         in the pos array. (In other words, pos[i] = k <==> rank[k] = i)
//         With this array, you can compare two suffixes in O(1): Suffix str[i..n) is smaller
//         than str[j..n) if and only if rank[i] < rank[j]

// #define N 1000005
#define N 15
char str[N];		// input
int rk[N], pos[N];	// output
int cnt[N], nxt[N]; // internal
bool bh[N], b2h[N];

// Compares two suffixes according to their first characters
bool smaller_first_char(int a, int b) {
	return str[a] < str[b];
}

void suffixSort(int n) {
	// sort suffixes according to their first characters
	for (int i = 0; i < n; ++i) {
		pos[i] = i;
	}
	sort(pos, pos + n, smaller_first_char);
	//{pos contains the list of suffixes sorted by their first character}

	for (int i = 0; i < n; ++i) {
		bh[i] = i == 0 || str[pos[i]] != str[pos[i - 1]];
		b2h[i] = false;
	}

	for (int h = 1; h < n; h <<= 1) {
		//{bh[i] == false if the first h characters of pos[i-1] == the first h characters of pos[i]}
		int buckets = 0;
		for (int i = 0, j; i < n; i = j) {
			j = i + 1;
			while (j < n && !bh[j])
				j++;
			nxt[i] = j;
			buckets++;
		}

		//{suffixes are separated in buckets containing strings starting with the same h characters}
		if (buckets == n)
			break; // We are done! Lucky bastards!

		#pragma region Phase 1
		for (int i = 0; i < n; i = nxt[i]) {
			cnt[i] = 0;
			for (int j = i; j < nxt[i]; ++j) {
				rk[pos[j]] = i;
			}
		}
		cnt[rk[n - h]]++;
		b2h[rk[n - h]] = true;
		#pragma endregion

		#pragma region Phase 2, 3, 4......
		for (int i = 0; i < n; i = nxt[i]) {
			for (int j = i; j < nxt[i]; ++j) {
				int s = pos[j] - h;
				if (s >= 0) {
					// int head = rk[s];
					// rk[s] = head + cnt[head]++;
					rk[s] += cnt[rk[s]]++;
					b2h[rk[s]] = true;
				}
			}
			for (int j = i; j < nxt[i]; ++j) {
				int s = pos[j] - h;
				if (s >= 0 && b2h[rk[s]]) {
					for (int k = rk[s] + 1; !bh[k] && b2h[k]; k++)
						b2h[k] = false;
				}
			}
		}
		#pragma endregion

		// Sort the suffix array step by step
		for (int i = 0; i < n; ++i) {
			pos[rk[i]] = i;
			bh[i] |= b2h[i];
		}
	}
	for (int i = 0; i < n; ++i) {
		rk[pos[i]] = i;
	}
}
// End of suffix array algorithm

// Begin of the O(n) longest common prefix algorithm
// Refer to "Linear-Time Longest-Common-Prefix Computation in Suffix
// Arrays and Its Applications" by Toru Kasai, Gunho Lee, Hiroki
// Arimura, Setsuo Arikawa, and Kunsoo Park.
int height[N];
// height[i] = length of the longest common prefix of suffix pos[i] and suffix pos[i-1]
// height[0] = 0
void getHeight(int n) {
	for (int i = 0; i < n; ++i)
		rk[pos[i]] = i;
	height[0] = 0;
	for (int i = 0, h = 0; i < n; ++i) {
		if (rk[i] > 0) {
			int j = pos[rk[i] - 1];
			while (i + h < n && j + h < n && str[i + h] == str[j + h])
				h++;
			height[rk[i]] = h;
			if (h > 0)
				h--;
		}
	}
}
// End of longest common prefixes algorithm

int main() {
	string s;
	int T;
	scanf("%d", &T);
	gets(str);

	while (T--) {
		gets(str);
		long long len = 0LL + strlen(str);
		long long total = len * (len + 1) / 2;
		suffixSort(len);
		getHeight(len);

		for (int i = 0; i < len; i++) {
			// cout << height[i];
			total -= height[i];
		}
		cout << total << endl;
	}
}