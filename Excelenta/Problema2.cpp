/* Fisierul text bac.txt contine, pe o singura linie, cel mult 1000 de numere 
naturale nenule, numerele fiind separate prin câte un spatiu. Scrieti un 
program C/C++ care citeste de la tastatura un numar natural nenul n si numerele 0
din fisierul bac.txt si care afiseaza pe ecran, separate prin câte un spatiu, toate 
numerele din fisier care sunt divizibile cu n. Daca fisierul nu contine niciun astfel 
de numar, atunci se va afisa pe ecran mesajul NU EXISTA. Exemplu: daca fisierul 
bac.txt contine numerele: 3 100 40 70 25 5 80 6 3798,  pentru n=10 atunci pe ecran se va afisa: 100 40 70 80 */

#include <fstream>

using namespace std;

ifstream f("input.in");

int main()
{ 
    int n, x, k = 0;
    cin >> n;
  
    while(f >> x)
    {
        if(x % n == 0) 
        { 
            cout << x << " ";
            k++;
        }
    
    if(k == 0) 
    {
        cout << "NU EXISTA";
    }
  
  return 0;
}
