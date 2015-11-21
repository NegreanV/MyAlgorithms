//Se citesc de la tastatura numere naturale (cel putin 3) pana cand 
//antepenultimul + penultimul = ultimul. Sa se afiseze suma numerelor citite.
//Ex. daca citim 3 5 2 4 6 se va opri citirea dupa citirea nui 6 si se va afisa 20.

#include <iostream>

using namespace std;

int main()
{
	int x, y, z, s = 0;
    cin >> x >> y >> z;
    s = x + y + z;
 
    while(x + y != z)
    { 
		x = y;
        y = z;
        cin >> z;
        s = s + z;
    } 

cout << s;
return 0;
} 
