/* Se citeste un numar natural n cu cel mult 2 cifre. 
 * Afisati pe ecran un romb cu latura n, format din caracterul *, 
 * incadrat intr-un patrat de latura 2n-1 format cu caracterul #, ca in exemplul alaturat pentru n=6. */


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= n - i; j++) 
        {
			cout << '#';
		}
        for(int j = 1; j <= 2 * i - 1; j++) 
        {
			cout << '*';
		}
        for(int j = 1; j <= n - i; j++) 
        {
			cout << '#';
		}
        cout << endl;
    }
    
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 1; j <= n - i; j++) 
        {
			cout << '#';
		}
        for(int j = 1; j <= 2 * i - 1; j++) 
        {
			cout << '*';
		}
        for(int j = 1;j <= n - i; j++) 
        {
			cout << '#';
		}
        cout << endl;
    }
    return 0;
}

