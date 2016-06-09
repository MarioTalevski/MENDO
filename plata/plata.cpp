#include<iostream>
using namespace std;
 
int main()
{
 
    int n,m,s;
 
    cin >> n >> m >> s;
 
    int br=0,rez=0;
 
    for(int i=0;i<100;i++)
    {
        rez=rez+n;
        br++;
        if(rez>=s)
        {
             cout << br;
             break;
        }
 
    }
 
    if(rez<s)
    {
     while(true)
    {
        rez=rez+m;
        br++;
        if(rez>=s)
        {
            cout << br;
            break;
        }
 
    }
 
    }
 
    return 0;
}
