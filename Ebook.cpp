#ifndef EBOOK_H
#define EBOOK_H
#include"Ebook.h"
#endif


Ebook::Ebook(){
	
	
	
}

Ebook::Ebook(string titolo,string autore,float prezzo,int quantita,string isbn) :Libro(titolo,autore,prezzo,quantita,isbn){
	
}



void Ebook::stampa(){
	
	Libro::stampa();
	
}


