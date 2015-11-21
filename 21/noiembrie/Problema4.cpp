//Se citesc n numere naturale. Sa se afiseze cel care are suma divizorilor maxima. 


#include <iostream>

using namespace std;

int main()
{
int n, x, max = 0, mx, s = 0;
cin >> n;
 
 for(int i = 1; i <= n; i++)
 {
   cin >> x;
   s = 0;
   for(int d = 1; d <= x; d++) 
     
     if(x % d == 0) 
     {
		 s++;
	 }
   
   if (s > max) 
   { 
	   max = s;
       mx = x;
   }      
 }

 cout << mx << " " << max;
 return 0;
} 

