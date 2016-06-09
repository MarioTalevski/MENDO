#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int n,i,j,br1=0,br2=0;
    string s,rez;
    vector<string> vektor;
 
    cin >> n;
 
    for(i=0;i<n;i++)
    {
        cin >> s;
        vektor.push_back(s);
    }
 
    for(i=0;i<n;i++)
    {
        br1=0;
         
        for(j=0;j<n;j++)
        {
            if(vektor[i]==vektor[j])
            {
                br1++;
 
            }
        }
 
        if(br1>br2)
        {
            br2=br1;
            br1=0;
            rez=vektor[i];
        }
 
    }
 
    cout << rez;
 
    return 0;
}
