#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c, maior, menor, medio, aux;

    scanf("%lf %lf %lf", &a, &b, &c);

    maior = a;
    if(b >= maior){
        maior = b;
        menor = a;
        medio = c;
    }else if(c >= maior){
        maior = c;
        medio = b;
        menor = a;
    }else{
        if(b >= c){
            medio = b;
            menor = c;
        }else{
            medio = c;
            menor = b;
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

    if(maior >= medio + menor){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(pow(maior, 2) == (pow(medio, 2) + pow(menor, 2))){
            printf("TRIANGULO RETANGULO\n");
        }
        else if(pow(maior, 2) > (pow(medio, 2) + pow(menor, 2))){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if(pow(maior, 2) < (pow(medio, 2) + pow(menor, 2))){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(maior == medio && medio == menor){
            printf("TRIANGULO EQUILATERO\n");
        }else if((maior == medio && maior != menor) ||
                 (medio == menor && medio != maior) ||
                 (maior == menor && maior != medio)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}
