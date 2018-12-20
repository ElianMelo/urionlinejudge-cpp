#include <bits/stdc++.h>
using namespace std;
int main(){
    char op;
    double m[12][12], limite = 11, cont = 0;
    double soma = 0, media;

    cin >> op;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
            if(j > limite && j < i){
                soma += m[i][j];
                cont++;
            }
        }
        limite--;
    }

    media = soma / cont;

    if(op == 'S'){
        printf("%.1lf\n", soma);
    }else if(op == 'M'){
        printf("%.1lf\n", media);
    }

}
