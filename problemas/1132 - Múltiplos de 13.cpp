#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, maior, menor, soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x >= y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }

    while(menor <= maior){
        if(menor % 13 != 0){
            soma += menor;
        }
        menor += 1;
    }
    printf("%d\n", soma);
}
