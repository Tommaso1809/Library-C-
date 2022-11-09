#include <iostream>
#include <string>
#define MAX 100

#ifndef PRODOTTO_H
#define PRODOTTO_H
#include "Prodotto.h"
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


using namespace std;

class Archivio{
	
	private:
		
		int nProdotti=0;
		
		Prodotto prodotti[MAX];
		Libro libri[MAX];
		CdAudio cd[MAX];
		Vinile vinile[MAX];
		Ebook ebook[MAX];
		
		
		int prodottiND[MAX];
		
		
		
	
	public:

		Archivio();
		
		
		void addProdotto(Prodotto);
		void addLibro(Libro);
		void addCd(CdAudio);
		void addEbook(Ebook);
		void addVinile(Vinile);
		
		void stampaTutti();
		
		void stampaProdotti(int);
		
		void removeProdotto(string);
		
		Prodotto ricercaTitolo(string);
		
		Prodotto ricercaAutore(string);
		
		Prodotto ricercaPrezzo(float);
		
	
		
		
		
};
