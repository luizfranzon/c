#include <stdio.h>
#include <string.h>

int main()
{
   
   	int idade;
    char nome[50];
    
    printf("Digite o valor da idade: ");
    scanf("%d", &idade);

	printf("Digite o nome da pessoa: ");
	scanf("%[^\n]", nome);

    printf("IDADE = %d\n", idade);
    printf("NOME = %s\n", nome);
    
    return 0;
}
