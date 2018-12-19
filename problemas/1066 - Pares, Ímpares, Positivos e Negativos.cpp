#include <bits/stdc++.h>
using namespace std;
int main(){
    int pares = 0, impares = 0, post = 0, neg = 0;
    int i;
    for(i = 0;i < 5;i++){
        int a;
        scanf("%d", &a);
        if(a > 0) post++;
        else if(a < 0) neg++;
        if(a % 2 == 0) pares++;
        else impares++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", post);
    printf("%d valor(es) negativo(s)\n", neg);
}
