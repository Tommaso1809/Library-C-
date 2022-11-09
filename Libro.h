#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

class Libro: public Prodotto{
	
	private:
		
		string isbn;
	public:
	
		Libro();
		Libro(string ,string ,float ,int ,string );
	
		
		void setISBN(string n_isbn);
		string getISBN();
		void stampa();
	
};
