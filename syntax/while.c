#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int valor, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &valor);
	
	while (valor != 0) {
		soma = soma + valor;
		printf("Digite outro valor: ");
		scanf("%d", &valor);
	}
	
	printf("\nSOMA TOTAL: %d", soma);
	
	return 0;
}
