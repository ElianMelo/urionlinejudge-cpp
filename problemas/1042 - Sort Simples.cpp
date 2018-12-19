#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, num3, maior, menor, medio, aux;

    scanf("%d %d %d", &num1, &num2, &num3);

    maior = num1;
    if(num2 >= maior){
        maior = num2;
        menor = num1;
        medio = num3;
    }else if(num3 >= maior){
        maior = num3;
        medio = num2;
        menor = num1;
    }else{
        if(num2 >= num3){
            medio = num2;
            menor = num3;
        }else{
            medio = num3;
            menor = num2;
        }
    }
    if(menor >= medio){
        aux = medio;
        medio = menor;
        menor = aux;
    }
    if(medio >= maior){
        aux = maior;
        maior = medio;
        medio = aux;
    }


    printf("%d\n", menor);
    printf("%d\n", medio);
    printf("%d\n", maior);
    printf("\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
}
