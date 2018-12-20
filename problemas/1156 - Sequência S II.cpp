#include <bits/stdc++.h>
using namespace std;
int main(){
    float resultado = 0.0, j = 1.0;

    for(float i = 1.0; i <= 39; i += 2.0){
        resultado += (i / j);
        j *= 2;
    }

    printf("%.2f\n", resultado);
}
