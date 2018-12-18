#include <bits/stdc++.h>
using namespace std;
int main(){
    float cons, dist, comb;

    scanf("%f", &dist);
    scanf("%f", &comb);

    cons = dist / comb;

    printf("%.3f km/l\n", cons);
}
