// conversao_de_temperatura.cpp 

/*
Você viajou para os Estados Unidos e descobriu que lá a unidade de medida de temperatura é diferente da do Brasil.
Para não ter que acessar um serviço na internet a todo o momento, nem fazer os cálculos manualmente, faça um
algoritmo que converte a temperatura, dada uma unidade de medida e uma temperatura. Ou seja, se a temperatura
for informada em Celsius o algoritmo deve fornecer a temperatura em Fahrenheit, já se a temperatura for fornecida
em Fahrenheit, o resultado deve ser em graus Celsius.
*/

#include "pch.h"
#include <iostream>

int main()
{
	float temp;
	char op;
	float conv;

		temp = 1;
		printf("Conversao de Fahrenheit para Celsius ou Celsius para Fahrenheit \n para sair digite temperatura 0 \n");
		while (temp != 0)
		{
			
			printf("F - Fahrenheit\nC - Celsius \n Digite:  ");
			scanf_s("%c", &op);
			
			printf("Qual temperatura: ");
			scanf_s("%f",&temp);			

			if (op == 'f') 
			{
				conv = ((temp - 32) / 1.8);
				printf("%.0f em %c = %.0f em C \n",temp,op,conv);
				
			}
			if (op == 'c')
			{
				conv = (temp * 1.8 + 32);
				printf("%.0f em %c = %.0f em F \n", temp, op, conv);
				
			}
			
			system("pause");
			system("cls");
		}

}

