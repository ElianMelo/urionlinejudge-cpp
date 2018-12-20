#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, maior, menor;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x >= y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }

    while(menor < maior){
        menor += 1;
        if((menor % 5 == 2) || (menor % 5 == 3)){
            printf("%d\n", menor);
        }
    }
}
