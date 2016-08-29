#include <stdio.h>
#include "scanner.h"

int main(){

	Scanner* scanner = newScanner();

	setMensaje(scanner,"Soy el objeto scanner");

	printf(getMensaje(scanner));

	return 0;
}
