// Aula1810_Condicionais_2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


// Somar 4 valores inteiros , fazer a media e mostrar quais dos numeros são iguais a media

int lernumeroint()
{
	int a;

	printf("Digite o numero :");
	scanf_s("%i", &a);

	return a;
}

int calculomedia(int a , int b , int c, int d)
{
	float media;

	media = ((a + b + c + d) / 4);

	return media;




}

int main()
{
	int primeiro = lernumeroint();
	int segundo = lernumeroint();
	int terceiro = lernumeroint();
	int quarto = lernumeroint();

	float med = calculomedia(primeiro, segundo, terceiro, quarto);
	
	if (med < primeiro)
{
		printf("%i \n",primeiro);
}

	if (med < segundo)
	{
		printf("%i \n", segundo);
	}
	if (med < terceiro)
	{
		printf("%i \n", terceiro);
	}
	if (med < quarto)
	{
		printf("%i  ,\n", quarto);
	}

		system("pause");
	return 0;
}
