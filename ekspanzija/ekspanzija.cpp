#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    char izl[400],chr[1];
    string vl;
    int i=0,m,k=0;

    cin >> vl;

    for (i=0; i<vl.length(); i++)
    {
        chr[0] = vl[i];
        m = atoi(chr);
        if (m>0 && m<10)
        {
            for (int j=k; j<m+k; j++)
                izl[j]=vl[i+1];
            k+=m-1;
        }
        else
        {
            izl[k]=vl[i];
            k++;
        }
    }

    for (i=0; i<k; i++)
        cout << izl[i];

    return 0;
}
