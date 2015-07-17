//se citeste dintr-un fisier un numar, sa se afiseze pe rand fiecare cifra a numarului
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inf ("input.in");
	int numar, finall[100], ii = 0;
	inf >> numar;
	
	while (numar > 9)
	{
		finall[ii] = numar % 10;
		numar /= 10;
		ii++;
	}
	
	if (numar < 9)
	{
		finall[ii] = numar;
		ii++;
	}
	
	for (int i = ii - 1;i >= 0;i--)
	{
		cout << finall[i] << "\n";
	}
}
