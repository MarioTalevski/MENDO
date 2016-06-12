#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n, d = 0;
    vector<int> prices;

    cin >> n >> d;

    for (int i=0; i<n; i++)
    {
        int price;
        cin >> price;
        prices.push_back(price);
    }

    sort(prices.begin(), prices.end());
    reverse(prices.begin(), prices.end());

    double total_price = 0.0;
    int cheaper_items = prices.size() / 3;

    for (int i=0; i<n; i++)
    {
        if (i < cheaper_items)
           total_price += prices[i] - prices[i] * (d/100.0);
        else
            total_price += prices[i];
    }

    cout << fixed << setprecision(2);
    cout << total_price << endl;
    return 0;
}
