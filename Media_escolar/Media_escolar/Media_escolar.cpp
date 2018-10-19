// Media_escolar.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/* 
O sistema de nota de uma instituição atribui notas aos alunos através de conceito. Sabendo das faixas associadas a
cada conceito, faça um ´programa que leia 3 notas de um aluno, calcule a média e informe a qual conceito a média
está relacionada.
Nota Conceito
>= 9.0 A
>= 7.5 e < 9.0 B
>= 6.0 e < 7.5 C
>= 4.0 e < 6.0 D
< 4.0 E

*/

#include "pch.h"
#include <iostream>
#include <stdlib.h>


int lernotas()
{
	float a;

		printf("Escreva a nota \n");
		scanf_s("%f", &a);
		
		return a;
}

int calculomed(float nota1, float nota2, float nota3)
{
	float media;
	media = ((nota1 + nota2 + nota3) / 3);

	if (media >= 9)
	{
		char resultado[] = "Sua media foi A \n";
	}
	if ((media >= 7.5) && (media < 9))
	{
		char resultado[] = "Sua media foi B \n";
	}
	if ((media >= 6) && (media < 7.5))
	{
		char resultado[] = "Sua media foi C \n";
	}
	if ((media >= 4) && (media < 6))
	{
		char resultado[] ="Sua media foi D \n";
	}
	if (media < 4)
	{
		char resultado[] = "Sua media foi E \n";
	}

	   	return resultado;
}

int main()
{
	float nota1 = lernotas();
	float nota2 = lernotas();
	float nota3 = lernotas();

	char resultado = calculomed(nota1, nota2, nota3);
	
	printf("%c", resultado);


	system("pause");
	return 0;
}
