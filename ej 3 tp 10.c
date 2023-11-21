#include <stdio.h>
#include <stdlib.h>

void Compras(float registros[5][6]) {
	for (int i = 0; i < 5; i++) {
		printf("Cliente nro %d\n", i + 1);
		for (int j = 0; j < 6; j++) {
			if (j == 0) {
				registros[i][j] = i + 1;
			} else {
				printf("Ingrese la compra en el dia %d: ", j);
				scanf("%f", &registros[i][j]);
			}
		}
	}
}

int Mayor(float registros[5][6], int cliente) {
	int diaMayorVenta = 1;
	float ventaMaxima = registros[cliente - 1][1]; 
	
	for (int j = 2; j < 6; j++) {
		if (ventaMaxima < registros[cliente - 1][j]) {
			ventaMaxima = registros[cliente - 1][j];
			diaMayorVenta = j;
		}
	}
	
	return diaMayorVenta;
}

int main() {
	int i, dia, clienteSeleccionado,diaMayorVenta ;
	float registros[5][6] = {0}, cliente, ventaMaxima = 0;
	
	Compras(registros);
	
	for (i = 0; i < 5; i++) {
		for (int j = 1; j < 6; j++) {
			if (ventaMaxima < registros[i][j]) {
				ventaMaxima = registros[i][j];
				cliente = registros[i][0];
				dia = j;
			}
		}
	}
	
	printf("La mayor venta fue %.2f del cliente %.2f en el dia %d\n", ventaMaxima, cliente, dia);
	
	
	
	printf("Ingrese el número de cliente para encontrar el día de la mayor venta: ");
	scanf("%d", &clienteSeleccionado);
	
     diaMayorVenta = Mayor(registros, clienteSeleccionado);
	printf("El día de la mayor venta para el cliente %d fue el día %d\n", clienteSeleccionado, diaMayorVenta);
	
	system("pause");
	
	return 0;
}
