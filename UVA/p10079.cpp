#include <iostream>
using namespace std;


int main()
{
    long long n;
    while(cin >>n)
    {
        if(n < 0) return 0;

        printf("%lld\n", 1+ (n*(n+1)/2));
    }

    return 0;
}
