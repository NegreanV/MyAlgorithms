/*Se considera fisierul BAC.TXT ce contine un sir crescator cu cel mult un milion 
de numere naturale de cel mult noua cifre fiecare, separate prin câte un spatiu. 
Sa se scrie un program C/C++ care, folosind un algoritm eficient din punct de vedere 
al memoriei utilizate si al timpului de executare, citeste din fisier toti termenii 
sirului si afiseaza pe ecran, pe o singura linie, fiecare termen distinct al sirului 
urmat de numarul de aparitii ale acestuia în sir. Valorile afisate sunt separate prin 
câte un spatiu. Exemplu: daca fisierul BAC.TXT are urmatorul continut: 
1 1 1 5 5 5 5 9 9 11 20 20 20 programul va afisa: 1 3 5 4 9 2 11 1 20 3  
deoarece 1 apare de 3 ori, 5 apare de 4 ori,etc
*/


#include <fstream>

using namespace std;

int main()
{
    ifstream f("BAC.TXT");
    
    long x, y, n;
    f >> x;
    n = 1;
    
    while(f >> y)
    { 
        if(x == y) 
        {
            n++;
        }
        else 
        { 
            cout << x << " " << n << " ";
	        n = 1;
	    }
    x = y;
    }
    
    cout << x << " " << n;
    return 0;
}
