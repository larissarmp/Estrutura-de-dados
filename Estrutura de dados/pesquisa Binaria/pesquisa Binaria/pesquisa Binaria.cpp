// pesquisa Binaria.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#define MANX 10
typedef long Tchave;
typedef struct TRegistro{
	Tchave Chave;
}TRegistro;
typedef int TIndice;
typedef struct TTabela {
	TRegistro array[MANX+1];
	TIndice n;
}TTabela;
void Inicio(TTabela *T)
{
	T->n = 0;
}
void Insere(TRegistro Reg, TTabela *T)
{
	if (T->n == MANX)
		printf_s("Erro : tabela cheia\n");
	else
	{
		T->n++;
		T->array[T->n] = Reg;
	}
}

TIndice Binaria(Tchave x, TTabela *T)
{
	TIndice i;
	
	if (T->n == 0)
		return 0;

		int Esquer = 1;
		int Direit = T->n;
		do{
			i = (Esquer + Direit) / 2;
			if (x > T->array[i].Chave)
				Esquer = i + 1;
			else Direit = i - 1;
		} while (x != T->array[i].Chave && Esquer <= Direit);
		if (x == T->array[i].Chave) return i; else return 0;
		
}
int _tmain(int argc, _TCHAR* argv[])
{
	TTabela T;
	TRegistro reg;
	Tchave vetor[MANX + 1];
	TIndice pos;
	int  i;

	Inicio(&T);

	/* Insere as chaves ordenas tabela */
	for (i = 1; i <= MANX; i++)
	{
		vetor[i] = i;
		reg.Chave = vetor[i];
		Insere(reg, &T);
		printf_s("Inseriu: %ld\n", vetor[i]);
	}

	/* Pesquisa Binaria em cada chave */
	printf("Pesquisa Binaria (chaves ordenadas)\n");
	for (i = 1; i <= MANX; i++) {
		pos = Binaria(i, &T);
		if (pos == 0)
		{
			printf_s("Pesquisa Falhou\n");
			return 0;
		}
		printf_s("Registro %d na posicao: %d\n", i, pos);
	}
	
	return 0;
	//Console.ReadKey();
}

