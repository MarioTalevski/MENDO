#include <iostream>
#include <queue>
#include <fstream>
#include <cstring>

using namespace std;

int di[]={-1,1,0,0};
int dj[]={0,0,-1,1};
char mat[1001][1001];
int dist[1001][1001];
bool vis[1001][1001];
vector <int> guards;
int n,m,si,sj,ei,ej;


class field
{
  public:
  field(){}
  field(int I,int J,int D) {i=I; j=J; d=D;}
  int i,j,d;
};

bool operator <(const field &a ,const field &b)
{
  return a.d<b.d;
}

void fill1()
{
  queue<int> q;
  int i,j,k;

  i=0;
  memset(dist,-1,sizeof(dist));
  while(i<guards.size())
  {
    q.push(guards[i]);
    q.push(guards[i+1]);
    dist[guards[i]][guards[i+1]]=0;
    i+=2;
  }

int gi,gj;
int ni,nj;
  while(!q.empty())
  {
    gi=q.front();
    q.pop();
    gj=q.front();
    q.pop();

    for(k=0;k<4;k++)
    {
      ni=gi+di[k];
      nj=gj+dj[k];

      if(ni>=0 && ni<n && nj>=0 && nj<m &&
         mat[ni][nj]!='*' && dist[ni][nj]==-1)
      {
         dist[ni][nj]=dist[gi][gj]+1;
         q.push(ni);
         q.push(nj);
      }
    }

  }
}

int fill2()
{
  int res=10000000;
  priority_queue<field> q;
  memset(vis,false,sizeof(vis));
  field tmp;
  int ni,nj,k;
  q.push( field(si,sj,dist[si][sj]) );

vis[si][sj]=true;
  while(!q.empty())
  {
    tmp=q.top();
    q.pop();


    if(tmp.i==ei && tmp.j==ej)
    {
      return tmp.d;
    }

    for(k=0;k<4;k++)
    {
      ni=tmp.i+di[k];
      nj=tmp.j+dj[k];
      if(ni>=0  && ni<n && nj>=0 && nj<m &&
         mat[ni][nj]!='*' && !vis[ni][nj])
      {
         q.push(field(ni,nj,min(tmp.d,dist[ni][nj])));
         vis[ni][nj]=true;
      }
    }
  }
  return res;
}

void locate()
{
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
       if(mat[i][j]=='R')
       {
            si=i; sj=j;
       }
       if(mat[i][j]=='Z')
       {
            ei=i; ej=j;
       }
       if(mat[i][j]=='G')
       {
          guards.push_back(i);
          guards.push_back(j);
       }
    }
}

int main()
{
    int i,j;

    cin>>n>>m;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>mat[i][j];

   locate();
   fill1();
   cout<<fill2();

    return 0;
}
