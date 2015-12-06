#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main()
{
	fstream inf ("kbetray.in", ios::in);
	fstream outf ("kbetray.out", ios::out);

	int n, k, iA, iB, suma = 0, swap;
	inf >> n >> k;
	int participantiA[n], participantiB[n];

	for (int i = 0; i < n; i++)
	{
		inf >> participantiA[i];
		inf >> participantiB[i];
	}

	while(k != 0)
	{
		int cmm = INT_MAX, cMM = 0;
		for(int i = 0; i < n; i++)
		{
			if(participantiA[i] + participantiB[i] > cMM)
			{
				cMM = participantiA[i] + participantiB[i];
				iA = i;
			}

			if(participantiA[i] + participantiB[i] < cmm)
			{
				cmm = participantiA[i] + participantiB[i];
				iB = i;
			}
		}

		swap = participantiA[iA];
		participantiA[iA] = participantiA[iB];
		participantiA[iB] = swap;

		k--;
	}

	for(int i = 0; i < n; i++)
	{
		if (participantiA[i] > participantiB[i])
		{
			suma += participantiA[i];
		}
		else
		{
			suma += participantiB[i];
		}
	}

	cout  << suma;
	return 0;
}
