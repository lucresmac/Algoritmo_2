// Exercicio_fort.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//



#include "pch.h"
#include <iostream>

int main()
{
	int veta[10];
	int vetb[10];
	int i;

	for (i = 0; i <= 10; i++)
	{
		veta[i] = ((i+1) * 2);

	}

	for (i = 0; i <= 10; i++)
	{
		vetb[i] = (i +10);

	}

	   	  
	for (i = 0; i < 10; i++)
	{
		printf("%3i + %3i = %3i \n ", veta[i],vetb[i],(veta[i]+vetb[i]));
		
	}
	system("pause");
	return 0;

}
