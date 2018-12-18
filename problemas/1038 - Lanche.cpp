#include <bits/stdc++.h>
using namespace std;
int main(){
    float f1 = 4.00, f2 = 4.50, f3 = 5.00, f4 = 2.00, f5 = 1.50, total = 0;
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    //Lanche 1
    if(num1 == 1){
        total += f1 * num2;
    }else if(num1 == 2){
        total += f2 * num2;
    }else if(num1 == 3){
        total += f3 * num2;
    }else if(num1 == 4){
        total += f4 * num2;
    }else if(num1 == 5){
        total += f5 * num2;
    }

    printf("Total: R$ %.2f\n", total);
}
