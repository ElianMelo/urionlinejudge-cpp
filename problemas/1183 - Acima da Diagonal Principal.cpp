#include <bits/stdc++.h>
using namespace std;
int main(){
    char op;
    double m[12][12], media, soma = 0;
    int cont = 0;

    cin >> op;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
            if(j > i){
                soma += m[i][j];
                cont++;
            }
        }
    }

    media = soma / cont;

    if(op == 'S'){
        printf("%.1lf\n", soma);
    }else if(op == 'M'){
        printf("%.1lf\n", media);
    }

}
