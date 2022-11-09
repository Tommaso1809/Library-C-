
/*Name:Libreria Estesa
 *Date:07/11/2022
 *Author:Dontu Victor Darius-Polvere Tommaso
 */ 


#ifndef ARCHIVIO_H
#define ARCHIVIO_H
#include "Archivio.h"
#endif



int main(){

	bool scelta;
	
	string titolo,autore;
	float prezzo;
	int quantita,scelta;

	Prodotto res;


	Archivio archivio;
	Prodotto prodotto (titolo,autore,prezzo,quantita);


	
	do{
		

		
			
			cout<<"----LIBRERIA AVANZATA----"<<endl;
			cout<<"1 Aggiungi Prodotto      "<<endl;
			cout<<"2 Stampa Prodotti        "<<endl;
			cout<<"3 Ricerca Prodotti       "<<endl;
			cout<<"4 Rimuovi Prodotto       "<<endl;
			cout<<"0 Uscire ----->          "<<endl;
			cout<<"-------------------------"<<endl;
			cout<<endl;
			cout<<"Inserire la scelta 0|4   "<<endl;
			cin>>scelta;
			
			switch(scelta){
				
				case 0:
					
					abort();	//finisce l'esecuzione del programma
				break;
				
				case 1:
				
					cout<<"Inserire il titolo"<<endl;
					cin>>titolo;
					prodotto.setTitolo(titolo);
					cout<<endl;
					cout<<"Inserire l'autore'"<<endl;
					cin>>autore;
					prodotto.setAutore(autore);
					cout<<endl;
					cout<<"Inserire il prezzo"<<endl;
					cin>>prezzo;
					prodotto.setPrezzo(prezzo);
					cout<<endl;
					
					prodotto.setQuantita(1);
					archivio.aggiungiProdotto(prodotto);
					
					
					
				break;
				
				case 2:
				
					archivio.stampaProdotti();
					
				break;
				
				case 3:
				
						cout<<"----RICERCA LIBRERIA----"<<endl;
						cout<<"1 Ricerca per Titolo    "<<endl;
						cout<<"2 Ricerca per Autore    "<<endl;
						cout<<"3 Ricerca per Prezzo    "<<endl;
						cout<<"------------------------"<<endl;
						cout<<endl;
						cout<<"Inserire la scelta 1|3"<<endl;
						cin>>s;
			
		
					
						switch(s){
							
							case 1:
								
							
								cout<<"Inserire un titolo"<<endl;
								cin>>titolo;
								res=archivio.ricercaTitolo(titolo);
								res.stampa();
							break;
							
							case 2:
								
								cout<<"Inserire un autore "<<endl;
								cin>>autore;
								res=archivio.ricercaAutore(autore);
								res.stampa();
							break;
							
							case 3:
								
								cout<<"Inserire un prezzo"<<endl;
								cin>>prezzo;
							 	res=archivio.ricercaPrezzo(prezzo);
								res.stampa();	
							break;	
						}
				
				break;
				
				case 4: 
				
		
					cout<<"Inserire il titolo del prodotto da eliminare: "<<endl;
					cin>>t;
				
					archivio.rimuoviProdotto(t);
				
				break;
					
			}

		
		cout<<"Vuoi continuare 1(si) 0(no)"<<endl;
		cin>>scelta;
		
	}while(scelta);

	

	return 0;
	
}


	

