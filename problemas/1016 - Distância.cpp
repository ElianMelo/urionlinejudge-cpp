#include <bits/stdc++.h>
using namespace std;
int main(){
    float x, y, dif, dist, min;

    x = 60;
    y = 90;
    dif = y - x;

    scanf("%f", &dist);

    min = x * dist / dif;

    printf("%.0f minutos\n", min);
}
