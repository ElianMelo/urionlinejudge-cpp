#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, cont = 0;

    scanf("%d", &num);

    while(cont < 10){
        cont += 1;
        printf("%d x %d = %d\n", cont, num, num * cont);
    }
}
