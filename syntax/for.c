#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int i, quantidade, valor, soma = 0;
	
	printf("Quantos valores serão digitados? ");
	scanf("%d", &quantidade);
	
	for (i = 1; i <= quantidade; i++) {
		printf("Digite um número: ");
		scanf("%d", &valor);
		soma = soma + valor;
	}
	
	printf("\nSOMA = %d", soma);
	
	return 0;
}
