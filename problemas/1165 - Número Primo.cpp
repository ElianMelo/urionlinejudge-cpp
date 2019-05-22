#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        int x;
        bool t = false;

        cin >> x;

        for (int j = 2; j < x; j++) {
            if(x % j == 0){
                t = true;
                break;
            }
        }

        if(x == 1) t = true;

        if(t == false){
            cout << x << " eh primo" << "\n";
        } else {
            cout << x << " nao eh primo" << "\n";
        }
    }
}
