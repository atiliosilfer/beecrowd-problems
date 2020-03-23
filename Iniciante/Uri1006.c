//Atílio Silva Ferreira
//Programa para calcular a media ponderada de 3 valores

#include <stdio.h>

int main () {

    //definir variaveis
    double nota1, nota2, nota3, media;

    //ler valor
    scanf ("%lf %lf %lf", &nota1, &nota2, &nota3);

    //calcular area da circunf
    media = (((nota1*2)+(nota2*3)+(nota3*5))/10);

    //mostrar valor
    printf ("MEDIA = %.1lf\n",media);

    return (0);
}