#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, hora;
    float hora_trab, sal;

    scanf("%d %d %f", &num, &hora, &hora_trab);

    sal = hora * hora_trab;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sal);
}
