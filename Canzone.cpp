#ifndef CANZONE_H
#define CANZONE_H
#include"Canzone.h"
#endif

Canzone::Canzone(){
	
}

Canzone::Canzone(double durata,string autore,string titolo){
	
	this->durata=durata;
	this->autore=autore;
	this->titolo=titolo;
	
}



double Canzone::getDurata(){
	
	return durata;
}
string Canzone::getAutore(){
	
	return autore;
}
string Canzone::getTitolo(){
	
	return titolo;
}

void Canzone::setDurata(double n_durata){
	
	durata=n_durata;
	
}
void Canzone::setAutore(string n_autore){
	
	autore=n_autore;
}
void Canzone::setTitolo(string n_titolo){
	
	titolo=n_titolo;
}

void Canzone::stampa(){
	
	cout<<"Titolo: "<<titolo<<endl;
	cout<<"Autore: "<<autore<<endl;
	cout<<"Durata: "<<durata<<endl;
	
}
