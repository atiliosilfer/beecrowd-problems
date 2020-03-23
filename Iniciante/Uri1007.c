//Atílio Silva Ferreira
//Programa para calcular a diferença dos produtos (a*b)-(c*d)

#include <stdio.h>

int main () {

    //definir variaveis
    int a,b,c,d,dif;

    //ler valor
    scanf ("%d %d %d %d", &a, &b, &c, &d);

    //calcular area da circunf
    dif = ((a*b)-(c*d));

    //mostrar valor
    printf ("DIFERENCA = %d\n",dif);

    return (0);
}