#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int x, y;

        cin >> x >> y;

        if(x < y){
            cout << "Crescente" << endl;
        }else if(x > y){
            cout << "Decrescente" << endl;
        }else{
            break;
        }
    }
}
