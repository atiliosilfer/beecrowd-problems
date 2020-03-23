//Atílio Silva Ferreira
//Programa para calcular a salario de funcionarios com bonus

#include<stdio.h>
#include<string.h>

int main () {

    //definir variaveis

    char nome [50];
    double salarioFixo, vendas, salarioTotal;

    //ler valor
    gets (nome);
    scanf ("%lf %lf", &salarioFixo, &vendas);

    //calcular salario com bonus
    salarioTotal = salarioFixo + (0.15*vendas); 

    //mostrar valor
    printf ("TOTAL = R$ %.2lf\n", salarioTotal);

    return (0);
}