#include <bits/stdc++.h>
#include "bigint.h"

using namespace std;



bigint operator%(bigint A,bigint B)
{
     bigint ans;
     ans = A / B;
     ans = A - ans*B;
     return ans;
}



bigint power(bigint base, bigint power)
{
    bigint ans = 1;
    long long Pow;
    stringstream ss;
    ss << power;
    ss >> Pow;
    if(base == 0)
    {
        ans = 0;
        return ans;
    }
    if(Pow == 0)
    {
        ans = 1;
        return  ans;
    }
    if(Pow < 0)
    {
        ans = 0;
        return ans;
    }
    while(Pow > 0)
    {
        if(Pow%2 == 1)
        {
              ans = ans*base;
        }
        base = base*base;
        Pow = Pow/2;
    }
    return ans;
}
bigint factorial(bigint number)
{
   bigint ans = 1;
    while (number > 0)
    {
        ans *= number;
        number--;
    }
    return ans;
}






