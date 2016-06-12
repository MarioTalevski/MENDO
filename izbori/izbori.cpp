#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;

    cin >> n >> k;

    int v1,v2;

    vector<int> vektors1,vektor1,vektor2,rez;

    for(int i=0;i<n;i++)
    {
        cin >> v1 >> v2;
        vektor1.push_back(v1);
        vektor2.push_back(v2);
    }

    vektors1=vektor1;
    sort(vektor1.begin(),vektor1.end());
    reverse(vektor1.begin(),vektor1.end());

    int poz1[k],br1=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(vektors1[i]==vektor1[j])
            {
                poz1[br1]=i;
                br1++;

            }
        }
    }

    for(int i=0;i<k;i++)
    {
       rez.push_back(vektor2[poz1[i]]);

    }

    sort(rez.begin(),rez.end());
    reverse(rez.begin(),rez.end());

    int final;

    for(int i=0;i<n;i++)
    {

        if(rez[0]==vektor2[i])
        {
            final=i;
        }

    }

    cout << final+1;

    return 0;
}
