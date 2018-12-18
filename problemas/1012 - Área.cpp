#include <bits/stdc++.h>
using namespace std;
int main(){
    double A, B, C, pi;
    double a_trig, a_circ, a_trap, a_quad, a_ret;

    pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    a_trig = (A * C) / 2;
    a_circ = pi * C * C;
    a_trap = ((A + B) * C) / 2;
    a_quad = B * B;
    a_ret = A * B;

    printf("TRIANGULO: %.3lf\n", a_trig);
    printf("CIRCULO: %.3lf\n", a_circ);
    printf("TRAPEZIO: %.3lf\n", a_trap);
    printf("QUADRADO: %.3lf\n", a_quad);
    printf("RETANGULO: %.3lf\n", a_ret);
}
