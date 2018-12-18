#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    float hora, min, sec;

    scanf("%d", &num);

    hora = trunc(num / 3600);
    num -= hora * 3600;

    min = trunc(num / 60);
    num -= min * 60;

    sec = trunc(num / 1);
    num -= sec * 1;

    printf("%.0f:%.0f:%.0f\n", hora, min, sec);
}
