#include <stdio.h>
#include <locale.h>

void limpar_entrada() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {} 
}

int main() {
	
	double C,F;
	char resp = 's';
	
	do {
		
		printf("Digite a temperatura em Celsius: ");
		scanf("%lf", &C);
		
		F = (C * 9/5) + 32;
		
		printf("\nResultado: %.2lf\n", F);
		
		printf("Deseja inserir outro valor? <S/N> ");
		limpar_entrada();
		scanf("%c", &resp);
		
	} while (resp == 's');
	
	return 0;
}
