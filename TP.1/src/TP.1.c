/*
 ============================================================================
Trabajo Práctico número 1:

Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)

2. Ingresar 2do operando (B=y)

3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)

4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”

5. Salir

• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.

• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado).

• Deberán contemplarse los casos de error (división por cero, etc).

• Documentar todas las funciones.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Operaciones.h"

int main(void)
{
    int opcion;
    int primerOperando;
    int segundoOperando;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factorialDelPrimerOperando;
    int factorialDelSegundoOperando;
    int flagDelPrimerOperando;
    int flagDelSegundoOperando;
    int flagOperacionesRealizadas;

    primerOperando = 0;
    segundoOperando = 0;
    suma = 0;
    resta = 0;
    division = 0;
    multiplicacion = 0;
    factorialDelPrimerOperando = 0;
    factorialDelSegundoOperando = 0;
    flagOperacionesRealizadas = 1;
    flagDelPrimerOperando = 1;
    flagDelSegundoOperando = 1;

    setbuf(stdout, NULL);

    do
    {
        printf("\n1- Ingresar 1er operando. (A = %d)\n", primerOperando);
        printf("2- Ingresar 2do operando. (B = %d)\n", segundoOperando);
        printf("3- Calcular todas las operaciones.\n");
        printf("4- Informar resultados.\n");
        printf("5- Salir.\n");
        scanf("%d", &opcion);

        while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5)
		{
		    printf("Error, debe seleccionar una opcion del menu: ");
		    scanf("%d", &opcion);
		}

        switch(opcion)
        {
            case 1:
            primerOperando = PrimerOperandoIngreso(primerOperando);
            flagDelPrimerOperando = 0;
            break;

            case 2:
            segundoOperando = SegundoOperandoIngreso(segundoOperando);
            flagDelSegundoOperando = 0;
            break;

            case 3:
            if(flagDelPrimerOperando == 0 && flagDelSegundoOperando == 0)
            {
                suma = OperacionSumar(primerOperando, segundoOperando);
                resta = OperacionRestar(primerOperando, segundoOperando);
                division = OperacionDividir(primerOperando, segundoOperando);
                multiplicacion = OperacionMultiplicar(primerOperando, segundoOperando);
                factorialDelPrimerOperando = FactorialPrimerOperando(primerOperando);
                factorialDelSegundoOperando = FactorialSegundoOperando(segundoOperando);
                printf("Felicitaciones, las operaciones se realizaron con exito. \n");
                flagOperacionesRealizadas = 0;
            }
            else
            {
                printf("Error, para poder realizar las operacion es necesario cargar los operando\n");
            }
            break;

            case 4:
            	if(flagOperacionesRealizadas == 0)
            	{
            		printf("El resultado de A+B es: %d\n", suma);
            		printf("El resultado de A-B es: %d\n", resta);
            		if(primerOperando != 0 && segundoOperando != 0)
            		{
            			printf("El resultado de la division es: %.2f \n", division);
            		}
            		else
            		{
            			printf("No es posible dividir por cero.\n");
            		}
            		printf("El resultado de A*B es: %d\n", multiplicacion);
            		printf("El factorial de A es: %d y El factorial de B es: %d\n", factorialDelPrimerOperando, factorialDelSegundoOperando);
            	}
            	else
            	{
            		printf("Error, primero se deben realizar las operaciones. \n");
            	}
        }

    }while(opcion != 5);

    return EXIT_SUCCESS;
}


