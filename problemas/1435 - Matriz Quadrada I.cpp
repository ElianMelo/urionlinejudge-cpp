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

        //Define o inicio, o fim e o incremento
        int ini = 0, fim = tam - 1, inc = 1;

        //Atribui os valores

        //Código de cercamento indo do final até o inicio

        //Faz a varredura por toda a matriz
        for(int g = 0; g < tam; g++){
            //Faz a varredura inicial e as seguintes
            //i [i][j]
            for(int i = ini; i <= fim; i++){
                //j [i][j]
                for(int j = ini; j <= fim; j++){
                    if(i == fim || i == ini || j == fim || j == ini){
                        m[i][j] = inc;
                    }
                }
            }
            //Aumenta o incremento
            inc++;
            //Reduz o fim para a varredura seguinte
            fim--;
            //Aumenta o inicio para a varredura seguinte
            ini++;
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
