// CALCULADORA.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "pch.h"
#include <iostream>

int soma(int x, int y)
{
	int a = x + y;
	return a;

}
int subtracao(int x, int y)
{
	int a = x - y;
	return a;
}
int multiplicacao(int x, int y)
{
	int a = x * y;
	return a;
}

float divisao(float x, float y)
{
	float a = x / y;
	return a;
}
int main()

{
	int a;
	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	int b;
	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &b);

	int so = soma(a, b);
	int su = subtracao(a, b);
	int m = multiplicacao(a, b);
	float d = divisao((float)a, (float)b);

	printf("O Valor da soma e: %i\n", so);
	printf("O Valor da subtracao e: %i\n", su);
	printf("O Valor da multiplicacao e: %i\n", m);
	printf("O Valor da divisao e: %f\n", d);

	system("pause");

}
