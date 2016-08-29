#include "scanner.h"
#include <stdlib.h>

//CONSTRUCTOR
Scanner* newScanner(){
	Scanner* s;
	s = malloc(sizeof(struct scanner));
	return s;
}

//DESTRUCTOR
void destroyScanner(Scanner* scanner){
	free(scanner);
}

//METODOS
void setMensaje(Scanner* scanner, char* mensaje){
	scanner->MENSAJE = mensaje;
}

char* getMensaje(Scanner* scanner){
	return scanner->MENSAJE;
}
