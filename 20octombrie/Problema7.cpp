/*Se citeste un numar natural n cu cel mult 2 cifre. 
 * Afisati pe ecran o figura formata din caracterul * ca in exemplul alaturat pentru n=5. */

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n * 2 - i; j++)
		{
			cout << " ";
		}
		
		for (int j = 1; j <= i * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
