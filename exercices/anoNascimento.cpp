#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int anoDeNascimento, anoQueQuerSaberAIdade, anoAtual, resultado;
	
	printf("Em que ano você nasceu? ");
	scanf("%d", &anoDeNascimento);
	
	printf("Insira um ano: ");
	scanf("%d", &anoQueQuerSaberAIdade);
	
	printf("Insira o ano atual: ");
	scanf("%d", &anoAtual);
	
	resultado = anoQueQuerSaberAIdade - anoDeNascimento;
	
	if (anoQueQuerSaberAIdade > anoAtual) {
		printf("\nEm %d, você terá %d anos.", anoQueQuerSaberAIdade, resultado);
	} else if (anoQueQuerSaberAIdade < anoAtual && anoQueQuerSaberAIdade > anoDeNascimento) {
		printf("\nEm %d, você tinha %d anos", anoQueQuerSaberAIdade, resultado);
	} else if (anoQueQuerSaberAIdade < anoDeNascimento) {
		resultado = resultado * -1;
		printf("\nEm %d, ainda faltava %d anos para você nascer.", anoQueQuerSaberAIdade, resultado);
	}
	
	return 0;
}
