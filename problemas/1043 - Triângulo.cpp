#include <bits/stdc++.h>
using namespace std;
int main(){
    float a, b, c, area, perm;

    scanf("%f %f %f", &a, &b, &c);

    if((b - c) < a && a < (b + c) &&
       (a - c) < b && b < (a + c) &&
       (a - b) < c && c < (a + b)){
        perm = a + b + c;
        printf("Perimetro = %.1f\n", perm);
    }else{
        area = (a + b) * c / 2;
        printf("Area = %.1f\n", area);
    }
}
