// Aula1810_Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

// receber 4 numeros inteiro de retornar o maior numero


int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int	maior;

	printf("Escreva o 1 numero : ");
	scanf_s("%i",&num1);
	printf("Escreva o 2 numero : ");
	scanf_s("%i", &num2);
	printf("Escreva o 3 numero : ");
	scanf_s("%i", &num3);
	printf("Escreva o 4 numero : ");
	scanf_s("%i", &num4);

	if ((num1 >= num2) && (num1 >= num3) && (num1 >= num4))
	{
	printf("Maior numero e %i  \n",num1);
	}
	if ((num2 >= num1) &&(num2 >= num3)&& (num2 >= num4))
	{
	printf("Maior numero e %i \n", num2);
	
	}

	if ((num3 >= num1) && (num3 >= num2) && (num3 >= num4))
	{
	printf("Maior numero e %i \n", num3);
	
	}

	if ((num4 >= num1) && (num4 >= num2) && (num4 >= num3))
	{
	printf("Maior numero e %i \n", num4);
	
	}
			
	system("PAUSE");
	return 0;
}
