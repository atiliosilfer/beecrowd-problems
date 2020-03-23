//Atílio Silva Ferreira
//Programa para calcular a salario de funcionarios com bonus

#include<stdio.h>
#include<string.h>

int main () {

    //definir variaveis

    int codigo1, codigo2, quantidade1, quantidade2;
    double valorUnid1, valorUnid2, valorTotal;

    //ler valor
    scanf ("%d %d %lf", &codigo1, &quantidade1, &valorUnid1);
    scanf ("%d %d %lf", &codigo2, &quantidade2, &valorUnid2);

    //calcular salario com bonus
    valorTotal = ((quantidade1*valorUnid1)+(quantidade2*valorUnid2)); 

    //mostrar valor
    printf ("VALOR A PAGAR: R$ %.2lf\n", valorTotal);

    return (0);
}