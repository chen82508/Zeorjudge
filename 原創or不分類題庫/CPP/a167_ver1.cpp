#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAXN = 50000;

char S[MAXN + 9];
int len, m;
int Rank[MAXN + 9], SA[MAXN + 9];
// Declare the rank arrays for sorting suffix array.
int SortRK1[MAXN + 9], SortRK2[MAXN + 9];
// Declare the bucket array for recording the maximum rank of each suffix.
int Buc[MAXN + 9];
// Declare the array for recording the longest common prefix (LCP) length.
int H[MAXN + 9];

void Build_suffix_array();
void Build_height_array();
void Solve();

int main() {
    int t;
    cin >> t ;
    while (t--) { 
        scanf("%s", S);
        len = strlen(S);
        m = 200;

        Build_suffix_array();
        Build_height_array();
        Solve();
    }
    return 0;
}

void Build_suffix_array() {
    int *x = SortRK1, *y = SortRK2;

    #pragma region Sorting suffix array first time
    for (int i = 0; i < m; i++)
        Buc[i] = 0;
    
    // Copy the value of character of index i into rank array 1.
    for (int i = 0; i < len; i++)
        Buc[x[i] = S[i]]++;
    
    // Initialize the maximum number of sorts of each alphabet index in the Bucket array.
    for (int i = 0; i < m; i++)
        Buc[i] += Buc[i - 1];
    
    // 1. Use each value in rank array 1 as the index of bucket array.
    // 2. Sorting suffix array by using the value in bucket array.
    for (int i = len - 1; i >= 0; i--)
        SA[--Buc[x[i]]] = i;
    #pragma endregion
    
    #pragma region Radix sort
    for (int k = 1; k <= len ; k++) {
        // The start index of suffix
        int p = 0;

        #pragma region Extend existing suffix
        // Extend the suffix k characters starting from the index value p
        for (int i = len - 1; i >= len - k; i--)
            y[p++] = i;
        
        for (int i = 0; i < len; i++) {
            if (SA[i] >= k)
                y[p++] = SA[i] - k;
        }
        #pragma endregion
        #pragma region Build rank buckets
        for (int i = 0; i < m; i++)
            Buc[i] = 0;
        
        for (int i = 0; i < len; i++)
            Buc[x[y[i]]]++;
        
        for (int i = 0; i < m; i++)
            Buc[i] += Buc[i - 1];
        #pragma endregion

        // Sorting suffix array by 
        for (int i = len - 1; i >= 0; i--)
            SA[--Buc[x[y[i]]]] = y[i];
         
        swap(x, y);
        p = 1;
        x[SA[0]] = 0;

        // Compare the starting character and starting index + k-bit character with the suffix
        // of the previous ranking to determine the rank of each suffix in the next sorting.
        for (int i = 1; i < len; i++) {
            if (y[SA[i - 1]] == y[SA[i]] && y[SA[i - 1] + k] == y[SA[i] + k])
                x[SA[i]] = p - 1;
            else
                x[SA[i]] = p++;
        }

        if (p >= len)
            break;
        
        m = p;
    }
    #pragma endregion
}

void Build_height_array() {
    for (int i = 0; i < len; i++)
        Rank[SA[i]] = i;
    
    int k = 0;
    for (int i = 0; i < len; i++) {
        // The top ranking has no comparable former, so its longest common prefix is 0.
        if (Rank[i] == 0) {
            H[0] = 0;
            continue;
        }

        if (k) k--;
        
        int j = SA[Rank[i] - 1];
        // Compare the characters of the two rank suffixes, and count the same number of prefix characters.
        while (S[i + k] == S[j + k] && i + k < len && j + k < len)
            k++;
        
        H[Rank[i]] = k;
    }
}

/**<summary> Print the result
 * <concept> Each substring is the prefix of a certain suffix,
 * so the contribution of each suffix is ​​len - SA[i], and the
 * duplicate HEI[i].
 */
void Solve() {
    int ans = len - SA[0];
    for (int i = 1; i < len; i++) {
        ans += (len - SA[i] - H[i]);
    }
    printf("%d\n", ans);
}