#include <stdio.h>
#include <string.h>

int main () {

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 19;
    salario = 0.00;
    altura = 1.81;
    genero = 'M';
    strcpy(nome, "Luiz Fernando");
    
	printf("IDADE = %d\n", idade);
 	printf("SALARIO = %.2lf\n", salario);
 	printf("ALTURA = %.2lf\n", altura);
 	printf("GENERO = %c\n", genero);
 	printf("NOME = %s\n", nome); 

    return 0;
}
