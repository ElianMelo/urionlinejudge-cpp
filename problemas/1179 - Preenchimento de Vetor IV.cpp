#include <bits/stdc++.h>
using namespace std;
int main(){
	int v_impar[5], v_par[5], pos_impar = 0, pos_par = 0, num;

	for(int i = 0; i < 15; i++){
        cin >> num;

        if(num % 2 == 0){
            v_par[pos_par] = num;
            pos_par += 1;
            if(pos_par == 5){
                for(int i = 0; i < 5; i++){
                    cout << "par[" << i << "] = " << v_par[i] << endl;
                }
                pos_par = 0;
                int v_par[5];
            }

        }else{
            v_impar[pos_impar] = num;
            pos_impar += 1;
            if(pos_impar == 5){
                for(int i = 0; i < 5; i++){
                    cout << "impar[" << i << "] = " << v_impar[i] << endl;
                }
                pos_impar = 0;
                int v_impar[5];
            }

        }

	}

    for(int i = 0; i < pos_impar; i++){
        cout << "impar[" << i << "] = " << v_impar[i] << endl;
    }

    for(int i = 0; i < pos_par; i++){
        cout << "par[" << i << "] = " << v_par[i] << endl;
    }

}
