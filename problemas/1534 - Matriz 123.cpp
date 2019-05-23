#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        int mat[x][x];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                if (i == j) {
                    mat[i][j] = 1;
                } else if(j == x - 1 - i) {
                    mat[i][j] = 2;
                } else {
                    mat[i][j] = 3;
                }
            }
        }

        if (x % 2 != 0) {
            mat[x/2][x/2] = 2;
        }

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                cout << mat[i][j];
            }
            cout << "\n";
        }

    }
}
