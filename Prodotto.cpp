#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

Prodotto::Prodotto(){
	
}


Prodotto::Prodotto(string titolo,string autore,float prezzo,int quantita){
			
			this->titolo=titolo;
			this->autore=autore;
			this->prezzo=prezzo;
			this->quantita=quantita;
}


string Prodotto::getTitolo(){
		
		return titolo;
	}
	
string Prodotto:: getAutore(){
	
	return autore;
}

float Prodotto:: getPrezzo(){
	
	return prezzo;
}

int Prodotto:: getQuantita(){
	
	return quantita;
}

void Prodotto::setTitolo(string n_titolo){
	
	titolo=n_titolo;
}

void Prodotto::setAutore(string n_autore){
	
	autore=n_autore;
}

void Prodotto::setPrezzo(float n_prezzo){
	
	prezzo=n_prezzo;
}

void Prodotto::setQuantita(int n_quantita){
	
	quantita=n_quantita;
}

void Prodotto::stampa(){
	
	cout<<"Titolo: "<<titolo<<endl;
	cout<<"Autore: "<<autore<<endl;
	cout<<"Prezzo: "<<prezzo<<endl;
	cout<<"Quantita: "<<quantita<<endl;

}
