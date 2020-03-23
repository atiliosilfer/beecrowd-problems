//Atílio Silva Ferreira
//Programa para calcular volume de uma esfera

#include <stdio.h>

int main () {

    //definir variaveis
    double pi = 3.14159;
    double raio, volume;

    //ler valor
    scanf ("%lf", &raio);

    //calcular area da circunf
    volume = ((4/3.0)*(pi)*(raio*raio*raio));

    //mostrar valor
    printf ("VOLUME = %.3lf\n",volume);

    return (0);
}