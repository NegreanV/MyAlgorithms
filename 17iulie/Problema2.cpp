//se citeste o cifra dintr-un fisier, sa se afiseze toate cifrele mai mici sau egale cu cea citita
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inf ("input.in");
	int cifra;
	inf >> cifra;
	
	for (int i = 0;i <= cifra;i++)
	{
		cout << i << " ";
	}
}
