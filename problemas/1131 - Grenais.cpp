#include <bits/stdc++.h>
using namespace std;
int main(){
    int tot_grenais = 0, op = 0, vit_inter = 0, vit_gremio = 0, empates = 0;

    while(1){
        int gol_inter, gol_gremio;

        cin >> gol_inter >> gol_gremio;

        tot_grenais++;

        if(gol_inter > gol_gremio){
            vit_inter++;
        }else if(gol_gremio > gol_inter){
            vit_gremio++;
        }else if(gol_inter == gol_gremio){
            empates++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;

        cin >> op;

        if(op == 2){
            break;
        }
    }

    printf("%d grenais\n", tot_grenais);
    printf("Inter:%d\n", vit_inter);
    printf("Gremio:%d\n", vit_gremio);
    printf("Empates:%d\n", empates);

    if(vit_inter > vit_gremio){
        cout << "Inter venceu mais" << endl;
    }else if(vit_gremio > vit_inter){
        cout << "Gremio venceu mais" << endl;
    }else if(vit_inter == vit_gremio){
        cout << "Nao houve vencedor" << endl;
    }


}
