#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        if(x == 0){
            break;
        }

        int resp = 0;

        if (x % 2 == 0) {
            for (int i = x; i <= (x + 8); i+=2) {
                resp += i;
            }
            cout << resp << endl;
        } else {
            for (int i = x+1; i <= (x + 9); i+=2) {
                resp += i;
            }
            cout << resp << endl;
        }

    }
}
