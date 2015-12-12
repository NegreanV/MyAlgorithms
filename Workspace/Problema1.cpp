//2005, cls 7, neterminata
#include <iostream>
#include <fstream>

using namespace std;

    int tablou[50][50];

int main()
{
    ifstream inf ("input.in");
    ofstream outf ("output.out");

    int linie, coloana, n, citireL, citireC, temporal = 0, alt = 0;
    inf >> linie >> coloana >> n;


    for (int i = 1; i <= n; i++)
    {
        inf >> citireL >> citireC;
        inf >> tablou[citireL][citireC];
    }

    for (int i = 1; i <= linie; i++)
    {
        for (int j = 1; j <= coloana; j++)
        {
          if (tablou[i][j] == 0 && i != linie)
          {
              if (j == coloana)
              {
                  for (int k = 1; k <= coloana; k++)
                  {
                      temporal += tablou[i][k];
                  }
                  tablou[i][j] = temporal;
              }
              else if (j < coloana && j > 0)
              {
                  temporal = tablou[i][coloana];

                  for (int k = 1; k < coloana; k++)
                  {
                      temporal -= tablou[k][j];
                  }
                  alt = tablou[linie][j] - temporal;
                  tablou[i][j] = alt;

              }
          }
        }
    }

    for (int i = 1; i <= linie; i++)
    {
        for (int j = 1; j <= coloana; j++)
        {

            cout << " " << tablou[i][j];
        }
        cout << endl;
    }
}
