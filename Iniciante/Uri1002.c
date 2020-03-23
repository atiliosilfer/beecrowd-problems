//Atílio Silva Ferreira
//Programa para calcular area de uma circunferencia

#include <stdio.h>

int main () {

    //definir variaveis
    double n = 3.14159;
    double raio, area;

    //ler valor
    scanf ("%lf", &raio);

    //calcular area da circunf
    area = n*(raio*raio);

    //mostrar valor
    printf ("A=%.4lf\n",area);

    return (0);
}