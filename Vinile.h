#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

#include<string>

class Vinile:public Prodotto{
	
	private:
		
		double dimensione;
	public:
	
		Vinile(string titolo,string autore,float prezzo,int quantita,double dimensione):Prodotto(titolo,autore,prezzo,quantita){
			
			this->dimensione=dimensione;
			
			
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
		
		void stampa(){
			
			Prodotto::stampa();
			cout<<"Dimensione: "<<dimensione<<endl;
		}	
	
};



