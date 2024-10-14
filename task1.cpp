#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct caractBloc {
	string strada;
	int numarbloc;
	int numarscari;
	int numarapart;
	int anconstructie;




	caractBloc(string s, int nrbloc, int nrscari, int nrapart, int ancons)
	{
		strada = s;
		numarbloc = nrbloc;
		numarscari = nrscari;
		numarapart = nrapart;
		anconstructie = ancons;
	}


	void afisare()
	{
		cout << "Blocul de pe strada " << strada << ", numarul " << numarbloc << ", are " << numarscari << " scari si un numar total de " << numarapart << " apartamente. Afost construit in anul " << anconstructie << "." << endl;
	}
};

caractBloc* citestebloc()
{
	string strada;
	int numarbloc, numarscari, numarapart, anconstructie;
	cout << "Introduceti numele strazii:";
	getline(cin, strada);
	cout << "Introduceti nr blocului:";
	cin >> numarbloc;
	cout << "Introduceti nr de scari:";
	cin >> numarscari;
	cout << "Introduceti nr total de aparatamente:";
	cin >> numarapart;
	cout << "Introduceti anul constructiei:";
	cin >> anconstructie;
	return new caractBloc(strada, numarbloc, numarscari, numarapart, anconstructie);
}

int main()
{
	vector<caractBloc*> blocuri(10);
	for (int i = 0; i < 10; i++)
	{
		cout << "Introduceti informatiile pentru blocul " << i + 1 << ":" << endl;
		blocuri[i] = citestebloc();
	}
	for (int i = 0; i < 10; i++)
	{
		blocuri[i]->afisare();
	}
	for (int i = 0; i < 10; i++)
	{
		delete blocuri[i];
	}
	return 0;
}