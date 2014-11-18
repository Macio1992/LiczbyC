#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctime>
#include "liczbyc.h"

using namespace std;

int main(){
	
	vector < vector <string> > double_slowa;
	ifstream plik;
	ofstream strumien;
	int i, d, wynik;
	
	d = 100;
	ostringstream ss;
	ss << d;
	string str = ss.str();
	
	clock_t t1, t2;
	float ratio;
	ratio = 1./CLOCKS_PER_SEC;
	float czas;
	
	i = 0;
	wynik = 10;
	plik.open("ThinkingInC++2Vone.txt");
	if(plik){
		cout <<"rozmiar |\tczas_czytania |\t czas sortowania |\t czas_zapisywania \n";
		cout <<"\t\tlinii_do_vector | wierszy_vectora |\t do_pliku \n";
		while(i < 5){
			wynik *= 10;
			cout.precision(3);
			cout <<wynik<<"\t\t";
			
			t1 = clock();
			wpiszLinieDoVectora(plik, double_slowa, wynik);
			plik.close();
			t2 = clock();
			czas = ratio*(long)t2-ratio*(long)t1;
	  		cout << fixed << czas << "\t\t";
		
			t1 = clock();
			sortuj(double_slowa);
			t2 = clock();
			czas = ratio*(long)t2-ratio*(long)t1;
	  		cout << fixed << czas << "\t\t\t";
			
			strumien.open(str.c_str());
			t1 = clock();
			wpiszDoPliku(strumien, double_slowa, wynik);
			strumien.close();
			t2 = clock();
			czas = ratio*(long)t2-ratio*(long)t1;
	  		cout << fixed << czas << "\n";
			i++;
			str += "0";
		}
	}
	else
		cout <<"Blad podczas odczytywania pliku\n";
		
	return 0;
}
