#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        int numRelatives;
        cin >> numRelatives;
        int relatives[numRelatives];
        for(int i = 0; i < numRelatives; i++)
        {
            int rel;
            cin >> rel;
            relatives[i] = rel;
        }

        sort(relatives, relatives+numRelatives);
        int median = relatives[numRelatives/2];

        int sum = 0;
        for(int i = 0; i < numRelatives; i++)
        {
            sum += abs(relatives[i] - median);
        }
        printf("%d\n", sum);
    }
}
