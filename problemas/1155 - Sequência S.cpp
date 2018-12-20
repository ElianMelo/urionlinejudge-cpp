#include <bits/stdc++.h>
using namespace std;
int main(){
  int inc;
  double soma = 0;

  for(double i = 1; i < 101; i++){
    soma += 1/i;
  }

  printf("%.2lf\n", soma);
}
