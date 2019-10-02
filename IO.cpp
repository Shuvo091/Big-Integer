#include <bits/stdc++.h>
#include "bigint.h"

using namespace std;


istream& operator>>(istream& in, bigint& A)
{
    in >> A.str;
    A.zero_reducer();
    return in;
}
ostream& operator<<(ostream& out, bigint& A)
{
    out << A.str;
    return out;
}










