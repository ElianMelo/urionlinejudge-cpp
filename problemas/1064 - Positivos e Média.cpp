#include <bits/stdc++.h>
using namespace std;
int main(){
    float num, tot, med;
    int cont = 0, post = 0;

    while(cont < 6){
        scanf("%f", &num);
        if(num > 0){
            post += 1;
            tot += num;
        }
        cont += 1;
    }
    med = tot / post;
    printf("%d valores positivos\n", post);
    printf("%.1f\n", med);
}
