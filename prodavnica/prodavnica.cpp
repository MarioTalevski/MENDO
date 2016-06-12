#include<iostream>
using namespace std;

int main()
{

    int p,v,moneta,rezultat=0;

    cin >> p >>  v;

    int pom=v-p;

    while(pom>0)
    {
        while(pom>=5)
        {
            pom=pom-5;
            rezultat++;
        }
        while(pom>=2)
        {
            pom=pom-2;
            rezultat++;
        }
        while(pom>=1)
        {
            pom=pom-1;
            rezultat++;
        }
    }

    cout << rezultat;

    return 0;
}
