#include <bits/stdc++.h>
using namespace std;
int main(){
    char p1[20], p2[20], p3[20];

    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);

    //Primeira Palavra
    if(strcmp(p1, "vertebrado") == 0){
        //Segunda Palavra
        if(strcmp(p2, "ave") == 0){
            //Terceira Palavra
            if(strcmp(p3, "carnivoro") == 0){
                printf("aguia\n");
            }
            if(strcmp(p3, "onivoro") == 0){
                printf("pomba\n");
            }
        }
        if(strcmp(p2, "mamifero") == 0){
            //Terceira Palavra
            if(strcmp(p3, "onivoro") == 0){
                printf("homem\n");
            }
            if(strcmp(p3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }

    //Primeira Palavra
    if(strcmp(p1, "invertebrado") == 0){
        //Segunda Palavra
        if(strcmp(p2, "inseto") == 0){
            //Terceira Palavra
            if(strcmp(p3, "hematofago") == 0){
                printf("pulga\n");
            }
            if(strcmp(p3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        if(strcmp(p2, "anelideo") == 0){
            //Terceira Palavra
            if(strcmp(p3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            if(strcmp(p3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }

    }
}
