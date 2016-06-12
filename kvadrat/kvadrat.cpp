#include <iostream>
using namespace std;

int main()
{
    int badRow = -1;
    int n, mij[10][10];

    cin >> n;

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            cin >> mij[i][j];

            if (mij[i][j] == -1)
               badRow = i;
        }

    int okRow = 0;
    if (badRow == 0)
       okRow = badRow+1;

    int sumBadRow = 0, sumOkRow = 0;

    for (int j=0; j<n; j++)
    {
        sumBadRow += mij[badRow][j];
        sumOkRow += mij[okRow][j];
    }

    cout << (sumOkRow - sumBadRow - 1) << endl;
    r
