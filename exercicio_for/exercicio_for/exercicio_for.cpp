// exercicio_for.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	int veta[8];
	int i;
	int total;
	int qt;
	int vetb[8];

	total = 0;
	qt = 0;
	i = 0;

	for (i = 0; i <= 8; i++);
	{
		printf("digite o %i numero : ", i);
		scanf_s("%i", &veta[i]);

	}
	for (i = 0; i <= 8; i++);
	{
		if (veta[i] > 30)
		{
			total = (total + veta[i]);
			qt = (qt + 1);
			vetb[i] = veta[i];
		}

	}

	for  (i = 0; i <= 8;i++)
	{
		printf("%i", vetb[i]);
	}
	printf("A quantidade de numeros maior que 30 e : %i",qt );
	printf("Total dos numeros somado é :%i", total);
}
