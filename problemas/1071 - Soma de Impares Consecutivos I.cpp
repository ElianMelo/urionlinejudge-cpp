#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, ini, fim, cont = 0, somimp = 0;

    scanf("%d %d", &x, &y);

    if(x > y){
        ini = y;
        fim = x;
    }else{
        ini = x;
        fim = y;
    }

    ini += 1;
    while(ini < fim){
        if(ini % 2 != 0){
            somimp += ini;
        }
        ini += 1;
    }
    printf("%d\n", somimp);
}
