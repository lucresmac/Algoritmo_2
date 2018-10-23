// Loja_de_frutas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/*
Uma fruteira está vendendo frutas com a seguinte tabela de preços:
				até 5kg			acima de 5kg
morango		  R$ 2,50 p/ KG      R$ 2,20 p/ KG	
maças         R$ 1,80 p/ KG      R$ 1,50 p/ KG

OBS : Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda
um desconto de 10% sobre este total. 
Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a
quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
*/

#include "pch.h"
#include <iostream>

int solicitacao()
{	int qtmaca;
	int qtmorango;

	printf("Qual quantidade de macas : ");
	scanf_s("%i", &qtmaca);

	printf("Qual quantidade de morgangos : ");
	scanf_s("%i", &qtmorango);

	return qtmaca, qtmorango;

}

int calculodecusto(int qtmaca, int qtmorango)
{
	float customo;
	float customa;
	float custotot;

	if (qtmorango >= 5)
	{
		customo = (qtmorango * 2.20);
	}
	else
	{
		customo = (qtmorango * 2.50);
	}

	if (qtmaca >= 5)
	{
		customa = (qtmaca * 1.50);
	}
	else
	{
		customa = (qtmorango * 1.80);
	}

	custotot = customo + customa;

	if (custotot > 25)
	{
		custotot = (custotot * 0.90);

	}
	if ((qtmaca+qtmorango) > 8)
	{
		custotot = (custotot * 0.90);
	}

	return custotot;
}

int main()
{
	int qtmaca = solicitacao();
	int qtmorango = solicitacao();

	float pagamento = calculodecusto(qtmaca, qtmorango);

	printf("Valor Total da compra e de R$ %f", pagamento);

	system("pause");
	return 0;

}

