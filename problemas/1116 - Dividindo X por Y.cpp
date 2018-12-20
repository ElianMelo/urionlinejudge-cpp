#include <bits/stdc++.h>
using namespace std;
int main(){

    int quant;

    cin >> quant;

    for(int i = 0; i < quant; i++){
        int x, y;
        float divis;

        cin >> x >> y;

        if(y == 0){
            cout << "divisao impossivel" << endl;
        }else{
            divis = (float)x / y;
            printf("%.1f\n", divis);
        }
    }
}
