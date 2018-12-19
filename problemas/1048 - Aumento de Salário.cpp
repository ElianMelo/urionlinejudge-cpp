#include <bits/stdc++.h>
using namespace std;
int main(){
    float sal, reaj, perc, nvsal;

    scanf("%f", &sal);

    if(sal >= 0.00 && sal <= 400.00){
        perc = 15;
        reaj = sal * (perc / 100);
    }else if(sal >= 400.01 && sal <= 800.00){
        perc = 12;
        reaj = sal * (perc / 100);
    }else if(sal >= 800.01 && sal <= 1200.00){
        perc = 10;
        reaj = sal * (perc / 100);
    }else if(sal >= 1200.01 && sal <= 2000.00){
        perc = 7;
        reaj = sal * (perc / 100);
    }else{
        perc = 4;
        reaj = sal * (perc / 100);
    }
    nvsal = sal + reaj;

    printf("Novo salario: %.2f\n", nvsal);
    printf("Reajuste ganho: %.2f\n", reaj);
    printf("Em percentual: %.0f %%\n", perc);
}
