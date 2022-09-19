#include <stdio.h>

int main() {
	
	int hora;
	printf("Digite uma hora do dia: ");
	scanf("%i", &hora);
	
	if (hora <= 24) {
		if (hora < 12 && hora >= 6) {
		printf("Bom dia");
			
		} else if (hora >= 12 && hora < 18) {
			printf("Boa tarde");
		} else {
			printf("Boa noite");
		}
	} else {
		printf("A hora deve estar entre 0 e 24");
	}

	return 0;
}
