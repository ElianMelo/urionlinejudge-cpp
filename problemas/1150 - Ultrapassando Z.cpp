#include <bits/stdc++.h>
using namespace std;
int main(){
    int ini, fim, soma = 0, cont = 0;

    cin >> ini;

    while(cin >> fim){
        if(fim > ini){
            break;
        }
    }

    for(int i = 0; i < fim; i++){
        soma += ini;
        ini++;
        cont++;
        if(soma > fim){
            break;
        }

    }

    cout << cont << endl;

}
