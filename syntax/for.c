#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int i, quantidade, valor, soma = 0;
	
	printf("Quantos valores ser�o digitados? ");
	scanf("%d", &quantidade);
	
	for (i = 1; i <= quantidade; i++) {
		printf("Digite um n�mero: ");
		scanf("%d", &valor);
		soma = soma + valor;
	}
	
	printf("\nSOMA = %d", soma);
	
	return 0;
}
