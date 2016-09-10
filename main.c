//******************************************************************************
// Exemplo de uso de ponteiros
//
// Programa utilizado como exemplo na disciplina de Laboratorio de Algoritmos II
//
// Prof: Jonas T. Reichert
// Data: 26/08/2016
//******************************************************************************

#include <stdio.h>

typedef struct {
	int indice;
	char nome [50];
	char telefone [15];
	char endereco [50];
	char email [50];
} entrada;

int main ()
{
	// criacao e inicializacao das variaveis e ponteiros
	entrada Pagina_01;
	entrada *Ptr = &Pagina_01;
	
	//Pagina_01.Indice = 1;
	//Pagina_01.Nome = {"Jonas Tadeu Reichert"};
	//Pagina_01.Telefone = {"(55) 9903-4395"};
	
	printf ("\nInsira a entrada: ");
	//scanf ("%i", &Pagina_01.indice);
	scanf ("%i", &Ptr->indice);
	//scanf ("%i", &(*Ptr).indice);
	
	printf ("\nInsira o Nome: ");
	scanf ("%s", &Pagina_01.nome);
	
	printf ("\nInsira o Telefone: ");
	scanf ("%s", &Pagina_01.telefone);
	
	printf ("\nEntrada: %i", Pagina_01.indice);
	//printf ("\nNome: %s", Pagina_01.nome);
	printf ("\nNome: %s", Ptr->nome);
	printf ("\nNome: %s", (*Ptr).nome);
	printf ("\nTelefone: %s", Pagina_01.telefone);
	
	// retorna 0
	return 0;
}

