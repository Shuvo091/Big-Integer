#include <bits/stdc++.h>
#include "bigint.h"

using namespace std;

bigint bigint::operator=(const bigint& A)
{
    str = A.str;
    this->zero_reducer();
    return *this;
}

bigint bigint::operator=(long long a)
{
    stringstream ss;
    ss << a;
    str = ss.str();
    this->zero_reducer();
    return *this;
}
bigint bigint::operator=(string a)
{
    str = a;
    this->zero_reducer();
    return *this;
}
