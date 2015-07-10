//Se dau de la tastatura numele si notele la limba romana si matematica pentru doi elevi
//Se cere sa se afiseze numele elevilor in ordinea descrescatoare a mediei generale la 
//cele doua discipline. Daca amandoi elevii au aceeasi medie se va afisa primul, cel 
//care este alfabetic mai mare.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inf ("input.in");
	
	string numeA, numeB;
	
	int notaMatematicaA, notaRomanaA;
	int notaMatematicaB, notaRomanaB;
	int lengthA = numeA.size();
	int lengthB = numeB.size();
    
    char numeFinalA[100], numeFinalB[100];
	
	inf >> numeA;
	inf >> notaMatematicaA;
	inf >> notaRomanaA;
	inf >> notaMatematicaB;
	inf >> numeB;
	inf >> notaRomanaB;
	
	//formatam numele pentru a le putea ordona alfabetic
	for (int i = 0;i <= lengthA;i++)
    {
        numeFinalA[i] = numeA[i];
    }
        
    for (int i = 0;i <= lengthB;i++)
    {
		numeFinalB[i] = numeB[i];
	}
	
	int medieA = (notaMatematicaA + notaRomanaA) / 2;
	int medieB = (notaMatematicaB + notaRomanaB) / 2;
	
	char cA = numeFinalA[0];
	char cB = numeFinalB[0];
	
	int ccA = static_cast<int>(cA);
	int ccB = static_cast<int>(cB);
	
	if (medieA > medieB)
	{
		cout << "Ionescu\nPopescu";
	}
	else if (medieA < medieB)
	{
		cout << "Popescu\nIonescu";
	}
	else if (medieA == medieB)
	{
		if (ccA < ccB)
		{
			cout << "Ionescu\nPopescu";
		}
		else if (ccA > ccB)
		{
			cout << "Popescu\nIonescu";
		}
	}
}
