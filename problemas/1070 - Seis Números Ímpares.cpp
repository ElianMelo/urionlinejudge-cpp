#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, impares = 0;

    scanf("%d", &num);

    num++;

    while(impares < 6){

        if(num % 2 != 0){
            impares += 1;
            printf("%d\n", num);
        }
        num += 1;
    }
}
