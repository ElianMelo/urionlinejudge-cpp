#include <bits/stdc++.h>
using namespace std;
int main(){
    float x1, y1, dist;
    float x2, y2;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    dist = pow(pow((x2-x1), 2) + pow((y2-y1), 2), 1/2.0);

    printf("%.4f\n", dist);
}
