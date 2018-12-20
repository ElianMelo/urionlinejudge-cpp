#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant;

    cin >> quant;

    for(int q = 0; q < quant; q++){
        string frase1, frase2;
        int let, inc;

        cin >> frase1 >> inc;

        for(int i = 0; i < frase1.size(); i++){
            let = (int)frase1[i];
            if(let - inc < 65){
                let += 26;
            }
            let -= inc;
            frase2 += (char)let;
        }

        cout << frase2 << endl;
    }
}
