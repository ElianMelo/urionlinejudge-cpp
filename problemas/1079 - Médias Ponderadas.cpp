#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant;

    cin >> quant;

    for(int i = 0; i < quant; i++){
        float num1, num2, num3, media;

        cin >> num1 >> num2 >> num3;

        media = ((num1*2) + (num2*3) + (num3*5)) / 10;

        printf("%.1f\n", media);
    }
}
