//Se citeste un numar natural n impar. Sa se afiseze primele n perechi de numere consecutive a caror suma este divizibila cu n.
//Ex: pentru n=3 se afiseaza perechile
//1 2
//4 5
//7 8 

#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	
	for (int i = 1; i <= 100; i++)
	{
		if ((i + i + 1) % a == 0)
		{
			cout << i << " " << i + 1 << endl;
		}
	}
}
