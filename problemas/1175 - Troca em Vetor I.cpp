#include <bits/stdc++.h>
using namespace std;
int main(){
    int n[20], i, o = 0;

    for(i = 0; i < 20; i++){
        scanf("%d", &n[i]);
    }

    for(i = 19; i >= 0; i--){
        printf("N[%d] = %d\n", o, n[i]);
        o += 1;
    }
}
