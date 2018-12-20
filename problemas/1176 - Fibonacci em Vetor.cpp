#include <bits/stdc++.h>
using namespace std;
int main(){

    int quant;

    cin >> quant;

    for(int i = 0; i < quant; i++){
        int num;

        cin >> num;

        long long int fibo[num];

        if(num == 0){
            cout << "Fib(0) = 0" << endl;
        }else if(num == 1){
            cout << "Fib(1) = 1" << endl;
        }else if(num >= 2){
            fibo[0] = 0;
            fibo[1] = 1;

            for(int i = 2; i <= num; i++){
                fibo[i] = fibo[i-1] + fibo[i-2];
            }

            printf("Fib(%d) = %lld\n", num, fibo[num]);
        }
    }

}
