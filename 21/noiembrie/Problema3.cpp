#include <iostream>
#include <cmath>

using namespace std;

int v1, v2, v3, v4, n, max1 = 0, max2 = 0;
int main()
{
    cout << "n = "; 
    cin >> n;
    
    cout << "Valentina: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "v1 = "; 
        cin >> v1;
        
        cout << "v2 = "; 
        cin >> v2;
        
        cout << "v3 = "; 
        cin >> v3;
        
        cout << "v4 = "; 
        cin >> v4;
        
        if(v1 * 10 + v2 > max1) 
        {
			max1 = v1 * 10 + v2;
		}
        
        if(v2 * 10 + v1 > max1)
        {
			 max1 = v2 * 10 + v1;
		}
        
        if(v2 * 10 + v3 > max1) 
        {
			max1 = v2 * 10 + v3;
		}
        
        if(v3 * 10 + v2 > max1) 
        {
			max1 = v3 * 10 + v2;
		}
        
        if(v3 * 10 + v4 > max1) 
        {
			max1 = v3 * 10 + v4;
		}
        
        if(v4 * 10 + v3 > max1) 
        {
			max1 = v4 * 10 + v3;
		}
        
        if(v1 * 10 + v4 > max1) 
        {
			max1 = v1 * 10 + v4;
		}
        
        if(v4 * 10 + v1 > max1) 
        {
			max1 = v4 * 10 + v1;
		}
    }
    
    cout << "Valentin: " << endl;
    
    for (int i = 1; i <= n; i++)
    {
        cout << "v1 = "; 
        cin >> v1;
        
        cout << "v2 = "; 
        cin >> v2;
        
        cout << "v3 = "; 
        cin >> v3;
        
        cout << "v4 = "; 
        cin >> v4;
        
        if(v1 * 10 + v2 > max2) 
        {
			max2 = v1 * 10 + v2;
		}
        
        if(v2 * 10 + v1 > max2) 
        {
			max2 = v2 * 10 + v1;
		}
        
        if(v2 * 10 + v3 > max2) 
        {
			max2 = v2 * 10 + v3;
		}
        
        if(v3 * 10 + v2 > max2) 
        {
			max2 = v3 * 10 + v2;
		}
        
        if(v3 * 10 + v4 > max2) 
        {
			max2 = v3 * 10 + v4;
		}
        
        if( v4 * 10 + v3 > max2) 
        {
			max2 = v4 * 10 + v3;
		}
        
        if(v1 * 10 + v4 > max2) 
        {
			max2 = v1 * 10 + v4;
		}
        if(v4 * 10 + v1 > max2) 
        {
			max2 = v4 * 10 + v1;
		}
    }
   
   if(max1 >= max2) 
   {
	   cout << max1 * 100 + max2;
   }
   else 
   {
	   cout << max2 * 100 + max1;
   }

}
/* Doi prieteni, Valentin şi Valentina, au fiecare câte n abţibilduri cu inimioare. 
Fiecare abţibild are formă pătrată şi este împărţit în patru pătrăţele identice 
care conţin inimoare, cel puţin una şi cel mult 9 în fiecare pătrăţel. 
Cei doi prieteni îşi propun ca pe felicitarea ce o vor dărui împreună învăţătoarei lor, 
să lipească abţibilduri cu multe inimioare. Locul de pe felicitare unde se pot lipi abţibildurile 
nu este de formă pătrată şi nu încap decât două jumătăţi de abţibild lipite una lângă alta. 
Astfel, Valentina alege un singur abţibild din cele n care-i aparţin, îl taie 
în jumătate(fie pe orizontală, fie pe verticală) iar apoi, din cele două jumătăţi obţinute, 
alege una singură pentru a o lipi pe felicitare. După tăierea pe orizontală a unui abţibild, 
jumătatea obţinută se poate roti oricum şi apoi se aşează pe felicitare. În acelaşi timp, 
Valentin procedează la fel. După lipirea pe felicitare a abţibildurilor 
tăiate(cel al Valentinei primul şi apoi lipit de acesta cel al lui Valentin, sau invers) se pot 
observa patru pătrăţele alăturate în care sunt inimioare. Copiii scriu sub fiecare din cele 
patru pătrăţele numărul inimioarelor desenate pe acesta şi se obţine astfel un număr m, 
de patru cifre(citit de la stânga la dreapta), aşa cum se observă în exemplul alăturat. 

Ajutaţi-i pe cei doi prieteni să aleagă câte un abţibild, modul în care-l 
va tăia fiecare şi poziţia în care îl va lipi pe felicitare astfel încât, după scrierea 
sub fiecare pătrăţel a numărului de inimioare corespunzătoare să se obţină cel mai mare 
număr m ,de patru cifre, posibil.

ex: etc.in
4
1 6 1 1
2 2 2 2
2 3 1 1
1 5 6 2
2 3 4 2
8 1 1 8
2 8 1 1
2 4 3 8

etc.out
8865

Abtibildurile Valentinei:
1 6 1 1
2 2 2 2
2 3 1 1
1 5 6 2

Valentin:
2 3 4 2
8 1 1 8
2 8 1 1
2 4 3 8 */
