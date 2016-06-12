#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    bool mat[101][101];
    int maxm=0, gst,noz, x,y,cnt=0;

    memset(mat,false,sizeof(mat));
    cin >> gst >> noz;

    for (int i=1; i<=gst; i++)
        mat[i][i] = true;

    for (int i=0; i<noz; i++)
    {
        cin >> x >> y;
        for (int j=1; j<=gst; j++)
        {
            if (mat[x][j] || mat[y][j])
            {
                mat[x][j]=true;
                mat[y][j]=true;
            }
        }
    }

    for (int i=1; i<=gst; i++)
    {
        for (int j=1; j<=gst; j++)
            if (mat[i][j])
                cnt++;
        if (cnt>maxm) maxm=cnt;
        cnt=0;
    }

    cout << maxm-1 << endl;
    return 0;
}
