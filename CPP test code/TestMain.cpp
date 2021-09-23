#include <bits/stdc++.h>

using namespace std;

struct Position {
    int x;
    int y;
} P[3];

int Distance(int a, int b);
void GetPosition(int a, int b, int c);

int main() {
    for (int i = 1; i < 4; i++) {
        cin >> P[i].x >> P[i].y;
    }

    if (Distance(1, 2) > Distance(2, 3) && Distance(1, 2) > Distance(1, 3)) {
        GetPosition(1, 2, 3);
    }
    else if (Distance(1, 3) > Distance(2, 3) && Distance(1, 3) > Distance(1, 2)) {
        GetPosition(1, 3, 2);
    }
    else {
        GetPosition(2, 3, 1);
    }

    return 0;
}

int Distance (int a, int b) {
    return abs(P[a].x - P[b].x) + abs(P[a].y - P[b].y);
}

void GetPosition(int a, int b, int c) {
    cout << P[a].x + P[b].x - P[c].x << " " << P[a].y + P[b].y - P[c].y << endl;
}