#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    double nota_cem, nota_cinq, nota_vint;
    double nota_dez, nota_cinc, nota_dois;
    double moeda_um, moeda_cinq, moeda_vintcinc;
    double moeda_dez, moeda_cinc, moeda_umcent;

    scanf("%lf", &n);

    nota_cem = trunc(n / 100);
    n -= nota_cem * 100;
    nota_cinq = trunc(n / 50);
    n -= nota_cinq * 50;
    nota_vint = trunc(n / 20);
    n -= nota_vint * 20;
    nota_dez = trunc(n / 10);
    n -= nota_dez * 10;
    nota_cinc = trunc(n / 5);
    n -= nota_cinc * 5;
    nota_dois = trunc(n / 2);
    n -= nota_dois * 2;

    moeda_um = trunc(n / 1.0);
    n -= moeda_um * 1.0;
    n += 0.0001;
    moeda_cinq = trunc(n / 0.5);
    n -= moeda_cinq * 0.5;
    moeda_vintcinc = trunc(n / 0.25);
    n -= moeda_vintcinc * 0.25;
    moeda_dez = trunc(n / 0.1);
    n -= moeda_dez * 0.1;
    moeda_cinc = trunc(n / 0.05);
    n -= moeda_cinc * 0.05;
    moeda_umcent = trunc(n / 0.01);
    n -= moeda_umcent * 0.01;

    printf("NOTAS:\n");
    printf("%.0lf nota(s) de R$ 100.00\n", nota_cem);
    printf("%.0lf nota(s) de R$ 50.00\n", nota_cinq);
    printf("%.0lf nota(s) de R$ 20.00\n", nota_vint);
    printf("%.0lf nota(s) de R$ 10.00\n", nota_dez);
    printf("%.0lf nota(s) de R$ 5.00\n", nota_cinc);
    printf("%.0lf nota(s) de R$ 2.00\n", nota_dois);
    printf("MOEDAS:\n");
    printf("%.0lf moeda(s) de R$ 1.00\n", moeda_um);
    printf("%.0lf moeda(s) de R$ 0.50\n", moeda_cinq);
    printf("%.0lf moeda(s) de R$ 0.25\n", moeda_vintcinc);
    printf("%.0lf moeda(s) de R$ 0.10\n", moeda_dez);
    printf("%.0lf moeda(s) de R$ 0.05\n", moeda_cinc);
    printf("%.0lf moeda(s) de R$ 0.01\n", moeda_umcent);
}
