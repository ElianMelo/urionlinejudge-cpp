#include <bits/stdc++.h>
using namespace std;
int main(){
    int quant;

    cin >> quant;

    for(long long int i = 1; i <= quant; i++){
        printf("%lld %lld %lld\n", i, i*i, i*i*i);
    }

}
