#include <stdio.h>

int main()
{
	int ancho,largo;
	float x1,y1,porcentajeA,porcentajeL;
	int coordenadaizquierdaX;
	int coordenadaizquierdaY;
	int coordenadaderechaX;
	int coordenadaderechaY;
	scanf("%i", &ancho);
	scanf("%i", &largo);
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &porcentajeA);
	scanf("%f", &porcentajeL);
	coordenadaizquierdaX=(int)ancho*x1;
	coordenadaizquierdaY=(int)largo*y1;
	coordenadaderechaX=(int)ancho*porcentajeA+coordenadaizquierdaX;
	coordenadaderechaY=(int)largo*porcentajeL+coordenadaizquierdaY;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, largo, x1, y1, porcentajeA, porcentajeL, coordenadaizquierdaX, coordenadaizquierdaY, coordenadaderechaX, coordenadaderechaY);

}
