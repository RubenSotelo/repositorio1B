#include <stdio.h>
#include <stdlib.h>
//trabajo original
int main(int argc, char *argv[]) {
	int a,b,c,el_primero,el_segundo,el_tercero,el_cuarto;
	printf("ingrese a:");
	scanf("%i",&a);
	printf("ingrese b:");
	scanf("%i",&b);
	c=a+b;
	printf("tu resultado es %i:",c);
	printf("\n");
	//la primer modicicacion
	//mi variable es: el_primero
	el_primero=a-b;
	printf("mi resultado es %i:",el_primero);
	printf("\n");
	//la segunda modicicacion
	//mi variable es: el_segundo
	el_segundo=a*b;
	printf("mi resultado es %i:",el_segundo);
	printf("\n");
	//la tercera modicicacion
	//mi variable es: el_tercero
	el_tercero=a/b;
	printf("mi resultado es %i:",el_tercero);
	printf("\n");
	//la cuarta modicicacion
	//mi variable es: el_cuarto
	el_cuarto=pow(a,b);
	printf("mi resultado es %i:",el_cuarto);
	return 0;
}
