//******************************************************************************
// Exemplo de uso de ponteiros
//
// Programa utilizado como exemplo na disciplina de Laboratorio de Algoritmos II
//
// Prof: Jonas T. Reichert
// Data: 26/08/2016
//******************************************************************************

#include <stdio.h>

int main ()
{
	// criacao e inicializacao das variaveis
	int Variavel_1 = 1, Variavel_2 = 2, Variavel_3;
	char Controle = 'n', Descarga;
	
	// criacao dos ponteiros
	int *Ponteiro_1 , *Ponteiro_2;
	
	// enquanto
	while (1)
	{
		// inicializacao dos ponteiros
		Ponteiro_1 = &Variavel_1; // Ponteiro_1 recebe o endereco de Variavel_1
		Ponteiro_2 = &Variavel_2; // Ponteiro_2 recebe o endereco de Variavel_2
		
		// exibe o valor contido em cada variavel a partir do endereco contido 
		// nos ponteiros
		printf ("\nVariavel_1 = %i", *Ponteiro_1);
		printf ("\nVariavel_2 = %i", *Ponteiro_2);
		
		// swap
		Variavel_3 = *Ponteiro_1;
		*Ponteiro_1 = *Ponteiro_2;
		*Ponteiro_2 = Variavel_3;
		
		// exibe o valor contido em cada variavel a partir do endereco contido 
		// nos ponteiros
		printf ("\nVariavel_1 depois do swap = %i", *Ponteiro_1);
		printf ("\nVariavel_2 depois do swap = %i", *Ponteiro_2);
		
		// exibe a solicitacao de controle
		printf ("\n\nDeseja finalizar o programa? (s/n) ");
		// efetua a leitura do comando
		scanf ("%c", &Controle);
		// se o comando indicar a finalizacao, finaliza o loop
		if (Controle == 's') break;
		
		// exibe a solicitacao de um valor
		printf ("\nDigite um valor para a Variavel_1: ");
		// efetua a leitura do valor e transfere o valor para a Variavel_1
		scanf ("%i", Ponteiro_1);
		// exibe a solicitacao de um valor
		printf ("Digite um valor para a Variavel_2: ");
		// efetua a leitura do valor e transfere o valor para a Variavel_2
		scanf ("%i%c", Ponteiro_2, &Descarga);
	}
	// retorna 0
	return 0;
}

