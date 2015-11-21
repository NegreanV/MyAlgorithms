//la asta lucrez, nu mi-a iesit inca
//cand o termin o sa fac update la cod

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, k, m = 0, v[100], L = 1, R = 10, maxD = 0, nrD, div[100], slot;
    
    cout << "n = "; 
    cin >> n;
    
    k = n;
    
    while(k != 0)
    {
		m++; 
		k /= 10;
	}
    
    v[m] = n;
    
    for(int i = 1; i <= m - 1; i++) 
    {
		L *= 10;
	}
    
    for(int i = 1; i <= m - 1; i++)
    {
        v[i] = n % L * R + n / L;
        L /= 10;
        R *= 10;
    }

   for (int i = 1; i <= m; i++)
   {
       nrD = 0;
       
       for(int d = 1; d <= v[i]; d++)
        {
			if(v[i] % d == 0) 
			{
				nrD++;
			}
        }
      
      div[i] = nrD;
   }
   for (int i = 1; i <= m; i++)
   {
       for(int j = 2; j <= m; j++)
       {
           if(div[i] > div[j]) 
           {
		       maxD = div[i]; 
		       slot = i;
	        }
       }
   }

   cout << v[slot] << endl;

   maxD = 0;
   
   for(int d = 2; d <= v[slot] - 1; d++)
   {
       if(v[slot] % d == 0 && d > maxD) 
       {
		   maxD = d;
	   }
   }
   cout << maxD;
}

/* Se consideră un număr natural N format din m cifre şi toate cele m-1 numere
 * ce se pot forma succesiv pornind de la numărul iniţial N, prin mutarea celei mai 
 * semnificative cifre a combinaţiei curente la sfârşitul acesteia , 
 * după cum se poate observa din exemplele de mai jos.
 * 
 * N = 12035         N = 2121
 * m = 5             m = 4
 * 
 * 20351             1212
 * 03512             2121
 * 35120             1212
 * 51203
*/
