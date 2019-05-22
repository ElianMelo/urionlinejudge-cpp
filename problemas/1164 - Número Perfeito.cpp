#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int x;
        int resp = 0;
        cin >> x;

        for (int j = 1; j < x; j++) {
            if(x % j == 0){
                resp += j;
            }
        }

        if (resp == x) {
            cout << x << " eh perfeito" << "\n";
        } else {
            cout << x << " nao eh perfeito" << "\n";
        }
    }
}
