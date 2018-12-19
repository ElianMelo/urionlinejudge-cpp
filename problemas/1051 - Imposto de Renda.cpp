#include <bits/stdc++.h>
using namespace std;
int main(){
    float sal, taxa, imp, nvsal, nvsalteste;

    scanf("%f", &sal);

    if(sal >= 0.00 && sal <= 2000.00){
        printf("Isento\n");
    }else if(sal >= 2000.01 && sal <= 3000.00){
        taxa = 0.08;
        imp = (sal - 2000) * taxa;
        printf("R$ %.2f\n", imp);
    }else if(sal >= 3000.01 && sal <= 4500.00){
        taxa = 0.18;
        nvsal = sal - 3000;
        imp = nvsal * taxa;

        taxa = 0.08;
        imp += (sal - nvsal - 2000) * taxa;
        printf("R$ %.2f\n", imp);
    }else if(sal > 4500.00){
        taxa = 0.28;
        nvsalteste = sal - 4500;
        imp = nvsalteste * taxa;

        taxa = 0.18;
        nvsal = sal - nvsalteste - 3000;
        imp += nvsal * taxa;

        taxa = 0.08;
        imp += (sal - nvsalteste - nvsal - 2000) * taxa;
        printf("R$ %.2f\n", imp);
    }
}
