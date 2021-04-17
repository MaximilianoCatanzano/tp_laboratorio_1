#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

//primerOperando
int PrimerOperandoIngreso(int primerOperando)
{
    int primerOperandoIngreso;
    printf("\nIngrese el primer operando: ");
    scanf("%d", &primerOperandoIngreso);

    return primerOperandoIngreso;
}

//segundoOperando
int SegundoOperandoIngreso(int segundoOperando)
{
    int segundoOperandoIngreso;
    printf("\nIngrese el segundo operando: ");
    scanf("%d", &segundoOperandoIngreso);

    return segundoOperandoIngreso;
}

//sumar
int OperacionSumar(int primerOperando , int segundoOperando)
{
	int resultado;

	resultado = primerOperando + segundoOperando;

	return resultado;
}

//restar
int OperacionRestar(int primerOperando , int segundoOperando)
{
	int resultado;

	resultado = primerOperando - segundoOperando;

	return resultado;
}

//dividir
float OperacionDividir(int primerOperando , int segundoOperando)
{
    float resultado;

    resultado = (float) primerOperando / segundoOperando;

    return resultado;
}

//multiplicar
int OperacionMultiplicar(int primerOperando , int segundoOperando)
{
	int resultado;

	resultado = primerOperando * segundoOperando;

	return resultado;
}

//factorialPrimerOperando
int FactorialPrimerOperando(int primerOperando)
{
    int i;
    int factorial;
    setbuf(stdout,NULL);
    factorial = 1;

    for(i = 1 ; i <= primerOperando ; i++)
    {
        factorial *= i;
    }

    return factorial;
}

//factorialSegundoOperando
int FactorialSegundoOperando(int segundoOperando)
{
    int i;
    int factorial;
    setbuf(stdout,NULL);
    factorial = 1;

    for(i = 1 ; i <= segundoOperando ; i++)
    {
        factorial *= i;
    }

    return factorial;
}

