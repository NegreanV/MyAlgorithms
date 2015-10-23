//Se citesc de la tastatura numere naturale (cel putin 3) pana cand antepenultimul + penultimul = ultimul. 
//Sa se afiseze suma numerelor citite.
//Ex. daca citim 3 5 2 4 6 se va opri citirea dupa citirea nui 6 si se va afisa 20.

#include <iostream>

using namespace std;
// stas
int main()
{
	int a, b, c, old[100], j = 0, suma(0);
	
	cin >> a >> b >> c;
	
	while (a + b != c)
	{
		old[j] = a;
		j++;
		a = b;
		b = c;
		cin >> c;
	}
	
	suma = a + b + c;
	
	for (int i = 0; i <= j - 1; i++)
	{
		suma += old[i];
	}
	cout << a << " + " << b << " = " << c;
	cout << endl << "suma: " << suma;
}	
