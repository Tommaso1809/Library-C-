#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
#endif

#ifndef CANZONE_H
#define CANZONE_H
#include"Canzone.h"
#endif

#define MAX 100

#include<string>

using namespace std;

class CdAudio : public Prodotto{
	
	private:
		
		Canzone canzoni[MAX];
		int nCanzoni=0;
	
	public:
	
		CdAudio();
		
		void addCanzoni(Canzone);
		
		CdAudio(string,string,float,int);
		
		void stampa();
};
