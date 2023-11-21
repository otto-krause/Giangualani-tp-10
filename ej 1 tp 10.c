#include <stdio.h>
#include <stdlib.h>
		
		void Matriz(int matriz[4][4]){
		printf("Ingrese los elementos de la matriz:\n");
		for(int i=0; i<4; i++){
			for(int j=0; j<4; j++){
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
}
}
}
		
		int SumarMatriz(int matriz[4][4]){
			int suma = 0;
		for(int i=0; i<4; i++){
				for(int j=0; j<4; j++){
			suma += matriz[i][j];
}
}
		return suma;
}
		
		int main() {
			int matriz[4][4], i, j, cont0=0,sumaMatriz ;
			
			Matriz(matriz);
			
			for(i=0; i<4; i++){
				for(j=0; j<4; j++){
				printf("%d\t", matriz[i][j]);
				if(matriz[i][j] == 0){
					cont0++;
}
}
				printf("\n");
}
			
			printf("Hay %d ceros en la matriz.\n", cont0);
			
			sumaMatriz = SumarMatriz(matriz);
			printf("La suma de todos los elementos de la matriz es: %d\n", sumaMatriz);
			
			

              system("pause");
			  return 0 ;

}

