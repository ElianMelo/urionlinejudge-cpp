#include <bits/stdc++.h>
using namespace std;
int main(){
    int n[10], num, i;

    scanf("%d", &num);

    for(i = 0; i < 10; i++){
        n[i] = num;
        num *= 2;

        printf("N[%d] = %d\n", i, n[i]);
    }
}
