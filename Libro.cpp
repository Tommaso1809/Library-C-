#ifndef LIBRO_H
#define LIBRO_H
#include "Libro.h"
#endif


Libro::Libro(){
	
	
}

Libro::Libro(string titolo,string autore,float prezzo,int quantita,string isbn) : Prodotto(titolo,autore,prezzo,quantita){
			
		this->isbn=isbn;
			
}


void Libro::setISBN(string n_isbn){
	
	isbn=n_isbn;
}

string Libro::getISBN(){
	
	return isbn;
}

void Libro::stampa(){
	
	Prodotto::stampa();
	cout<<"ISBN: "<<isbn<<endl;
}	


