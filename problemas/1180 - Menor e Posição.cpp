#include <bits/stdc++.h>
using namespace std;
int main(){
	int num, menor, pos;

	cin >> num;

	int v[num];

	for(int i = 0; i < num; i++){
        cin >> v[i];
	}

	menor = v[0];
	pos = 0;

    for(int i = 0; i < num; i++){
        if(v[i] <= menor){
            menor = v[i];
            pos = i;
        }
	}

	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;

}
