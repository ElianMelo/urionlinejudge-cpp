#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant;
    long long int fibo, fibo1 = 0, fibo2 = 1;

    cin >> quant;

    if(quant == 1){
        cout << "0" << endl;
    }else if(quant == 2){
        cout << "0 1" << endl;
    }else if(quant >= 3){
        cout << "0 1 ";
        for(int i = 0; i < quant - 2; i++){
            fibo = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = fibo;
            if(i != quant - 3){
                cout << fibo << " ";
            }else{
                cout << fibo << endl;
            }
        }

    }

}
