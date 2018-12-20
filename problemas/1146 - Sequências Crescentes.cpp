#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;

    while(1){
        cin >> num;

        if(num == 0){
            break;
        }

        for(int i = 1; i <= num; i++){
            if(i < num){
                printf("%d ", i);
            }else if(i == num){
                printf("%d\n", i);
            }
        }
    }

}
