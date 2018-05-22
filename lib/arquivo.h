
#ifndef _ARQUIVO_H

#define T 6
#define MAX_T 10

#include <stdio.h>

/*
Parâmetros: 
	char * nome = Nome do arquivo
	char * modo = Modo em que o arquivo deve ser aberto. "r, w, rw,..."

Retorno:
	Arquivo ou Nulo (caso falha)
*/
FILE * abrir_arquivo(char * nome, char * modo);


/*
Parâmetros:
	FILE * arquivo = Arquivo aberto
	int vetor[] = Vetor que irá receber a entrada contida no arquivo
*/
void ler_arquivo(FILE * arquivo, int matriz_adjacencia[][MAX_T]);

#endif

