// Idade_de_votacao.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
/*
Crie um algoritmo em PORTUGOL que leia a idade de uma pessoa e informe a sua classe eleitoral:
 não eleitor (abaixo de 16 anos);
 eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
 eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).
*/


#include "pch.h"
#include <iostream>

int main()
{
	int idade;
	idade = 1;
	while (idade != 0)
	{
		printf("Digite sua idade ou 0 para sair \n ");
		scanf_s("%i", &idade);

		if ((idade < 16) && (idade > 0))
		{
			printf("Nao eleitor \n");
		}

		if ((idade >= 18) && (idade < 65))
		{
			printf("Eleitor obrigatorio \n");
		}

		if (((idade >= 16) && (idade < 18)) || (idade > 65))
		{
			printf("Eleitor Facutativo \n");
		}

		system("pause");
		system("cls");
	}



}
