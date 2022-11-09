#ifndef LIBRO_H
#define LIBRO_H
#include "Libro.h"
#endif

class Ebook : public Libro{
	
	public:
		
		Ebook(){
			
			cout<<"Ebook Creato"<<endl;
			
		}
		
		Ebook(string titolo,string autore,float prezzo,int quantita,string isbn)::Libro(titolo,autore,prezzo,quantita,isbn){
			
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
		
		void stampa(){
			
			Libro::stampa();
			
		}
	
	
};

