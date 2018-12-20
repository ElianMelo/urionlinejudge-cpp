#include <bits/stdc++.h>
using namespace std;
int main(){

    while(1){
        int x, y;

        cin >> x >> y;

        if(x == 0 || y == 0){
            break;
        }

        if(x > 0 && y > 0){
            cout << "primeiro" << endl;
        }else if(x > 0 && y < 0){
            cout << "quarto" << endl;
        }else if(x < 0 && y > 0){
            cout << "segundo" << endl;
        }else if(x < 0 && y < 0){
            cout << "terceiro" << endl;
        }
    }
}
