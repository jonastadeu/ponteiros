//************************************************************************
// Programa exemplo de utilizacao de ponteiros
//
// Laboratorio de Algoritmos II
//
// Autor: Jonas T. R.
// Data: 02/09/2016
//************************************************************************

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Numero = 2;
int *Ptr_Numero = &Numero;

int main(int argc, char *argv[]) {
	
	printf ("Insira um numero: ");
	
	//scanf ("%i", &Numero);
	scanf ("%i", Ptr_Numero);
	
	//printf ("O numero inserido foi: %i\n", Numero);
	printf ("O numero inserido foi: %i\n", *Ptr_Numero);
	
	return 0;
}

