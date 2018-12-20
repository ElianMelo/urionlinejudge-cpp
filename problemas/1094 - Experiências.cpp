#include <bits/stdc++.h>
using namespace std;
int main(){
    float quant, coelhos = 0, ratos = 0, sapos = 0, total = 0;

    cin >> quant;

    for(int i = 0; i < quant; i++){

        char esc;
        float num;

        cin >> num >> esc;

        total += num;

        if(esc == 'C'){
            coelhos += num;
        }else if(esc == 'R'){
            ratos += num;
        }else if(esc == 'S'){
            sapos += num;
        }
    }

    float por_coelhos, por_ratos, por_sapos;

    por_coelhos = ((coelhos * 100) / total);
    por_ratos = ((ratos * 100) / total);
    por_sapos = ((sapos * 100) / total);

    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", coelhos);
    printf("Total de ratos: %.0f\n", ratos);
    printf("Total de sapos: %.0f\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", por_coelhos);
    printf("Percentual de ratos: %.2f %%\n", por_ratos);
    printf("Percentual de sapos: %.2f %%\n", por_sapos);

}
