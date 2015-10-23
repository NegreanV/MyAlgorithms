//Se citeste un numar natural n cu cel mult 4 cifre. 
//Sa se afiseze in ordine crescatoare toate numele naturale pare atat timp cat suma lor nu depaseste pe n.
//Ex: pentru n=15 se afiseaza 2 4 6 

#include <iostream>

using namespace std;

int main()
{
	// sa initializezi variabila 'used'
	int a, used;
	cin >> a;
	
	for (int i = 2; i <= a; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
			used += i;
		}
	}
}
