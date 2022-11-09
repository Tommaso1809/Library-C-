#ifndef VINILE_H
#define VINILE_H
#include"Vinile.h"
#endif


Vinile::Vinile(){
	
}

Vinile::Vinile(string titolo,string autore,float prezzo,int quantita,double dimensione):Prodotto(titolo,autore,prezzo,quantita){
	
	this->dimensione=dimensione;
	
	
}	

void Vinile::setDimensione(double n_dim){
	
	dimensione=n_dim;
}

double Vinile::getDimensione(){
	
	return dimensione;
}


void Vinile::stampa(){
	
	Prodotto::stampa();
	cout<<"Dimensione: "<<dimensione<<endl;
}	
