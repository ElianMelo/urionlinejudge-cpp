#include <bits/stdc++.h>
using namespace std;
int main(){
    int cod_um, cod_dois, num_um, num_dois;
    float preco_um, preco_dois, tot;

    scanf("%d %d %f", &cod_um, &num_um, &preco_um);
    scanf("%d %d %f", &cod_dois, &num_dois, &preco_dois);

    tot = (num_um * preco_um) + (num_dois * preco_dois);

    printf("VALOR A PAGAR: R$ %.2f\n", tot);
}
