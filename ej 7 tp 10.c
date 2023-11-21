#include <stdio.h>
#include <stdlib.h>

void EstablecerCero(int matriz[12][19]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			if (matriz[i][j] < 0) {
				matriz[i][j] = 0;
			}
		}
	}
}

int Negativos(int matriz[12][19]) {
	int count = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			if (matriz[i][j] < 0) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int matriz[12][19], i, j,Antes ;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("Ingrese el elemento %d%d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Matriz Antes:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	Antes = Negativos(matriz);
	printf("La cantidad de elementos negativos antes del cambio es: %d\n", Antes);
	
	EstablecerCero(matriz);
	
	printf("Matriz con el cambio :\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
