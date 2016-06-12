#include <iostream>
using namespace std;

int main()
{
    int n,mat[8][8];
    int br = 0;
    char a;
    int b;
    char cx;
    int cy;

    cin >> cx >> cy;
    int cx2 = cx - '0' - 48;
    mat[cx2 - 1][cy-1] = 1;


    cin >> n;

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            mat[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        int pom = a-'0'-48;
        mat[pom - 1][b-1]=1;
    }

    int x = cx2 - 1;
    int y = cy - 1;
            if (x + 2 <= 7 && y+1 <= 7)
            {
            if (mat[x+2][y+1]==1) br++;
            }
            if (x + 1 <= 7 && y + 2 <= 7)
            {
            if (mat[x+1][y+2]==1) br++;
            }
            if (x + 2 <= 7 && y - 1 >= 0)
            {
            if (mat[x+2][y-1]==1) br++;
            }
            if (x + 1 <= 7 && y - 2 >= 0)
            {
            if (mat[x+1][y-2]==1) br++;
            }
            if (x - 1 >= 0 && y - 2 >= 0)
            {
            if (mat[x-1][y-2]==1) br++;
            }
            if (x - 2 >= 0 && y - 1 >= 0)
            {
            if (mat[x-2][y-1]==1) br++;
            }
            if (x - 1 >= 0 && y + 2 <= 7)
            {
            if (mat[x-1][y+2]==1) br++;
            }
            if (x - 2 >= 0 && y + 1 <= 7)
            {
            if (mat[x-2][y+1]==1) br++;
            }

    cout << br << endl;

    return 0;

}
