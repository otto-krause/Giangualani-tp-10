#include <stdio.h>
#include <stdlib.h>
		
		int ContarNegativos(int matriz[5][6]) {
		int negativos = 0;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 6; j++) {
				if (matriz[i][j] < 0) {
					negativos++;
}
}
}
		return negativos;
}
		
		void Ceros( int matriz[5][6]) {
		int ceros = 0;
		for (int i = 0; i < 5; i++) {
			if (matriz[i][i] == 0) {
				ceros++;
}
}
		printf("La cantidad de ceros en la diagonal principal es: %d\n", ceros);
}
		
		int main() {
			int matriz[5][6], i, j, can = 0;
			
			for (i = 0; i < 5; i++) {
				for (j = 0; j < 6; j++) {
					printf("Ingrese el elemento %d%d: ", i + 1, j + 1);
				scanf("%d", &matriz[i][j]);
}
}
			
			can= ContarNegativos(matriz);
			printf("La cantidad de números negativos es: %d\n", can);
			
			Ceros(matriz);
			
			system("pause");
			return 0;

}
