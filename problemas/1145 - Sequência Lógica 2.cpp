#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant, fim, ini = 1;

    cin >> quant >> fim;

    while(ini <= fim){
        for(int i = 0; i < quant; i++){
            if(i == quant-1){
                printf("%d", ini);
            }else{
                printf("%d ", ini);
            }
            if(ini == fim){
                break;
            }
            ini++;
        }
        cout << endl;
        if(ini == fim){
            break;
        }
    }

}
