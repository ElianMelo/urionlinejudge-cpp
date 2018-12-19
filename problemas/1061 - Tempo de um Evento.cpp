#include <bits/stdc++.h>
using namespace std;
int main(){
    char day1[4], esp1[2], esp2[2], esp3[2], esp4[2], day2[4];
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    int di = 0, hr = 0, mi = 0, se = 0;

    scanf("%s%d", day1, &d1);
    scanf("%d%s%d%s%d", &h1, esp1, &m1, esp2, &s1);
    scanf("%s%d", day2, &d2);
    scanf("%d%s%d%s%d", &h2, esp3, &m2, esp4, &s2);

    //Todos os dados são iguais
    if(d1 == d2 && h1 == h2 && m1 == m2 && s1 == s2){
        //Nada acontece
    //O segundo dia é maior (ou igual) que o primeiro
    }else if(d2 >= d1){
        di = d2 - d1;
        //A segunda hora é maior (ou igual) que a primeira
        if(h2 >= h1){
            hr = h2 - h1;
            //O segundo minuto é maior (ou igual) que o primeiro
            if(m2 >= m1){
                mi = m2 - m1;
                //O segundo segundo é maior (ou igual) que o primeiro
                if(s2 >= s1){
                    se = s2 - s1;
                //O primeiro segundo é maior que o primeiro
                }else{
                    se = 60 - s1 + s2;
                    mi -= 1;
                }
            //O primeiro minuto é maior que o segundo
            }else{
                mi = 60 - m1 + m2;
                hr -= 1;
                //O segundo segundo é maior (ou igual) que o primeiro
                if(s2 >= s1){
                    se = s2 - s1;
                //O primeiro segundo é maior que o primeiro
                }else{
                    se = 60 - s1 + s2;
                    mi -= 1;
                }
            }
        //A primeira hora é maior que a segunda
        }else{
            hr = 24 - h1 + h2;
            di -= 1;
            //O segundo minuto é maior (ou igual) que o primeiro
            if(m2 >= m1){
                mi = m2 - m1;
                //O segundo segundo é maior (ou igual) que o primeiro
                if(s2 >= s1){
                    se = s2 - s1;
                //O primeiro segundo é maior que o primeiro
                }else{
                    se = 60 - s1 + s2;
                    mi -= 1;
                }
            //O primeiro minuto é maior que o segundo
            }else{
                mi = 60 - m1 + m2;
                hr -= 1;
                //O segundo segundo é maior (ou igual) que o primeiro
                if(s2 >= s1){
                    se = s2 - s1;
                //O primeiro segundo é maior que o primeiro
                }else{
                    se = 60 - s1 + s2;
                    mi -= 1;
                }
            }
        }
    }

    printf("%d dia(s)\n", di);
    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", mi);
    printf("%d segundo(s)\n", se);

    //Segundos COMPLETO
    //Minutos COMPLETO
    //Horas COMPLETO
}
