#include <stdio.h>

int main() {
	
	int n, contador = 1;
	
	printf("Digite um número: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		for (int j = 0; j < i; j++){
			printf("%d ", contador);
			contador++;
		}

		printf("\n");
	}

	return 0;
}