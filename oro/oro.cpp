#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int p, m, n;
   vector<int> group;

   cin >> p >> m;
   cin >> n;

   for (int i=0; i<n; i++)
   {
       int steps;
       cin >> steps;
       group.push_back(steps);
   }

   int dp[51][1001];

   memset(dp, 0, sizeof(dp));

   dp[0][p] = 1;

   for (int i=0; i<group.size(); i++)
   {
       for (int j=0; j<=m; j++)
       {
           if (dp[i][j] == 1)
           {
               if (j - group[i] >= 0) dp[i+1][j-group[i]] = 1;
               if (j + group[i] <= m) dp[i+1][j+group[i]] = 1;
           }
       }
   }

   int finalResult = -1;
   for (int j=0; j<=m; j++)
      if (dp[group.size()][j] == 1)
         finalResult = j;

   cout << finalResult << endl;
   return 0;
}
