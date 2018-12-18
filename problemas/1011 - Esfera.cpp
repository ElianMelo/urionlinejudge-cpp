#include <bits/stdc++.h>
using namespace std;
int main(){
    double volume, raio, pi;

    pi = 3.14159;
    scanf("%lf", &raio);

    //volume = (4/3.0) * pi * pow(raio, 3);
    volume = (4/3.0) * pi * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume);
}
