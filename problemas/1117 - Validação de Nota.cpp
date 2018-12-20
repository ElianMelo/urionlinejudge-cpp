#include <bits/stdc++.h>
using namespace std;
int main(){
    float soma = 0, cont = 0, media;

    while(1){
        float nota;

        cin >> nota;

        if(nota >= 0.0 && nota <= 10.0){
            soma += nota;
            cont += 1;
        }else{
            cout << "nota invalida" << endl;
        }

        if(cont == 2){
            break;
        }
    }

    media = soma / cont;

    printf("media = %.2f\n", media);

}
