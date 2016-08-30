#include <stdio.h>
#include "scanner.h"
#include "parser.h"

int main(){

	Scanner* scanner = newScanner();

	setMensaje(scanner,"Soy el objeto scanner\n");

	printf(getMensaje(scanner));
	printf ("nueva linea");
	Parser* parser = newParser();
	setMaximo(parser,20);


	return 0;
}
