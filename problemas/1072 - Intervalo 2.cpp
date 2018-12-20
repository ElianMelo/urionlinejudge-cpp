#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant, dentro = 0, fora = 0, num;

    scanf("%d", &quant);

    while(quant > 0){
        scanf("%d", &num);
        if(num >= 10 && num <= 20){
            dentro += 1;
        }else{
            fora += 1;
        }
        quant -= 1;
    }

    printf("%d in\n", dentro);
    printf("%d out\n", fora);
}
