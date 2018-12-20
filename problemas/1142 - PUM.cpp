#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont = 0, linhas;

    scanf("%d", &linhas);

    while(linhas > 0){
        printf("%d %d %d PUM\n", cont+1, cont+2, cont+3);
        cont += 4;
        linhas -= 1;
    }
}
