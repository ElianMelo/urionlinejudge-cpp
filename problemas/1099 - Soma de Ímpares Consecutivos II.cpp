#include <bits/stdc++.h>
using namespace std;
int main(){

    int quant;

    cin >> quant;

    for(int i = 0; i < quant; i++){

        int x, y, maior, menor, soma = 0;

        cin >> x >> y;

        if(x >= y){
            maior = x;
            menor = y;
        }else{
            maior = y;
            menor = x;
        }

        menor += 1;

        for(menor; menor < maior; menor ++){
            if(menor % 2 != 0){
                soma += menor;
            }
        }

        cout << soma << endl;
    }

}
