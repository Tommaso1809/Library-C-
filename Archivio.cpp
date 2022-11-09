#include"Archivio.h"


Archivio::Archivio(){
	
	cout<<"Archivio Creato"<<endl;

}

void Archivio::addLibro(Libro l){
	
	if(nProdotti==MAX){
		
		cout<<"Libreria Piena"<<endl;
	}
	else{
		
		libri[nProdotti]=l;
		nProdotti++;
	}
	
}

void Archivio::addCd(CdAudio c){
	
	if(nProdotti==MAX){
		
		cout<<"Libreria Piena"<<endl;
	}
	else{
		
		cd[nProdotti]=c;
		nProdotti++;
	}
	
}

void Archivio::addEbook(Ebook e){
	
	if(nProdotti==MAX){
		
		cout<<"Libreria Piena"<<endl;
	}
	else{
		
		ebook[nProdotti]=e;
		nProdotti++;
	}
	
}

void Archivio::addVinile(Vinile v){
	
	if(nProdotti==MAX){
		
		cout<<"Libreria Piena"<<endl;
	}
	else{
		
		vinile[nProdotti]=v;
		nProdotti++;
	}
	
}

void Archivio::addProdotto(Prodotto p){
	
		
	if(nProdotti==MAX){
		
		cout<<"Libreria Piena"<<endl;
	}
	else{
		
		prodotti[nProdotti]=p;
		nProdotti++;
	}
	
}

void Archivio::stampaProdotti(int cond){
	
	if(cond ==1){
		
		for(int i=0;i<nProdotti;i++){
			
			if(libri[i].getPrezzo()!=0){
			
			
				libri[i].stampa();
			}
		}
		
	}	
	
	if(cond ==2){
		
		for(int i=0;i<nProdotti;i++){
			
			if(ebook[i].getPrezzo()!=0){
			
			
				ebook[i].stampa();
			}
		}
		
	}	
	
	if(cond ==3){
		
		for(int i=0;i<nProdotti;i++){
			
			if(cd[i].getPrezzo()!=0){
			
			
				cd[i].stampa();
			}
		}
		
	}	
	
	if(cond==4){
		
		for(int i=0;i<nProdotti;i++){
			
			if(vinile[i].getPrezzo()!=0){
			
			
				vinile[i].stampa();
			}
		}
	}
	
		
}
	


void Archivio::removeProdotto(string t){
	
	for(int i=0;i<nProdotti;i++){
			
			if(libri[i].getTitolo()==t){
				
				libri[i].setPrezzo(0);
				
				cout<<"Eliminazione Effettuata"<<endl;
				cout<<endl;
				break;
				
			}
			
			if(ebook[i].getTitolo()==t){
				
				ebook[i].setPrezzo(0);
				
				cout<<"Eliminazione Effettuata"<<endl;
				cout<<endl;
				break;
				
			}
			
			if(cd[i].getTitolo()==t){
				
				cd[i].setPrezzo(0);
				
				cout<<"Eliminazione Effettuata"<<endl;
				cout<<endl;
				break;
				
			}
			
			if(vinile[i].getTitolo()==t){
				
				vinile[i].setPrezzo(0);
				
				cout<<"Eliminazione Effettuata"<<endl;
				cout<<endl;
				break;
				
			}
			
			
		}
		
}

	
Prodotto Archivio::ricercaTitolo(string t){
	
	Prodotto p;
	
	for(int i=0;i<nProdotti;i++){
		
		if(prodotti[i].getTitolo()==t){
			
			 p=prodotti[i];
			return p;
		}
	}
	
	return p;
}

Prodotto Archivio::ricercaAutore(string a){
	
	Prodotto p;
	
	for(int i=0;i<nProdotti;i++){
		
		if(prodotti[i].getAutore()==a){
			
			 p=prodotti[i];
			return p;
		}
	}
	
 return p;
	
}

Prodotto Archivio::ricercaPrezzo(float pr){
	
	Prodotto p;
	
	for(int i=0;i<nProdotti;i++){
		
		if(prodotti[i].getPrezzo()<=pr){
			
			p=prodotti[i];
			return p;
			
		}
	}
}




void Archivio::stampaTutti(){
	
	for(int i=0;i<nProdotti;i++){
		
			libri[i].stampa();
			ebook[i].stampa();
			cd[i].stampa();
			vinile[i].stampa();
			
		
	}
	
}





