//Se dau de la tastatura numele si notele la limba romana si matematica pentru doi elevi
//Se cere sa se afiseze numele elevilor in ordinea descrescatoare a mediei generale la 
//cele doua discipline. Daca amandoi elevii au aceeasi medie se va afisa primul, cel 
//care este alfabetic mai mare.
#include <iostream>
#include <fstream>

using namespace std;

int max();

int main()
{
	ifstream inf ("input.in");
	
	string numeA, numeB;
	
	int notaMatematicaA, notaRomanaA;
	int notaMatematicaB, notaRomanaB;
	
	inf >> numeA;
	inf >> notaMatematicaA;
	inf >> notaRomanaA;
	inf >> numeB;
	inf >> notaMatematicaB;
	inf >> notaRomanaB;
	
	double medieA = (notaMatematicaA + notaRomanaA) / 2.0;
	double medieB = (notaMatematicaB + notaRomanaB) / 2.0;
	
	if (medieA > medieB)
	{
		cout << numeA << "\n" << numeB;
	}
	
	if (medieA < medieB)
	{
		cout << numeB << "\n" << numeA;
	}
	
	if (medieA == medieB)
	{
		bool firstIsSmaller = false;
		bool secondIsSmaller = false;
		int length = max(numeA.size(), numeB.size());
		for (int i = 0; i < length; i++) {
			if (numeA[i] < numeB[i]) {
				firstIsSmaller = true;
				break;
			} 
			if (numeA[i] > numeB[i]) {
				secondIsSmaller = true;
				break;
			}
		}
		if (firstIsSmaller)
		{
			cout << numeA << "\n" << numeB;
		}
		
		if (secondIsSmaller)
		{
			cout << numeB << "\n" << numeA;
		}
		
		if(!firstIsSmaller && !secondIsSmaller) {
			if(numeA.size() < numeB.size()){
				cout << numeA << "\n" << numeB;
			} else {
				cout << numeB << "\n" << numeA;
			}
		}
		
	}
}

int max(int a, int b) {
	if(a >= b) {
		return a;
	} else {
		return b;
	}
}

