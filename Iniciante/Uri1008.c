//Atílio Silva Ferreira
//Programa para calcular a salario de funcionarios

#include <stdio.h>

int main () {

    //definir variaveis
    int funcionarios, horas;
    double salarioHoras, salarioTotal;

    //ler valor
    scanf ("%d %d %lf", &funcionarios, &horas, &salarioHoras);

    //calcular salario
    salarioTotal = (horas*salarioHoras); 

    //mostrar valor
    printf ("NUMBER = %d\nSALARY = U$ %.2lf\n", funcionarios, salarioTotal);

    return (0);
}