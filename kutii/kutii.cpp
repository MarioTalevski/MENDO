#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


int main()
{
    vector<int> partSizes, boxSizes;

    int nparts, nboxes;
    cin >> nparts >> nboxes;

    for (int i=0; i<nparts; i++)
    {
        int partSize;
        cin >> partSize;
        partSizes.push_back(partSize);
    }

    for (int i=0; i<nboxes; i++)
    {
        int boxSize;
        cin >> boxSize;
        boxSizes.push_back(boxSize);
    }

    int used[100];  int usedboxes = 0;
    memset(used, 0, sizeof(used));

    for (int i=0; i<partSizes.size(); i++)
    {
        int partSize = partSizes[i];
        int boxIndex = -1;

        for (int j=0; j<boxSizes.size(); j++)
            if (used[j] == 0 && boxSizes[j] >= partSize)
            {
                boxIndex = j;
                break;
            }

        if (boxIndex == -1) break;

        usedboxes++;
        used[boxIndex] = 1;
    }


    cout << usedboxes << endl;
    return 0;
}
