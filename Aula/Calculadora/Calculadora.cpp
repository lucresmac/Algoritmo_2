// aula0910.cpp: define o ponto de entrada para o aplicativo do console.
//

# include  "pch.h"
# include  < iostream >
 // Variaveis globais
int a; // inteiro
float b; // real (6 casas decimais)
duplo c; // real (10 casas decimais)




int  aula()
{
	// Variaveis locais
	char d; // caractere (pouca precisao)
	bool e; // real (grande precisao) (verdadeiro / falso)

	printf(" Ola mundo! \ n ");

	printf(" Teste \ t \ t Teste \ n \ n ");
	printf(" A \ t B \ t C \ t D \ n ");
	printf(" A \ t B \ t C \ t D \ n ");
	printf(" A \ t B \ t C \ t D \ n ");
	printf(" Mostrando o valor% i \ n ", 5);
	printf(" A soma de% ie% i eh:% i \ n ", 99, 10, 99 + 10);
	printf(" mostrando% .2f, que ehum numero real \ n ", 4.3);
	printf(" Olha soh este numero:% i \ n \ n \ n "); // erro

	int f;
	f = 8;
	a = f * 2;
	printf(" Resultado da multiplicação de% i por 2 eh:% i \ n ", f, a);
	scanf_s(" % i ", &a); // NÃO PULA LINHA, COMANDO DE LEITURA, NAO DE IMPRESSAO
	printf(" \ n \ n Valor digitado foi:% i \ n \ n ", a); // (\ n) para pular linha

	printf(" Digite o valor real: \ n ");
	scanf_s(" % f ", &b);

	printf(" \ Voce digitou:% .2f \ n \ n ", b);

	sistema(" pausa ");
	return  0;
}