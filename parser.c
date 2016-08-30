#include "parser.h"
#include <stdlib.h>

//constructor
Parser* newParser(){
 Parser* p;
 p = malloc(sizeof(struct parser));
 return p;
}
//Destructor
void destroyParser(Parser* parser){
   free (parser);
}

//Metodo
void setMaximo(Parser* parser,int numero) {
   parser->maximo = numero;
}

