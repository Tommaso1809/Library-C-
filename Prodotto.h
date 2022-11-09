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
	
		Prodotto(){
			
		}
		
		Prodotto(string titolo,string autore,float prezzo,int quantita){
			
			this->titolo=titolo;
			this->autore=autore;
			this->prezzo=prezzo;
			this->quantita=quantita;
		}
		
		string getTitolo(){
			
			return titolo;
		}
		
		string getAutore(){
			
			return autore;
		}
		
		float getPrezzo(){
			
			return prezzo;
		}
		
		int getQuantita(){
			
			return quantita;
		}
		
		void setTitolo(string n_titolo){
			
			titolo=n_titolo;
		}
		
		void setAutore(string n_autore){
			
			autore=n_autore;
		}
		
		void setPrezzo(float n_prezzo){
			
			prezzo=n_prezzo;
		}
		
		void setQuantita(int n_quantita){
			
			quantita=n_quantita;
		}
		
		void stampa(){
			
			cout<<"Titolo: "<<titolo<<endl;
			cout<<"Autore: "<<autore<<endl;
			cout<<"Prezzo: "<<prezzo<<endl;
			cout<<"Quantita: "<<quantita<<endl;
			cout<<endl;
		}
				
	
};
