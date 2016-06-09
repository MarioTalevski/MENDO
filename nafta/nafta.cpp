#include <iostream>
 
using namespace std;
 
char mat[256][256];
int n,m,i,j,sum=0,pole=0;
 
int dfs(int i,int j)
{
    if(mat[i][j]=='@')sum++;
    mat[i][j]='*';
    if(mat[i+1][j]=='@'&i+1<n)dfs(i+1,j);
    if(mat[i-1][j]=='@'&i-1>=0)dfs(i-1,j);
    if(mat[i][j+1]=='@'&j+1<m)dfs(i,j+1);
    if(mat[i][j-1]=='@'&j-1>=0)dfs(i,j-1);
    if(mat[i+1][j+1]=='@'&i+1<n&j+1<m)dfs(i+1,j+1);
    if(mat[i-1][j-1]=='@'&i-1>=0&j-1>=0)dfs(i-1,j-1);
    if(mat[i+1][j-1]=='@'&i+1<n&j-1>=0)dfs(i+1,j-1);
    if(mat[i-1][j+1]=='@'&i-1>=0&j+1<m)dfs(i-1,j+1);
}
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>mat[i][j];
 
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]!='@')dfs(i,j);
            if(sum>0)pole++;
            sum=0;
        }
    }
    cout<<pole;
}
