#include <iostream>
using namespace std;
 
char mat[250][250];
bool poseten[250][250];
int n,m,o=0,v=0,pomo,pomv;
 
void dfs(int x, int y)
    {
        poseten[x][y]=1;
        if (mat[x][y]=='o') pomo++;
        if (mat[x][y]=='v') pomv++;
        if (x>0) if (poseten[x-1][y]==0) dfs(x-1,y);
        if (x<n-1) if (poseten[x+1][y]==0) dfs(x+1,y);
        if (y>0) if (poseten[x][y-1]==0) dfs(x,y-1);
        if (y<m-1) if (poseten[x][y+1]==0) dfs(x,y+1);
    }
 
int main()
{
    int i,j;
 
    cin>>n>>m;
 
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            cin >> mat[i][j];
            if (mat[i][j]=='#') poseten[i][j]=1;
            else poseten[i][j]=0;
        }
    }
 
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
        pomo=0;
        pomv=0;
        if (poseten[i][j]==0) dfs(i,j);
        if (pomo>pomv) o=o+pomo;
        else v=v+pomv;
        }
    }
 
    cout<<o<<" "<<v<<endl;
 
    return 0;
 
}
