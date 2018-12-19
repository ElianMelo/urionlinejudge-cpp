#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, horas;

    scanf("%d %d", &num1, &num2);

    if(num2 == num1){
        horas = 24;
    }else if(num2 < num1){
        horas = 24 - (num1 - num2);
    }else{
        horas = num2 - num1;
    }

    printf("O JOGO DUROU %d HORA(S)\n", horas);
}
