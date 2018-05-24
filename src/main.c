#include <stdio.h>
#include "../lib/arquivo.h"


int main(int argc, char const *argv[]) {	
	
	int matriz_adjacencia[MAX_T][MAX_T];
	int i, j;

	ler_arquivo(abrir_arquivo("../Rede.txt", "r"), matriz_adjacencia);


	for(i = 1; i <= T; i++) {
		for(j = 1; j <= T; j++)
			printf("%d ", matriz_adjacencia[i][j]);
		printf("\n");
	}
	return 0;
}