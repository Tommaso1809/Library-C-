#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

#define MAX 100


class Archivio{
	
	private:
		
		Prodotto prodotti[MAX];
		int nProdotti=0;
		int nND=0;
		int prodottiND[MAX];
		
	public:
	
		Archivio(){
			
		}
	
		void aggiungiProdotto(Prodotto p){
			
			if(MAX==nProdotti){
			
				
				cout<<"Libreria Piena"<<endl;
			}
			else{
			
				prodotti[nProdotti]=p;
				nProdotti++;
				
			}
		}
		
		void stampaProdotti(){
			
			cout<<"----Lista Prodotti----"<<endl;
			
			for(int i=0;i<nProdotti;i++){
			
				for(int j=0; j<nProdotti; j++){
					
					if(prodottiND[j]!=i)
					prodotti[i].stampa();
				}
			
			
			}
		}
		
		
		Prodotto ricercaTitolo(string t){
			
			Prodotto p;
			
			for(int i=0;i<nProdotti;i++){
				
				if(prodotti[i].getTitolo()==t){
					
					 p=prodotti[i];
					return p;
				}
			}
			
			return p;
		}
		
		Prodotto ricercaAutore(string a){
			
			Prodotto p;
			
			for(int i=0;i<nProdotti;i++){
				
				if(prodotti[i].getAutore()==a){
					
					 p=prodotti[i];
					return p;
				}
			}
			
		 return p;
			
		}
		
		Prodotto ricercaPrezzo(float pr){
			
			Prodotto p;
			
			for(int i=0;i<nProdotti;i++){
				
				if(prodotti[i].getPrezzo()<=pr){
					
					p=prodotti[i];
					return p;
					
				}
			}
		}
		

		void rimuoviProdotto(string t){
			
			for(int i=0;i<nProdotti;i++){
				
				if(prodotti[i].getTitolo()==t){
					prodottiND[i]=i;
				}
			}
		
		}	
};
