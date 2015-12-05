//nu am reusit sa o fac dar sunt aproape de rezultat, daca reusesc o editez
//cerinta era: 
//Gigel a descoperit un nou joc pe care l-a numit "Flip". 
//Acesta se joaca pe o tabla dreptunghiulara de dimensiuni N*M care contine 
//numere intregi. Fiecare linie si fiecare coloana are un comutator care schimba 
//starea tuturor elementelor de pe acea linie sau coloana, inmultindu-le cu -1. 
//Scopul jocului este ca pentru o configuratie data a tablei de joc sa se actioneze 
//asupra liniilor si coloanelor astfel incat sa se obtina o tabla cu suma elementelor cat mai mare.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inf ("tablou.in");

	int n, m; //declarare
	inf >> n >> m; //citire

	int tablou[n][m], sirA[n], sirB[m], suma = 0, k = 0, total = 0; //declarare

	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			inf >> tablou[i][j]; //citeste elementele tabloului
			suma += tablou[i][j]; //suma elementelor
		}

		if (suma < 0)
		{
			suma = 0;
			for (int j = 0; j < m; j++)
			{
				tablou[i][j] *= -1;
				suma += tablou[i][j];
			}
		}

		sirA[i] = suma; //vector cu sumele
		total += suma;
		suma = 0;
		cout << i << ": " << sirA[i] << endl; //afisare fiecare suma
	}

	cout << endl;

	while(k != m)
	{
		for (int i = 0; i < n; i++)
		{
			suma += tablou[i][k];
		}

		if (suma < 0)
		{
			suma = 0;
			for(int i = 0; i < n; i++)
			{
				tablou[i][k] *= -1;
				suma += tablou[i][i];
			}
		}
		sirB[k] = suma; //vector cu sumele
		total += suma;
		suma = 0;
		cout << k << ": " << sirB[k] << endl; //afisare fiecare suma
		k++;
	}

	cout << "\nTotal: " << total;
}
