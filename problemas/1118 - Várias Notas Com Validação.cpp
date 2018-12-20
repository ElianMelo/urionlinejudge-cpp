#include <bits/stdc++.h>
using namespace std;
int main(){
    float soma = 0, media;
    int cont = 0, op = 0;

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
            media = soma / cont;

            printf("media = %.2f\n", media);

            while(op != 1 || op != 2){
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> op;

                if(op == 1){
                    cont = 0;
                    soma = 0;
                    break;
                }else if(op == 2){
                    break;
                }
            }
        }
        if(op == 2){
            break;
        }

    }
}
