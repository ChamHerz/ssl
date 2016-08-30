#include <stdio.h>
#include "scanner.h"

int main(){

	Scanner* scanner = newScanner();

	setMensaje(scanner,"Soy el objeto scanner\n");

	printf(getMensaje(scanner));
	printf ("nueva linea");
	return 0;
}
