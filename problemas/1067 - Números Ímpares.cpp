#include <bits/stdc++.h>
using namespace std;
int main(){
    int fim = 0, ini = 1;

    scanf("%d", &fim);

    while(ini <= fim){
        if(ini % 2 != 0){
            printf("%d\n", ini);
        }
        ini += 1;
    }
}
