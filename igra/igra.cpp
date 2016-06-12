#include <iostream>
using namespace std;

int main()
{
int n,i,br,final,niza[200];
cin >> n;
final=1;
br=0;
for(i=1;i<=n;i++) cin >> niza[i];
for (i=1;i<=n;i++)
{
if (niza[i]==1)
{
br++;
if (br>final) final=br;
}
if (niza[i]!=1)
{
br=0;
if (br>final) final=br;
}
}
cout<<final<<endl;
return 0;
}
