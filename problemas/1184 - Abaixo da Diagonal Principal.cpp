#include <bits/stdc++.h>
using namespace std;
int main(){
    char op;
    int i, j, cont = 0;
    double m[12][12], soma = 0, media;

    scanf("%c", &op);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
            if(i > j){
              soma += m[i][j];
              cont += 1;
            }
        }
    }

    if(op == 'S'){
      printf("%.1lf\n", soma);
    }else{
      media = soma / cont;
      printf("%.1lf\n", media);
    }
}
