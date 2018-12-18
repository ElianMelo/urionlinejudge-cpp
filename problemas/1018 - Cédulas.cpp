#include <bits/stdc++.h>
using namespace std;
int main(){
    int vlr, aux;
    float nota_cem, nota_cinq, nota_vint, nota_dez;
    float nota_cinc, nota_dois, nota_um;

    scanf("%d", &vlr);

    aux = vlr;
    nota_cem = trunc(vlr / 100);
    vlr -= nota_cem * 100;
    nota_cinq = trunc(vlr / 50);
    vlr -= nota_cinq * 50;
    nota_vint = trunc(vlr / 20);
    vlr -= nota_vint * 20;
    nota_dez = trunc(vlr / 10);
    vlr -= nota_dez * 10;
    nota_cinc = trunc(vlr / 5);
    vlr -= nota_cinc * 5;
    nota_dois = trunc(vlr / 2);
    vlr -= nota_dois * 2;
    nota_um = trunc(vlr / 1);
    vlr -= nota_um * 1;

    printf("%d\n", aux);
    printf("%.0f nota(s) de R$ 100,00\n", nota_cem);
    printf("%.0f nota(s) de R$ 50,00\n", nota_cinq);
    printf("%.0f nota(s) de R$ 20,00\n", nota_vint);
    printf("%.0f nota(s) de R$ 10,00\n", nota_dez);
    printf("%.0f nota(s) de R$ 5,00\n", nota_cinc);
    printf("%.0f nota(s) de R$ 2,00\n", nota_dois);
    printf("%.0f nota(s) de R$ 1,00\n", nota_um);
}
