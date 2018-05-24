#include "../lib/arquivo.h"

/*
Parâmetros: 
	char * nome = Nome do arquivo
	char * modo = Modo em que o arquivo deve ser aberto. "r, w, rw,..."

Retorno:
	Arquivo ou Nulo (caso falha)
*/
FILE * abrir_arquivo(char * nome, char * modo) {

	FILE* arquivo = fopen(nome, modo);

	if (!arquivo) { 

		printf("Ocorreu um erro ao abrir o arquivo!\n");

		return NULL;
	}
	else
		return arquivo;
}

/*
Parâmetros:
	FILE * arquivo = Arquivo aberto
	int vetor[] = Vetor que irá receber a entrada contida no arquivo
*/
void ler_arquivo(FILE * arquivo, int matriz_adjacencia[][MAX_T]) {

	int i, j;

	// Realizando a leitura do arquivo e gravando na matriz de adjacencia
	for(i = 1; i <= T; i++)
		for(j = 1; j <= T; j++) 
			fscanf(arquivo, "%d", &matriz_adjacencia[i][j]);
		
}