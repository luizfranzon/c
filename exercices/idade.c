#include <stdio.h>
#include <locale.h>

//Idade

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int idade1, idade2;
	char nome1[50], nome2[50];
	double media;
	
	printf("Dados da primeiro pessoa: \n");
	
	printf("Nome: ");
	scanf("%s", nome1);

	printf("Idade: ");
	scanf("%d", &idade1);
	
	printf("Dados da segunda pessoa: \n");
	
	printf("Nome: ");
	scanf("%s", nome2);
	
	printf("Idade: ");
	scanf("%d", &idade2);
	
	media = (idade1 + idade2) / 2;
	
	printf("\nA idade média de %s e %s é de %.1lf anos", nome1, nome2, media);
	
	return 0;
} 
