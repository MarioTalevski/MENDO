#include <iostream>
using namespace std;

int main()
{
    int best = 0, n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int wi, di, li;
        cin >> wi >> di >> li;

        int points = 3 * wi + di;

        if (points > best)
           best = points;
    }

    cout << best << endl;
    return 0;
}
