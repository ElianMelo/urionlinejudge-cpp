#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, i, j;
    char op;
    double mat[12][12], soma = 0;

    scanf("%d", &num);
    getchar();
    scanf("%c", &op);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &mat[i][j]);
            if(j == num){
                soma += mat[i][j];
            }
        }
    }

    if(op == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/12);
    }
}
