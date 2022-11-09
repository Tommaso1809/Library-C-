#ifndef CD_H
#define CD_H
#include"Cd.h"
#endif

#include<iostream>

CdAudio::CdAudio(){
	
}

CdAudio::CdAudio(string titolo,string autore,float prezzo,int quantita) : Prodotto(titolo,autore,prezzo,quantita){
	

}	

void CdAudio::addCanzoni(Canzone c){
	
		
	canzoni[nCanzoni]=c;
	nCanzoni++;
}


void CdAudio::stampa(){
	
	Prodotto::stampa();
	
	cout<<"----Lista Canzoni----"<<endl;
	
	for(int i=0;i<nCanzoni;i++){
		
		canzoni[i].stampa();
		
	}
}
