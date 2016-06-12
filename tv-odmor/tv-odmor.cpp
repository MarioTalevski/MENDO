#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> starts, ends;

    for (int i=0; i<n; i++)
    {
        int shh, smm, ehh, emm;
        cin >> shh >> smm >> ehh >> emm;

        starts.push_back(shh*60 + smm);
        ends.push_back(ehh*60 + emm);

        if (ends[i] <= starts[i])
           ends[i] += 24*60;
    }

    int dp[205][205];
    int nshows = starts.size();

    for (int i=0; i<nshows; i++)
        starts.push_back(starts[i]+24*60);

    for (int i=0; i<nshows; i++)
        ends.push_back(ends[i]+24*60);

    for (int i=0; i<205; i++)
         for (int j=0; j<205; j++)
             dp[i][j] = 0;

    for (int i=0; i<starts.size(); i++)
       for (int j=0; j<starts.size(); j++)
          if(ends[i]<=starts[j])
             dp[i][j]=ends[i]-starts[i];

    for (int j=0; j<starts.size(); j++)
      for (int i=0; i<starts.size(); i++)
         for (int k=0; k<starts.size(); k++)
              if(dp[i][j] && dp[j][k])
                 dp[i][k]=max(dp[i][k], dp[i][j]+dp[j][k]);

    int result=0;
    for (int i=0; i<starts.size()/2; i++)
        result=max(result, dp[i][i+starts.size()/2]);

    cout << result << endl;
    return 0;
}
