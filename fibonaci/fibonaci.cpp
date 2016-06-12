#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countFibs(int a, int b)
{
    int counter = 0;
    vector<int> numbers;

    int f=0, f1=1, f2=1;
    numbers.push_back(f1);
    numbers.push_back(f2);

    while (f < 25000)
    {
          f = f1+f2;
          f2 = f1;
          f1 = f;

          numbers.push_back(f);
    }

    for (int i=0; i<numbers.size(); i++)
        if (numbers[i] >= a && numbers[i] <= b)
           counter++;

    return counter;
}

int main()
{
    int start, end;
    cin >> start >> end;

    cout << countFibs(start, end) << endl;

    return 0;
}
