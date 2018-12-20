#include <bits/stdc++.h>
using namespace std;
int main(){

    //Pergunta ao usuário o tamanho da matriz
    int tam;

    while(cin >> tam){
        if(tam == 0){
            break;
        }

        int m[tam][tam];

        //Define o incremento e o regulador
        int inc = 1, reg = 0;

        //Atribui os valores

        //Código das diagonais

        //Faz a varredura por toda a matriz
        for(int g = 0; g < tam; g++){
            //Faz a varredura inicial e as seguintes
            //i [i][j]
            for(int i = 0; i < tam; i++){
                //j [i][j]
                for(int j = 0; j < tam; j++){
                    if(i == j - reg || i - reg == j){
                        m[i][j] = inc;
                    }
                }
            }
            //Aumenta o incremento
            inc++;
            //Aumenta o regulador
            reg++;
        }

        //Imprime os valores
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam; j++){
                printf("%3d", m[i][j]);
                if(j < tam-1)printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }
}
