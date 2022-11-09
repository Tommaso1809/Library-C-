#include<iostream>
#include<string>
using namespace std;

class Prodotto{
	
	private:
		
		string titolo;
		string autore;
		float prezzo;
		int quantita;
	public:
	
		//Costruttore
		Prodotto();
		Prodotto(string,string,float,int);
		
		//Getter
		string getTitolo();
		string getAutore();
		float getPrezzo();
		int getQuantita();
		
		//Setter
		void setTitolo(string);
		void setAutore(string);
		void setPrezzo(float);
		void setQuantita(int);
		
		
		
		void stampa();	
	
};
