#include <bits/stdc++.h>
using namespace std;
int main(){

    int total = 7;

    for(int i = 1; i < 10; i += 2){
        for(int j = total; j > total - 3; j -= 1){
            printf("I=%d J=%d\n", i, j);
        }
        total += 2;
    }

}
