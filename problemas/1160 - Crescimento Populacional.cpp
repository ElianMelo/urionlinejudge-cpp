#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int PA, PB;
        double G1, G2;
        bool check = false;

        cin >> PA >> PB >> G1 >> G2;

        int result1;
        int result2;

        for (int j = 1; j <= 100; j++) {
            if(j == 1){
                result1 = PA + floor((PA * G1 / 100));
                result2 = PB + floor((PB * G2 / 100));
            }else{
                result1 = result1 + floor((result1 * G1 / 100));
                result2 = result2 + floor((result2 * G2 / 100));
            }

            if (result1 > result2) {
                cout << j << " anos." << '\n';
                check = true;
                break;
            }

        }

        if (check == false) {
            cout << "Mais de 1 seculo." << '\n';
        }

    }
}
