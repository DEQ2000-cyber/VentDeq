#include "VentDeq.H"
#include <stdio.h>


int main( void ){

	PVENTANA a1 = VentanaIniciar("Ventana #1",100,100);
	PVENTANA a2 = VentanaIniciar("Ventana #2",380,280);
	PVENTANA a3 = VentanaIniciar("Ventana #3",500,500);
	Config(1);

	int X1=0,Y1=0;
	int X2=0,Y2=0;
	int X3=0,Y3=0;

	while( Loop( a1 ) || Loop( a2 ) || Loop( a3 ) ){
		if ( Tecla(a1,27) ){printf("HOLA\n"); }
		X1 = Mousex(a1), Y1 = Mousey(a1);
		X2 = Mousex(a2), Y2 = Mousey(a2);
		X3 = Mousex(a3), Y3 = Mousey(a3);
		printf("#1 X: %i Y: %i ",  X1,Y1 );
		printf("#2 X: %i Y: %i ",  X2,Y2 );
		printf("#3 X: %i Y: %i\n", X3,Y3 );
	}

	VentanaSalirAll();

	return 0;
}