/*Se citeste un numar natural n. Se afiseze pe ecran un triunghi de forma:
*
**
***
.....
***...* (n caractere *) */

#include <iostream>

using namespace std;
// bun
int main()
{
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1 ; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
