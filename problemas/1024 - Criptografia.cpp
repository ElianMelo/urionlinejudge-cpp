#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant;

    cin >> quant;

    cin.ignore();
    for(int q = 0; q < quant; q++){
        string frase1, frase2, frase3, frase4;
        char c;
        float num;

        getline(cin, frase1);

        for(int i = 0; i < frase1.size(); i++){
            if(isalpha(frase1[i])){
                c = (int)frase1[i];
                c += 3;
                c = (char)c;
            }else{
                c = frase1[i];
            }
            frase2 += c;
        }
        for(int i = frase2.size() - 1; i >= 0; i--){
            frase3 += frase2[i];
        }

        num = (float)trunc(frase3.size() / 2);

        for(int i = 0; i < frase3.size(); i++){
            if(i >= num){
                c = (int)frase3[i];
                c -= 1;
                c = (char)c;
            }else{
                c = frase3[i];
            }
            frase4 += c;
        }
        cout << frase4 << endl;
    }
}
