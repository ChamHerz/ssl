/*
 * parser.h
 *
 *  Created on: 30/08/2016
 *      Author: Mariela
 */

#ifndef PARSER_H_
#define PARSER_H_
typedef struct parser Parser;
struct parser {
   int maximo;
   char* mensaje;
};
//Constructor
Parser* newParser();
//Destructor
void destroyParser(Parser* parser);
//Metodos
void setMaximo(Parser* parser,int numero);


#endif /* PARSER_H_ */
