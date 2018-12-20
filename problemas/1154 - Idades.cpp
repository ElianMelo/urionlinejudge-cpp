#include <bits/stdc++.h>
using namespace std;
int main(){
    int idade, soma = 0, cont = 0;
    float media;

    while(cin >> idade){
        if(idade < 0){
            break;
        }else{
            soma += idade;
            cont++;
        }
    }

    media = (float) soma / cont;

    printf("%.2f\n", media);

}
