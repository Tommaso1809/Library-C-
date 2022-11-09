#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

#include<string>

class Vinile : public Prodotto{
	
	private:
		
		double dimensione;
	public:
	
		Vinile();
	
		Vinile(string ,string ,float ,int ,double );
		
		void setDimensione(double);
		double getDimensione();
		
		void stampa();
			
};



