//Se citesc 2 numere dintr-un fisier. Sa se afiseze daca sunt consecutive.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inf ("input.in");
	int nrUnu, nrDoi;
	inf >> nrUnu >> nrDoi;
	
	if (nrDoi - 1 == nrUnu)
	{
		cout << "Numerele sunt consecutive";
	}
	else
	{
		cout << "Numerele nu sunt consecutive";
	}
return 0;
}
