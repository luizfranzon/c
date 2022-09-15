#include <stdio.h>

int main() {
	
	int idade = 32;
	double salario = 4560.9;
	char nome[50] = "Maria Silva";
	char sexo = 'F';
	
	printf("A funcionario %s, do sexo %c, ganha %.2lf, e tem %i anos de idade. \n", nome, sexo, salario, idade);
	
	return 0;
}
