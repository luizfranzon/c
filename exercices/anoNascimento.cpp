#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int anoDeNascimento, anoQueQuerSaberAIdade, anoAtual, resultado;
	
	printf("Em que ano voc� nasceu? ");
	scanf("%d", &anoDeNascimento);
	
	printf("Insira um ano: ");
	scanf("%d", &anoQueQuerSaberAIdade);
	
	printf("Insira o ano atual: ");
	scanf("%d", &anoAtual);
	
	resultado = anoQueQuerSaberAIdade - anoDeNascimento;
	
	if (anoQueQuerSaberAIdade > anoAtual) {
		printf("\nEm %d, voc� ter� %d anos.", anoQueQuerSaberAIdade, resultado);
	} else if (anoQueQuerSaberAIdade < anoAtual && anoQueQuerSaberAIdade > anoDeNascimento) {
		printf("\nEm %d, voc� tinha %d anos", anoQueQuerSaberAIdade, resultado);
	} else if (anoQueQuerSaberAIdade < anoDeNascimento) {
		resultado = resultado * -1;
		printf("\nEm %d, ainda faltava %d anos para voc� nascer.", anoQueQuerSaberAIdade, resultado);
	}
	
	return 0;
}
