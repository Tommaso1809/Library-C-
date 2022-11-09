
/*Name:Libreria Estesa
 *Date:07/11/2022
 *Author:Dontu Victor Darius-Polvere Tommaso
 */ 

#include<cstdlib>

#ifndef ARCHIVIO_H
#define ARCHIVIO_H
#include "Archivio.h"
#endif

#ifndef LIBRO_H
#define LIBRO_H
#include "Libro.h"
#endif

#ifndef EBOOK_H
#define EBOOK_H
#include "Ebook.h"
#endif

#ifndef CD_H
#define CD_H
#include "Cd.h"
#endif

#ifndef VINILE_H
#define VINILE_H
#include "Vinile.h"
#endif

#ifndef CANZONE_H
#define CANZONE_H
#include"Canzone.h"
#endif

bool scelta;
string titolo,autore,t,isbn;
float prezzo;
int quantita,scl,s,cond,condizione;
double dimensioni,durata;

Prodotto res;

Libro libro(titolo,autore,prezzo,quantita,isbn);
Vinile vinile(titolo,autore,prezzo,quantita,dimensioni);
CdAudio cd(titolo,autore,prezzo,quantita);
Ebook ebook(titolo,autore,prezzo,quantita,isbn);

Canzone canzone(durata,titolo,autore);


Archivio archivio;
Prodotto prodotto (titolo,autore,prezzo,quantita);


int main(){


	
	do{
		

		
			
			cout<<"----LIBRERIA AVANZATA----"<<endl;
			cout<<"1 Aggiungi Prodotto      "<<endl;
			cout<<"2 Stampa x categoria     "<<endl;
			cout<<"3 Ricerca Prodotti       "<<endl;
			cout<<"4 Rimuovi Prodotto       "<<endl;
			cout<<"0 Uscire ----->          "<<endl;
			cout<<"-------------------------"<<endl;
			cout<<endl;
			cout<<"Inserire la scelta 0|4   "<<endl;
			cin>>scl;
			
			switch(scl){
				
				case 0:
					
					abort();	//finisce l'esecuzione del programma
				break;
				
				case 1:
				
					cout<<"Quale tipo di prodotto vuoi inserire? 1(libro) 2(Ebook) 3(Cd) 4(Vinile)"<<endl;
					cin>>cond;
					
					if(cond==1){
						
						
						cout<<"Inserire il titolo"<<endl;
						cin>>titolo;
						libro.setTitolo(titolo);
						cout<<endl;
						cout<<"Inserire l'autore'"<<endl;
						cin>>autore;
						libro.setAutore(autore);
						cout<<endl;
						cout<<"Inserire il prezzo"<<endl;
						cin>>prezzo;
						libro.setPrezzo(prezzo);
						cout<<endl;
						cout<<"Inserire ISBN "<<endl;
						cin>>isbn;
						libro.setISBN(isbn);
						cout<<endl;
						
						libro.setQuantita(1);
						archivio.addLibro(libro);
						archivio.addProdotto(libro);
						
						
					}
					
					if(cond==2){
						
						cout<<"Inserire il titolo"<<endl;
						cin>>titolo;
						ebook.setTitolo(titolo);
						cout<<endl;
						cout<<"Inserire l'autore'"<<endl;
						cin>>autore;
						ebook.setAutore(autore);
						cout<<endl;
						cout<<"Inserire il prezzo"<<endl;
						cin>>prezzo;
						ebook.setPrezzo(prezzo);
						cout<<endl;
						cout<<"Inserire ISBN "<<endl;
						cin>>isbn;
						ebook.setISBN(isbn);
						cout<<endl;
						
						ebook.setQuantita(1);
						archivio.addEbook(ebook);
						archivio.addProdotto(ebook);
						
						
						
					}
					
				
					if(cond==3){
						
							
						cout<<"Inserire il titolo"<<endl;
						cin>>titolo;
						cd.setTitolo(titolo);
						cout<<endl;
						cout<<"Inserire l'autore'"<<endl;
						cin>>autore;
						cd.setAutore(autore);
						cout<<endl;
						cout<<"Inserire il prezzo"<<endl;
						cin>>prezzo;
						cd.setPrezzo(prezzo);
						
						cd.setQuantita(1);
						archivio.addCd(cd);
						archivio.addProdotto(cd);
						
						cout<<"Inserire il titolo"<<endl;
						cin>>titolo;
						canzone.setTitolo(titolo);
						cout<<endl;
						cout<<"Inserire l'autore'"<<endl;
						cin>>autore;
						canzone.setAutore(autore);
						cout<<endl;
						cout<<"Inserire la durata"<<endl;
						cin>>durata;
						canzone.setDurata(durata);
						
						cd.addCanzoni(canzone);
						
						
					}
					
					if(cond==4){
						
						cout<<"Inserire il titolo"<<endl;
						cin>>titolo;
						vinile.setTitolo(titolo);
						cout<<endl;
						cout<<"Inserire l'autore'"<<endl;
						cin>>autore;
						vinile.setAutore(autore);
						cout<<endl;
						cout<<"Inserire il prezzo"<<endl;
						cin>>prezzo;
						vinile.setPrezzo(prezzo);
						cout<<endl;
						cout<<"Inserire le dimensioni "<<endl;
						cin>>dimensioni;
						vinile.setDimensione(dimensioni);
						cout<<endl;
						
						vinile.setQuantita(1);
						archivio.addVinile(vinile);
						archivio.addProdotto(vinile);
						
					}
					else if(cond>4 || cond<1){
						
						cout<<"Opzione non Disponibile"<<endl;
					}
				
					system("CLS");
					
						
				break;
				
			
				
				
				case 2:
				
					cout<<"Inserire il filtro di categoria 1(libro) 2(ebook) 3(cd) 4(vinile)"<<endl;
					cin>>condizione;
				
					archivio.stampaProdotti(condizione);
					
				break;
				
				case 3:
				
						cout<<"----RICERCA LIBRERIA----"<<endl;
						cout<<"1 Ricerca per Titolo    "<<endl;
						cout<<"2 Ricerca per Autore    "<<endl;
						cout<<"3 Ricerca per Prezzo    "<<endl;
						cout<<"4 Ricerca per ISBN      "<<endl;
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
				
					archivio.removeProdotto(t);
				
				break;
					
			}

			system("PAUSE");
			system("CLS");

		
		cout<<"Vuoi continuare 1(si) 0(no)"<<endl;
		cin>>scelta;
		
	}while(scelta);

	

	return 0;
	
}


	

