#include "../lib/grafo.h"

void dijkstra(int matriz[][MAX_T], int verticeInicial, int fecha_arquivo)
{
	int fechaVertice[MAX_T];			//Vertices que ja foram fechados
	int contador, menorDistancia, vertMenorDistancia, i, linha, coluna;
	int verticeAtual;
    int caminho[50];
    int distancia[MAX_T];


	for(linha = 1; linha <= T; linha++)
		for(coluna = 1; coluna <= T; coluna++)
			if(matriz[linha][coluna] == 0)
				matriz[linha][coluna] = 999;


	for(contador = 1; contador <= T; contador++)
	{
		fechaVertice[contador] = 0;		//Estado do vertice
		distancia[contador] = matriz[verticeInicial][contador];		//Adquirindo a distancia dos vizinhos da origem
	}

	fechaVertice[verticeInicial] = 1;
	contador = 2;		//Começa em 2 pois o ponto de origem não entra nos calculos

	while(contador <= T)
	{
		menorDistancia = 99;

		for(i = 1; i <= T; i++)
		{
			if(distancia[i] < menorDistancia && !fechaVertice[i])			// Se a distância do vertice 'i' for menor do que o da variavel Dist e o vertice não estiver fechado
			{
				menorDistancia = distancia[i];		// Grava uma distancia menor
				vertMenorDistancia = i;				//Gravo o vertice que pertencie a menor distancia gravada
			}
		}

		fechaVertice[vertMenorDistancia] = 1;     //Fecho o vertice com a menor distancia.

		for(i = 1; i <= T; i++)			//Atualiza as distancias passando por este vertice
		{
			if( (distancia[vertMenorDistancia] + matriz[vertMenorDistancia][i]) < distancia[i] && !fechaVertice[i])	//Se a soma do custo do vertice atual + o caminho pro proximo vertice for menor que o custo do proximo vertice E ele estiver aberto
				distancia[i] = distancia[vertMenorDistancia] + matriz[vertMenorDistancia][i];						//Atualizo o custo daquele vertice passando pelo vertice atual
		}

		contador++;

	}

	for(i = 1; i <= T; i++) if(distancia[i] == 999) {distancia[i] = 0; break; }
	escrever_tabela_repasse(distancia, fecha_arquivo);
}