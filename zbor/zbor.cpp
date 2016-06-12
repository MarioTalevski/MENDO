#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char niza[200];
int rez=0,k;

cin>>niza;

for (k=0;k<strlen(niza)-1;k++)
{
if ((niza[k]!='a')&&(niza[k]!='e')&&(niza[k]!='i')&&(niza[k]!='o')&&(niza[k]!='u')
&&(niza[k+1]!='a')&&(niza[k+1]!='e')&&(niza[k+1]!='i')&&(niza[k+1]!='o')&&(niza[k+1]!='u'))
rez++;
}
cout<<rez<<endl;

return 0;
}
