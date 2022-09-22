#include <stdio.h>
#include <locale.h>

//Soma

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int x, y, soma;
	
	printf("Insira o valor de X: ");
	scanf("%d", &x);
	
	printf("Insira o valor de Y: ");
	scanf("%d", &y);
	
	soma = x + y;
	
	printf("\nSOMA = %d", soma);
	
	
	return 0;
}
