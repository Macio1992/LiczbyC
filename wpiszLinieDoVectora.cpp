#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void wpiszLinieDoVectora(ifstream &plik, vector< vector <string> > &linie, int wielkosc){
	
	string linia;
	int i;
	
	i = 0;	
	while(i < wielkosc){
		if(plik.eof() == true){
			plik.close();
			plik.open("ThinkingInC++2Vone.txt");
		}
		getline(plik, linia);
		if(linia != ""){
			vector<string> slowa;
			string slowo;
			istringstream iss(linia);
			while(iss >> slowo)
				slowa.push_back(slowo);
			linie.push_back(slowa);
			i++;
		}
	}
}
