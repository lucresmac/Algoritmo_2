// Quilo_Refeição.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
/*
O Restaurante “Bem-Bão” cobra R$32,00 por cada quilo de refeição. Escreva um algoritmo que leia o peso do prato
montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma, que a balança já desconte o peso do prato.
*/

#include "pch.h"
#include <iostream>

int calculopagamento(float peso)
{
	float pagamento;

	pagamento = (peso * 32);

	return pagamento;
	}


int main()
{
	float peso;

		printf("Favor digitar o peso (em KG): ");
		scanf_s("%f",&peso);

		float valor = calculopagamento(peso);

		printf("Valor do pagamento e R$ %.2f  \n", valor);

		system("pause");
		return 0;
}
