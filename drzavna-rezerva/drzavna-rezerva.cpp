#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
     int temp;
     temp = *x;
     *x = *y;
     *y = temp;
}

void sort(int table[], int table2[], const int n)
{
     for(int i = 0; i < n; i++)
     {
          for(int j = 0; j < n-1; j++)
          {
               if(table[j]>table[j+1])
               {
                    swap(&table[j], &table[j+1]);
                    swap(&table2[j], &table2[j+1]);
               }
          }
     }
}

int main()
{
    int n, k, zb=0, cena=0;
    cin>>n>>k;
    int a[k], b[k];
    for(int i=0; i<k; i++)
    {
        cin>>a[i]>>b[i];
    }
    sort(a, b, k);
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<b[i]; j++)
        {
            zb+=1;
            cena+=a[i];
            if(zb>=n) break;
        }
        if(zb>=n) break;
    }
    cout<<cena;
    return 0;
}
