// ConsoleApplication2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>


int main()
{
	int type;
	float liters;
	float total;

	printf("Digite 1 para alcool e 2 para gasolina. \n");
	scanf_s("%i", &type);

	printf("Digite a quantidade de litros que deseja abastecer. \n");
	scanf_s("%f", &liters);

	if (type == 1) {
		if (liters < 20) {
			total = ((liters * 2.60) * 0.97);
		}
		else {
			total = ((liters * 2.60) * 0.95);
		}
	}
	else if (type == 2) {
		if (liters < 20) {
			total = ((liters * 4.10) * 0.96);
		}
		else {
			total = ((liters * 4.10) * 0.94);
		}
	}

	printf(" %.1f  litros pagando %.2f \n", liters, total);

	system("PAUSE");
	return 0;
}

