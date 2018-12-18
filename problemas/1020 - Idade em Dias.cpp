#include <bits/stdc++.h>
using namespace std;
int main(){
    int idade_dia;
    float dia, mes, ano;

    scanf("%d", &idade_dia);

    ano = trunc(idade_dia / 365);
    idade_dia -= ano * 365;

    mes = trunc(idade_dia / 30);
    idade_dia -= mes * 30;

    dia = trunc(idade_dia / 1);
    idade_dia -= idade_dia * 1;

    printf("%.0f ano(s)\n", ano);
    printf("%.0f mes(es)\n", mes);
    printf("%.0f dia(s)\n", dia);
}
