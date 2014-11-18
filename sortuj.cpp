#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void sortuj(vector< vector <string> > &linie){
	for(int i = 0, rozmiar = linie.size(); i < rozmiar; i++){
		for(int j = 0, dlugosc = linie[i].size(); j < dlugosc; j++){
			sort(linie[i].begin(), linie[i].end());
		}
	}
}
