
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

/*
Parâmetros:
	FILE * arquivo = arquivo de saída aberto com a opção "w"
	int vetor_distancias[T] = vetor de distancias do vertice que deseja fazer a tabela de repasse
	int fechar_arquivo = Verificação se pode fechar(salvar) o arquivo
Retorno:
	Vazio
*/
void escrever_tabela_repasse(FILE * arquivo, int vetor_distancias[T], int fechar_arquivo);

#endif

