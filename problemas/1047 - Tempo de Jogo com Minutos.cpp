#include <bits/stdc++.h>
using namespace std;
int main(){
    int ini_h, ini_m, fim_h, fim_m, horas, min;

    scanf("%d %d %d %d", &ini_h, &ini_m, &fim_h, &fim_m);

    if(ini_h == fim_h && ini_m == fim_m){
        horas = 24;
        min = 0;
    }else if(fim_h >= ini_h){
        horas = fim_h - ini_h;
        if(fim_m >= ini_m){
            min = fim_m - ini_m;
        }else{
            horas -= 1;
            min = 60 - (ini_m - fim_m);
        }
    }else if(ini_h >= fim_h){
        horas = 24 - (ini_h - fim_h);

        if(fim_m >= ini_m){
            min = fim_m - ini_m;
        }else{
            horas -= 1;
            min = 60 - (ini_m - fim_m);
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, min);
}
