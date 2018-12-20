#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, pos = 0, pos_fix, maior;

    for(int i = 0; i < 100; i++){
        cin >> num;
        pos++;
        if(pos == 1){
            maior = num;
            pos_fix = pos;
        }
        if(num > maior){
            maior = num;
            pos_fix = pos;
        }
    }

    cout << maior << endl;
    cout << pos_fix << endl;

}
