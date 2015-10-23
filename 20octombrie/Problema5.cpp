#include <iostream>

using namespace std;
// sa pui te rog o descriere
int main()
{
	int n, sumaDiv, sumaDiviz = 0, keep = 112;
	
	cout << "n = ";
	cin >> n;
	
	int numere[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> numere[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= 50; j++)
		{
			if (numere[i] % j == 0)
			{
				sumaDiv += j;
			}
		}
		if (sumaDiv > sumaDiviz)
		{
			sumaDiviz = sumaDiv;
			keep = numere[i];
		}
	}
	cout << keep;
}
