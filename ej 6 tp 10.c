#include <stdio.h>
#include <stdlib.h>
		
		void CargarMatriz(int matriz[12][12]) {
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				printf("Ingrese el elemento %d%d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
}
}
}
		
		int Diagonal(int matriz1[12][12], int matriz2[12][12]) {
			int coincidencias = 0;
		
		for (int i = 0; i < 12; i++) {
			if (matriz1[i][i] == matriz2[i][i]) {
				coincidencias++;
}
}
		
		return coincidencias;
}
		
		int main() {
			int matriz1[12][12], matriz2[12][12],coincidencias ;
			
			printf("Matriz 1:\n");
			CargarMatriz(matriz1);
			
			printf("Matriz 2:\n");
			CargarMatriz(matriz2);
			
			coincidencias = Diagonal(matriz1, matriz2);
			
			if (coincidencias == 12) {
				printf("Tienen la misma diagonal principal.\n");
} 
			else {
				printf("Tienen una diagonal principal diferente.\n");
}
			
			system("pause");
			return 0;

		
}

