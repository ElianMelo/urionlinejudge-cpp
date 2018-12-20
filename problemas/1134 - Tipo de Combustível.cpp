#include <bits/stdc++.h>
using namespace std;
int main(){
    int cod, alc = 0, gas = 0, die = 0;

    while(1){
        cin >> cod;

        if(cod == 1){
            alc++;
        }else if(cod == 2){
            gas++;
        }else if(cod == 3){
            die++;
        }else if(cod == 4){
            break;
        }

    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);

}
