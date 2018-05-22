
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

