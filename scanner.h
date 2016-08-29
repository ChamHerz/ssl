#ifndef SCANNER_H_
#define SCANNER_H_

typedef struct scanner Scanner;

struct scanner {
	//PROPIEDADES
	char* MENSAJE;
};

//CONSTRUCTOR
Scanner* newScanner();

//DESTRUCTOR
void destroyScanner(Scanner* scanner);

//METODOS
void setMensaje(Scanner* scanner, char* mensaje);

char* getMensaje(Scanner* scanner);

#endif /* SCANNER_H_ */
