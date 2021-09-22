#include <bits/stdc++.h>

using namespace std;

int Len, Weight;
int mod = 1e9 + 7;
int Area[12][12];
long long int Ways[12][12][1 << 12];

int DP();

int main () {
    int Times, Case = 0;

    cin >> Times;
    while (Times --) {
        cin >> Len >> Weight;

        for (int i = 1; i <= Len; i++) {
            for (int j = 1; j <= Weight; j++) {
                cin >> Area[i][j];
            }
        }

        printf("Case %d: %d\n", ++Case, DP());
    }
}

int DP() {
    memset(Ways, 0, sizeof(Ways));
    Ways[0][Weight][0] = 1;

    for (int i = 1; i <= Len; i++) {
        // Change to the next level
        for (int s = 0; s < (1 << Weight); s++) {
            Ways[i][0][(s << 1)] = Ways[i - 1][Weight][s];
        }

        // The contour line moves one space to the right
        for (int j = 1; j <= Weight; j++) {
            for (int s = 0; s < (1 << (Weight + 1)); s++) {
                int x = (1 << (j - 1));
                int y = (1 << j);

                if (Area[i][j]) {
                    if ((x & s) && (y & s)) {
                        // If there are plugs on the right and bottom, it will be transferred
                        // from the state where there are no plugs on the left and top. 
                        Ways[i][j][s] = Ways[i][j - 1][s - x - y];
                    }
                    else if (!(x & s) && !(y & s)) {
                        // If there is no plug on the right and bottom, it will be transferred
                        // from the state where there is no plug on the left and top.
                        Ways[i][j][s] = Ways[i][j - 1][s + x + y];
                    }
                    else {
                        // If there is a plug on the right or bottom, it will be transferred
                        // from the state with a plug on the left or top side.
                        Ways[i][j][s] = Ways[i][j - 1][s] + Ways[i][j - 1][s ^ x ^ y];
                    }
                }
                else {
                    if(!(x & s) && !(y & s)) {
                        Ways[i][j][s] = Ways[i][j - 1][s];
                    }
                    else {
                        Ways[i][j][s] = 0;
                    }
                }
            }
        }
    }

    return Ways[Len][Weight][0] % mod;
}
