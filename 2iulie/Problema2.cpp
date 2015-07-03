//Se da de la tastatura un numar natural n cu patru cifre. Se cere sa se afiseze numarul obtinut
//dupa ce s-a eliminat cifra de pe pozitia p (pozitiile sunt numerotate de la dreapta la stanga)
//ex: pentru n=5234 si p=2 se va afisa 534

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inf ("input.in");
	int numar, coord, coordExacte = 1;
	inf >> numar;
	inf >> coord;
	
	for (int i = 0;i < coord;i++)
	{
		coordExacte = coordExacte * 10;
	}
	
	int numarFinalOne = numar / (coordExacte * 10);
	int numarFinalTwo = numar % coordExacte;

	int numarFinal = numarFinalOne * coordExacte + numarFinalTwo;
	cout << numarFinal;
}
	
