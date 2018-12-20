#include <bits/stdc++.h>
using namespace std;
int main(){
    int n[1000], ini_n = 0,fim_n, i;

    scanf("%d", &fim_n);

    for(i = 0; i < 1000; i++){
        n[i] = ini_n;

        if(fim_n > ini_n){
            ini_n += 1;
        }
        if(ini_n == fim_n){
            ini_n = 0;
        }

        printf("N[%d] = %d\n", i, n[i]);
    }
}
