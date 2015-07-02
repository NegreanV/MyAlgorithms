//Se cere sa se determine ultima cifra a puterii a**2+b, valorile variabilelor a si b se citesc de la 
//tastatura (numere naturale nenule < 11)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inf ("input.in");
	int a, b;
	inf >> a;
	inf >> b;
	
	a = a + b;
	b = 2;
	
	for (int i = 1;i < a;i++)
	{
		b = b * 2;
	}
	
	cout << b % 10;
}
