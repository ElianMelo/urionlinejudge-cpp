#include <bits/stdc++.h>
using namespace std;
int main(){
    int ini = 1, fim, test;

    scanf("%d", &fim);

    while(ini <= fim){
        if(ini % 2 == 0){
            test = pow(ini, 2);
            printf("%d^2 = %d\n", ini, test);
        }
        ini += 1;
    }
}
