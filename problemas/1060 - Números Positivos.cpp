#include <bits/stdc++.h>
using namespace std;
int main(){
    float num = 0;
    int cont = 0, valores = 0;

    while(cont < 6){
        scanf("%f", &num);
        if(num > 0){
            valores += 1;
        }
        cont += 1;
    }
    printf("%d valores positivos\n", valores);

}
