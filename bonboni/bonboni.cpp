#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
          int N;
          cin >> N;

          vector<int> nino;
          vector<int> tino;
          int currentFactor = 1;

          nino.push_back(N);

          while (N > 0)
          {
              if (N%3 == 0)
              {
                  N /= 3;
                  currentFactor *= 3;
                  continue;
              }

              if (N%3 == 1)
              {
                  N -= 1;  N /= 3;
                  tino.push_back(currentFactor);
                  currentFactor*=3;
                  continue;
              }

              if (N%3 == 2)
              {
                  N += 1; N /= 3;
                  nino.push_back(currentFactor);
                  currentFactor*=3;
                  continue;
              }
          }

          sort(nino.begin(), nino.end());
          sort(tino.begin(), tino.end());

          for (int i=0; i<nino.size(); i++)
              if (i == 0)
                 cout << nino[i];
              else
                 cout << " " << nino[i];

          cout << endl;

          for (int i=0; i<tino.size(); i++)
              if (i == 0)
                 cout << tino[i];
              else
                  cout << " " << tino[i];

          cout << endl;
          return 0;
}
