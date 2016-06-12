#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

vector<string> sortNames(vector<string> names)
{
   for (int i=0; i<names.size()-1; i++)
       for (int j=i+1; j>0; j--)
       {
           int sumi = 0, counti = names[j-1].size();
           for (int p=0; p<names[j-1].size(); p++)
               sumi += names[j-1][p] - 'A' + 1;

          int sumj = 0, countj = names[j].size();
          for (int p=0; p<names[j].size(); p++)
               sumj += names[j][p] - 'A' + 1;

          if (sumi*countj > sumj*counti)
          {
                string temp = names[j];
                names[j] = names[j-1];
                names[j-1] = temp;
          }
       }

   return names;
}

int main()
{
    int n;
    cin >> n;

    string name;
    vector<string> names;

    for (int i=0; i<n; i++)
    {
        cin >> name;
        names.push_back(name);
    }

    names = sortNames(names);

    for (int i=0; i<names.size(); i++)
        cout << names[i] << endl;

    return 0;
}
