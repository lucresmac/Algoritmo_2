// Exercicio_fort.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//



#include "pch.h"
#include <iostream>

int main()
{
	int vet[10];
	int i;

	for (i = 0; i <= 10; i++)
	{
		vet[i] = ((i+1) * 2);

	}

	for (i = 0; i < 10; i += 2)
	{
		printf("i% | ", vet[i]);
		
	}
}
