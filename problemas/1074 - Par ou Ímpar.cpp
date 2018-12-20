#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant, num;

    scanf("%d", &quant);

    while(quant > 0){
        scanf("%d", &num);
        if(num == 0){
            printf("NULL\n");
        }else if(num > 0){
            if(num % 2 == 0){
                printf("EVEN POSITIVE\n");
            }else{
                printf("ODD POSITIVE\n");
            }
        }else if(num < 0){
            if(num % 2 == 0){
                printf("EVEN NEGATIVE\n");
            }else{
                printf("ODD NEGATIVE\n");
            }
        }
        quant -= 1;
    }
}
