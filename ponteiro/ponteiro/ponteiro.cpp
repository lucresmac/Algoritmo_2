// ponteiro.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//void ex1() {
//	int i = 3, j = 5;
//	int *p, *q;
//	p = &i;
//	q = &j;
//
//	if (p == &i) {
//		printf("a) true\n");
//	}
//	else {
//		printf("a) false\n");
//	}
//
//	printf("b) %p\n", *p - *q);
//
//	printf("c) %p\n", *q + 1);;
//
//	printf("d) %p\n", *p++);
//}

//ex2
void troca(float *a, float *b) {

	float c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	float d = 5, e = 6;
	float *x, *y;
	x = &d;
	y = &e;

	*x = 2;
	*y = 3;
	printf("x- %f\n y- %f\n", *x, *y);
	troca(x, y);
	printf("x- %f\n y- %f\n", *x, *y);
	system("pause");