#include <bits/stdc++.h>
using namespace std;
int main(){

    while(1){
        int n, m, ini, fim, soma = 0;

        cin >> n >> m;

        if(n <= 0 || m <= 0){
            break;
        }

        if(n >= m){
            fim = n;
            ini = m;
        }else{
            fim = m;
            ini = n;
        }

        for(ini; ini <= fim; ini++){
            printf("%d ", ini);
            soma += ini;
        }
        printf("Sum=%d\n", soma);
    }

}
