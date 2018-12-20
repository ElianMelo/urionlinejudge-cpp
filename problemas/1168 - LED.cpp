#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant;

    cin >> quant;

    for(int i = 0; i < quant; i++){
        int led = 0;
        string num;

        cin >> num;

        for(int j = 0; j < num.size() ; j++){

            switch(num[j]){
                case '0':
                led += 6;
                break;
                case '1':
                led += 2;
                break;
                case '2':
                led += 5;
                break;
                case '3':
                led += 5;
                break;
                case '4':
                led += 4;
                break;
                case '5':
                led += 5;
                break;
                case '6':
                led += 6;
                break;
                case '7':
                led += 3;
                break;
                case '8':
                led += 7;
                break;
                case '9':
                led += 6;
                break;
            }

        }
        printf("%d leds\n", led);
    }



}
