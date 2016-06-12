#include <iostream>
using namespace std;

struct klasa
{
    int ncl, prod;
};

int main()
{
    int nkl, maks, prodd[50],clen=0;
    klasa klasi[50],pom;

    cin >> nkl;
    for (int i=0; i<nkl; i++)
        cin >> klasi[i].ncl >> klasi[i].prod;

    for (int i=0; i<nkl; i++)
    {
        for (int j=0; j<nkl; j++)
        {
            if (klasi[i].prod > klasi[j].prod)
            {
                pom = klasi[i];
                klasi[i] = klasi[j];
                klasi[j] = pom;
            }
        }
    }

    for (int i=0; i<nkl; i++)
    {
        clen+=klasi[i].ncl;
        if (i==0)
            prodd[i] = clen*klasi[i].prod;
        else
            prodd[i] = clen*klasi[i].prod;
    }

    maks=prodd[0];
    for (int i=1; i<nkl; i++)
    {
        if (prodd[i] > maks)
            maks = prodd[i];
    }

    cout << maks << endl;
    return 0;
}
