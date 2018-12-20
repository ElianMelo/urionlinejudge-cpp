#include <bits/stdc++.h>
using namespace std;
int main(){

    float aum = 1.0, limite = 4.0;

    for(float i = 0.0; i < 2.2; i += 0.2){
        if(i == 1.0 || i < 2.1 && i > 1.9){
            limite++;
        }
        for(float j = aum; j < limite; j++){
            if(i == 0.0 || i == 1.0 || i < 2.1 && i > 1.9){
                printf("I=%.0f J=%.0f\n", i, j);
            }else{
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
        aum += 0.2;

    }

}
