#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

#include<vector>
#include<string>

class CdAudio : public Prodotto{
	
	private:
		
		vector<string>canzoni;
	
	public:
	
		CdAudio();
		CdAudio(string titolo,string autore,float prezzo,int quantita) : Prodotto(titolo,autore,prezzo,quantita){
			
			this->canzoni=canzoni;
		}	
		
		string getAutore(){
			
			return autore;
		}
		
		float getPrezzo(){
			
			return prezzo;
		}
		
	
		void stampa(){
			
			Prodotto::stampa();
			
			cout<<"----Lista Canzoni----"<<endl;
			
			for(int i=0;i<canzoni.size();i++){
				
				cout<<canzoni.at(i)<<endl;
				
			}
		}
};
