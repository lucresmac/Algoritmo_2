// Loja_de_roupas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
/*
A Loja Mamão com Açúcar está vendendo seus produtos em 5(cinco) prestações sem juros. Faça um algoritmo que
receba um valor de uma compra e mostre o valor das prestações.
*/


#include "pch.h"
#include <iostream>

int calculopagamento(float valor,int parcela)
{
	float vparcela;
		vparcela = valor / parcela;

		return vparcela;
}


int main()
{
	float valor;
	int parcela;

	printf("Qual valor do produto : ");
	scanf_s("%f", &valor);

	printf("Qual quantidade de parcelas : ");
	scanf_s("%i", &parcela);
	
	float vparcela = calculopagamento(valor, parcela);

	printf("Produto de valor R$ %.2f em %i x de R$ %.2f \n ", valor, parcela, vparcela);

	system("pause");
	return 0;

}


