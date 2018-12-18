#include <bits/stdc++.h>
using namespace std;
int main(){
    char nome[30];
    double sal, vend, tot;

    scanf("%s", nome);
    scanf("%lf", &sal);
    scanf("%lf", &vend);

    tot = sal + (vend * 0.15);

    printf("TOTAL = R$ %.2lf\n", tot);
}
