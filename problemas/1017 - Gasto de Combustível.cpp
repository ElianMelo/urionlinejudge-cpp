#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, vel;
    float litros, esp;

    scanf("%d", &temp);
    scanf("%d", &vel);

    esp = vel * temp;
    litros = esp / 12;

    printf("%.3f\n", litros);
}
