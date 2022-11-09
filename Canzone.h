#include<iostream>
#include<string>
using namespace std;

class Canzone{
	
	private:
		
		double durata;
		string autore;
		string titolo;
	public:
	
		Canzone();
		
		Canzone(double,string,string);
		
		double getDurata();
		string getAutore();
		string getTitolo();
		
		void setDurata(double);
		void setAutore(string);
		void setTitolo(string);
		
		void stampa();
		
		
	
	
};
