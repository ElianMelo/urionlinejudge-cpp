#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, cont = 0, pares = 0;

    while(cont < 5){
        scanf("%d", &num);
        if(num % 2 == 0){
            pares += 1;
        }
        cont += 1;
    }
    printf("%d valores pares\n", pares);
}
