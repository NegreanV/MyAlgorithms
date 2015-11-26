//Sa se detremine daca un numar este cub perfect
//Incerc sa caut alt algoritm mai eficient dar pana acum numai pe asta l-am gasit

#include <iostream>

using namespace std;

bool cub(int x)
{
	int y;
	
	for (int i = 0; i <= 200; i++)
	{
		if (i * i * i == x)
		{
			 y = i;
			 break;
		}
	}
	
	return y;
}

int main()
{
	int a; cin >> a;
	cout << cub(a);	
}
