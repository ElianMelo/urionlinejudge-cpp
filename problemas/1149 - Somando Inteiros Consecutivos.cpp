#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, quant, soma = 0;

    cin >> num;

    while(cin >> quant){
        if(quant > 0){
            break;
        }
    }

    for(int i = 0; i < quant; i++){
        soma += num + i;
    }

    cout << soma << endl;

}
