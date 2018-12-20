#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    double n[100], num;

    scanf("%lf", &num);

    for(i = 0; i < 100; i++){
        n[i] = num;
        num = num / 2;
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
}
