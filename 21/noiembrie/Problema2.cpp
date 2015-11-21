/* Se citesc de la tastatura doua numere naturale a si b cu exact doua cifre fiecare.
* Scrieti programul C++ care afiseaza numarul total de cifre pare din cele doua numere daca ele au aceeasi paritate, 
* iar daca au paritati diferite atunci afiseaza numarul total de cifre impare din cele doua numere.
* Exemple: Daca a = 78 si b = 18 se va afisa 2 (8 si 8 sunt cifrele pare, adica 2)
* Daca a = 36 si b= 55 se va afisa 3 (sunt 3 cifre impare, si anume 3, 5, 5) */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    if(a % 2 == b % 2)
    {
        cout << (a / 10 % 2 == 0) + (a % 2 == 0) + (b / 10 % 2 == 0) + (b % 2 ==0);
	}
    else
    {
		 cout << a / 10 % 2 + a % 2 + b / 10 % 2 + b % 2;
	}
    return 0;
}

