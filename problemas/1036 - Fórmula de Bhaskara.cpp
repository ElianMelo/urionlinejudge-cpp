#include <bits/stdc++.h>
using namespace std;
int main(){
   double a, b, c, delta = 0, x1 = 0, x2 = 0;

   scanf("%lf %lf %lf", &a, &b, &c);

   if(a == 0){
        printf("Impossivel calcular\n");
   }else{
        delta = pow(b, 2) - 4 * a * c;

        if(delta < 0){
            printf("Impossivel calcular\n");
        }else{
            delta = sqrt(delta);

            x1 = ((b * -1) + delta) / (2 * a);
            x2 = ((b * -1) - delta) / (2 * a);

            printf("R1 = %.5lf\n", x1);
            printf("R2 = %.5lf\n", x2);
       }
   }
}
