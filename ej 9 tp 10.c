#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CargarDatos(float chofer[5][9], char nombre[5][20]) {
	for (int i = 0; i < 5; i++) {
		printf("Ingrese Nombre: ");
		scanf("%s", nombre[i]);
		
		for (int j = 1; j < 8; j++) {
			printf("Ingrese horas trabajadas el día %d: ", j);
			scanf("%f", &chofer[i][j - 1]);
			chofer[i][7] += chofer[i][j - 1];
		}
		
		printf("Ingrese sueldo por hora: ");
		scanf("%f", &chofer[i][8]);
		chofer[i][8] *= chofer[i][7];
	}
}

float Paga(float chofer[5][9]) {
	float totalPaga = 0;
	for (int i = 0; i < 5; i++) {
		totalPaga += chofer[i][8];
	}
	return totalPaga;
}

int main() {
	int i, j;
	float chofer[5][9] = {0}, totalPaga = 0, horasMaximas = 0;
	char nombre[5][20], choferMasHoras[20];
	
	CargarDatos(chofer, nombre);
	
	for (i = 0; i < 5; i++) {
		if (chofer[i][7] > horasMaximas) {
			horasMaximas = chofer[i][7];
			strcpy(choferMasHoras, nombre[i]);
		}
	}
	
	totalPaga = Paga(chofer);
	
	printf("Nombre\tHoras\tSueldo\n");
	for (i = 0; i < 5; i++) {
		printf("%s\t%.2f\t%.2f\n", nombre[i], chofer[i][7], chofer[i][8]);
	}
	
	printf("Chofer con más horas trabajadas: %s\n", choferMasHoras);
	printf("Total de paga de la empresa: %.2f\n", totalPaga);
	|
	system("pause");
	
	return 0;
}
