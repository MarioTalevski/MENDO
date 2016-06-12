#include <iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<algorithm>
#include<set>
#include<cstdio>
#include <cstring>
using namespace std;

int main()
{
string a,ff;
int i,n;
cin>>a>>n;
ff=a;
long long m=a.size();
if(n==0) cout<<a;
else{
for(i=0;i<m;i++)
{
if(a[i]<a[i+1] && n>0)
{
a.erase(a.begin()+i);
i=-1;
n--;
m--;
}
}

for(i=0;i<n;i++) a.erase(a.begin()+a.size()-1);

cout<<a;
}
return 0;
}
