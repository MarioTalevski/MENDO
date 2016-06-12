#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nNatpr, nPor, a, b, bg=0;
    bool ab[101][101];
    memset(ab,0,sizeof(ab));
    cin >> nNatpr >> nPor;
    for (int i=0; i<nPor; i++)
    {
        cin >> a >> b;
        ab[a-1][b-1] = 1;
    }

    for (int i=0; i<nNatpr; i++)
    {
        for (int j=0; j<nNatpr; j++)
        {
            if (ab[i][j] && !ab[j][i] && i!=j)
                bg++;
        }
    }

    cout << bg << endl;
    return 0;
}
