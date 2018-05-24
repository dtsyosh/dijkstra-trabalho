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

/*
Parâmetros:
	FILE * arquivo = arquivo de saída aberto com a opção "w"
	int vetor_distancias[T] = vetor de distancias do vertice que deseja fazer a tabela de repasse
	int fechar_arquivo = Verificação se pode fechar(salvar) o arquivo
Retorno:
	Vazio
*/
void escrever_tabela_repasse(FILE * arquivo, int vetor_distancias[T], int fechar_arquivo) {

	fprintf(arquivo,
		"________\n u | %d |\n v | %d |\n x | %d |\n w | %d |\n y | %d |\n z | %d |\n________\n", vetor_distancias[0], vetor_distancias[1], vetor_distancias[2],
		  vetor_distancias[3], vetor_distancias[4], vetor_distancias[5]);

	if(fechar_arquivo)
		fclose(arquivo);
}