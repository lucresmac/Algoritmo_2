// Loja_venda_de_produtos.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//


/*
Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e
escrever o total (total = quantidade adquirida * preço unitário), o desconto e o total a pagar (total a pagar = total -
desconto), sabendo-se que:
 - Se quantidade <= 5 o desconto será de 2%
 - Se quantidade > 5 e quantidade <=10 o desconto será de 3%
 - Se quantidade > 10 o desconto será de 5%
*/

#include "pch.h"
#include <iostream>

int leituraproduto(int resp)
{
	
		if (resp == 1)
		{
			int a;
			printf("Qual a quantidade do produto: ");
			scanf_s("%i", &a);
			
			return a;
		}
		if (resp == 2)
		{
			float b;
			printf("Qual a valor unitario do produto: ");
			scanf_s("%f", &b);

			return b;
		}
		
}

int calculocusto(int qt, float valor)
{
	float pagamento;
	pagamento = (qt*valor);

	if (qt <= 5)
	{
		pagamento = pagamento * 0.98;
	}
	if ((qt > 5) && (qt <= 10))
	{
		pagamento = pagamento * 0.97;
	}
	if (qt > 10)
	{
		pagamento = pagamento * 0.95;
	}
	
	return pagamento;
}

int main()
{
	int resp;
	char nome;
	
	printf(" 1- quantidade \n 2 - valor unitario do produto \n digite :");
	scanf_s("%i", &resp);
	
	int qt = leituraproduto(resp);
	
	printf(" 1- quantidade \n 2 - valor unitario do produto \n digite :");
	scanf_s("%i", &resp);
	
	float valor = leituraproduto(resp);
	
	float pagamento = calculocusto(qt, valor);
	
	printf("Valor de pagamento e %f",pagamento);

}

