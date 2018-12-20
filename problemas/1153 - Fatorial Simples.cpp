#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant;
    long long int fat = 1;

    cin >> quant;

    for(int i = quant; i >= 1; i--){
        fat *= i;
    }

    cout << fat << endl;

}
