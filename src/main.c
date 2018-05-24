#include <stdio.h>
#include "../lib/arquivo.h"


int main(int argc, char const *argv[]) {	
	
	int matriz_adjacencia[MAX_T][MAX_T];
	int i, j;
	FILE * arquivo_entrada, *arquivo_saida;

	arquivo_entrada = abrir_arquivo("Rede.txt", "r");
	arquivo_saida = abrir_arquivo("saida.txt", "w");

	ler_arquivo(arquivo_entrada, matriz_adjacencia);

	int v[6] = {1, 0, 2, 5, 7, 9};

	for(i = 1; i <= T; i++) {
		for(j = 1; j <= T; j++)
			printf("%d ", matriz_adjacencia[i][j]);
		printf("\n");
	}

	escrever_tabela_repasse(arquivo_saida, v, 1);


	return 0;
}