#ifndef __VENTDEQ_H__
#define __VENTDEQ_H__
#ifdef __cplusplus
extern "C" {
#endif


/* Desarrollado por DEQ2000 */
/* 2021 : miércoles 15 diciembre */
/* Maximos de ventanas al crear: 255 */


#define LOOPENGINE(x) while(x)
#include <windows.h>
#include <stdbool.h>



typedef struct tagVentana{
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wndclassex;
	const char *titulo;
	unsigned int ancho;
	unsigned int alto;
	unsigned int id;
	unsigned int mx;
	unsigned int my;
	unsigned char key[256];
	bool activada;
}*PVENTANA,VENTANA;



PVENTANA VentanaIniciar ( const char *titulo, const unsigned int ancho, unsigned int alto );
void     VentanaSalirAll( void );
bool     Loop           ( PVENTANA Pventana );
void     Config         ( bool modo );
int      Mousex         ( PVENTANA Pventana );
int      Mousey         ( PVENTANA Pventana );
bool     Tecla          ( PVENTANA Pventana, char key );



#ifdef __cplusplus
	}
#endif
#endif