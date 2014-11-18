#include <fstream>
#include <vector>

using namespace std;

void wpiszDoPliku(ofstream &strumien, vector< vector<string> > &linie, int wielkosc){
	for(int i = 0; i < wielkosc; i++){
		for(int j = 0, dlugosc = linie[i].size(); j < dlugosc; j++){
			strumien <<linie[i][j]<<" ";
		}
	strumien <<"\n";
	}
}
