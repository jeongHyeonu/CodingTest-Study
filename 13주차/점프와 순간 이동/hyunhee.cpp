#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    while(n >= 1)
    {
        if(n % 2 == 1)
        {
            n -= 1;
            ans++;
        }
        n = n / 2;
    }
    return ans;
}
