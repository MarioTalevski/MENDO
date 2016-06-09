#include <iostream>
using namespace std;
 
int main()
{
    int n, base=2, deg, first=1;
    cin >> n; //read n from console
     
    while (n >= 2)
    {
          deg = 0;
           
          while (n%base == 0)
          {
                n /= base;
                deg = deg+1;
          }
                 
          if (deg > 0)
          {
                  if (first == 1)
                  {
                     cout << "(" << base << "^" << deg << ")";
                     first = 0; //printed the first factor
                  } else
                  {
                     cout << "*" << "(" << base << "^" << deg << ")";
                  }                  
          }
           
          base = base + 1;                     
    }
     
    cout << endl;
    return 0;
}