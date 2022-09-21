#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int count = 0;
	
	while (count <= 15) {
		printf("%d \n", count);
		count++;
	}
}
