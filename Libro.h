#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

class Libro: public Prodotto{
	
	private:
		
		string isbn;
	public:
	
		Libro(){
			
			cout<<"Libro Creato"<<endl;
		}
		Libro(string titolo,string autore,float prezzo,int quantita,string isbn):Prodotto(titolo,autore,prezzo,quantita){
			
			this->isbn=isbn;
			
			
		}	
		
		void setTitolo(string n_titolo){
			
			titolo=n_titolo;
			
		}
		
		void setAutore(string n_autore){
			
			autore=n_autore;
			
		}
		
		void setPrezzo(float n_prezzo){
			
			prezzo=n_prezzo;
		}
		
		void setQuantita(int n_quantita){
			
			quantita=n_quantita;
		}
		
		void setISBN(string n_isbn){
			
			isbn=n_isbn;
		}
		
		string getISBN(){
			
			return isbn;
		}
		
		void stampa(){
			
			Prodotto::stampa();
			cout<<"ISBN: "<<isbn<<endl;
		}
	
};
