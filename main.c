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
	// criacao e inicializacao das variaveis e ponteiros
	//char Minha_String [] = {"1234567890"};
	char Minha_String [11] = {'1','2','3','4','5','6','7','8','9','0'};
	char *Meu_Ponteiro = &Minha_String;
	
	// exibe o valor contido em cada posicao da string a partir do endereco 
	// contido no ponteiro
	do
	{
		printf ("\nO Meu_Ponteiro aponta para o valor: %c\n", *Meu_Ponteiro);
		Meu_Ponteiro ++;
	}
	while (*Meu_Ponteiro != 0);
	
	printf ("\nO tamanho de Minha_String e: %i\n", sizeof (Minha_String) );
	
	// retorna 0
	return 0;
}

