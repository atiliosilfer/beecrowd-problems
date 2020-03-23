//Atílio Silva Ferreira
//Programa para calcular a media ponderada de 2 valores

#include <stdio.h>

int main () {

    //definir variaveis
    double nota1,nota2,media;

    //ler valor
    scanf ("%lf %lf", &nota1, &nota2);

    //calcular area da circunf
    media = (((nota1*3.5)+(nota2*7.5))/11);

    //mostrar valor
    printf ("MEDIA = %.5lf\n",media);

    return (0);
}