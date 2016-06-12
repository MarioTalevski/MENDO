#include<iostream>
using namespace std;

int main()
{
    string s;

    int poz,br=1;

    cin >> poz;

    for(int i=0;i<200;i++)
    {
        br=br*i;
        s=s+'1';
        for(int j=0;j<br;j++)
        {
            s=s+'0';
        }
        br=1;
    }


    cout << s[poz-1] << " " << s[poz];


    return 0;
}
