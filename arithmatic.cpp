#include <bits/stdc++.h>
#include "bigint.h"

using namespace std;



bigint bigint::operator--(int)
{
      bigint x = *this;
      *this =*this-1;
      return x;
}
bigint bigint::operator--()
{
       *this =*this-1;
       return *this;
}
bigint bigint::operator++(int)
{
      bigint x = *this;
      *this =*this+1;
      return x;
}
bigint bigint::operator++()
{
        *this = *this+1;
        return *this;
}
bigint bigint::operator+=(bigint A)
{
    *this = *this + A;
    return *this;
}
bigint bigint::operator-=(bigint A)
{
    *this = *this - A;
    return *this;
}
bigint bigint::operator+=(string A)
{
    *this = *this + A;
    return *this;
}
bigint bigint::operator-=(string A)
{
    *this = *this - A;
    return *this;
}
 bigint bigint::operator*=(bigint A)
 {
    *this = *this * A;
    return *this;
 }
 bigint bigint::operator*=(string A)
 {
    *this = *this * A;
    return *this;
 }

bigint bigint::operator/=(bigint A)
 {
    *this = *this / A;
    return *this;
 }
 bigint bigint::operator/=(string A)
 {
    *this = *this / A;
    return *this;
 }

bigint operator/(bigint A, bigint B)
{
    bigint C;
    string a,b,c;
    if(A.str[0] != '-' && B.str[0] != '-')
    {
        a = A.str;
        b = B.str;
        c = Division(a,b);
        C.push_back(c);
        return C;
    }
    else if(A.str[0] == '-' &&   B.str[0] == '-')
    {
        A.pop_front(1);
        B.pop_front(1);
        a = A.str;
        b = B.str;
        c = Division(a,b);
        C.push_back(c);
        return C;
    }
    else if(A.str[0] == '-' && B.str[0] != '-')
    {
        A.pop_front(1);
       a = A.str;
        b = B.str;
        c = Division(a,b);
        C.push_back(c);
        C.push_front("-");
        return C;
    }
    else if(A.str[0] != '-' && B.str[0] == '-')
    {
        B.pop_front(1);
        a = A.str;
        b = B.str;
        c = Division(a,b);
        C.push_back(c);
        C.push_front("-");
        return C;
    }
}


bigint operator*(bigint A, bigint B)
{
    bigint C;
    string a,b,c;
    if(A.str[0] != '-' && B.str[0] != '-')
    {
        a = A.str;
        b = B.str;
        c = multiply(a,b);
        C.push_back(c);
        return C;
    }
    else if(A.str[0] == '-' && B.str[0] == '-')
    {
        A.pop_front(1);
        B.pop_front(1);
        a = A.str;
        b = B.str;
        c = multiply(a,b);
        C.push_back(c);
        return C;
    }
    else if(A.str[0] == '-' && B.str[0] != '-')
    {
       A.pop_front(1);
       a = A.str;
        b = B.str;
        c = multiply(a,b);
        C.push_back(c);
        C.push_front("-");
        return C;
    }
    else if(A.str[0] != '-' && B.str[0] == '-')
    {
        B.pop_front(1);
        a = A.str;
        b = B.str;
        c = multiply(a,b);
        C.push_back(c);
        C.push_front("-");
        return C;
    }
}
bigint operator-(bigint A)
{
    bigint C;
    if(A.str[0] == '-')
    {
        A.pop_front(1);
    }
    else
    {
        A.push_front("-");
    }

    return A;
}
bigint operator-(bigint A,bigint B)
{
    bigint C;
    if(B.str[0] == '-')
    {
        B.pop_front(1);
    }
    else
    {
        B.push_front("-");
    }
    C = A + B;
    return C;
}
bigint operator+(bigint A, bigint B)
{
    bigint C;
    string a,b,c;
    if(A.str[0] != '-' && B.str[0] != '-')
    {
         a = A.str;
         b = B.str;
        c = findSum(a,b);
        C.push_back(c);
        return C;
    }
    else if(A.str[0] == '-' && B.str[0] == '-')
    {
        A.pop_front(1);
        B.pop_front(1);
         a = A.str;
         b = B.str;
        c = findSum(a,b);
        C.push_back(c);
        C.push_front("-");
        return C;
    }
    else if(A.str[0] == '-' &&  B.str[0] != '-')
    {
        A.pop_front(1);
        int len = A.str.size();
        int lenA = B.str.size();
        if(len > lenA)
        {
            tensCom(A,len);
            a = A.str;
            b= B.str;
            c = findSum(a,b);
            C.push_back(c);
            if(C.str.size() > len)
            {
                C.pop_front(1);
                return C;
            }
            else
            {
                tensCom(C,len);
                C.push_front("-");
                return C;
            }
        }
        else
        {
            tensCom(A, lenA);
             a = A.str;
            b= B.str;
            c = findSum(a,b);
            C.push_back(c);
            if(C.str.size() > lenA)
            {
                C.pop_front(1);
                return C;
            }
            else
            {
                tensCom(C,lenA);
                C.push_front("-");
                return C;
            }

        }
    }
    else if(A.str[0] != '-' &&  B.str[0] == '-')
    {
        B.pop_front(1);
        int len = A.str.size();
        int lenA = B.str.size();
        if(len > lenA)
        {
            tensCom(B,len);
             a = A.str;
            b= B.str;
            c = findSum(a,b);
            C.push_back(c);
            if(C.str.size() > len)
            {
                C.pop_front(1);
                return C;
            }
            else
            {
                tensCom(C,len);
                C.push_front("-");
                return C;
            }
        }
        else
        {
             tensCom(B,lenA);
             a = A.str;
            b= B.str;
            c = findSum(a,b);
            C.push_back(c);
            if(C.str.size() > lenA)
            {
                C.pop_front(1);
                return C;
            }
            else
            {
                tensCom(C,lenA);
                C.push_front("-");
                return C;
            }

        }
    }
}
void tensCom(bigint& A, int bigger)
{
    string ans ;
    int lenA = A.str.size();
    int difference = bigger - lenA;
    for(int i = 1; i<=difference; i++)
    {
        A.push_front(0);
    }
    int sub,carry=0,dig;
    sub =  (10 - (A.str[bigger-1] -48) );
    dig = sub % 10;
    carry = sub/10;
    ans =dig + 48;
    for(int i = bigger-2; i>=0; i--)
    {
        sub = (9+carry - (A.str[i] - 48) );
        dig = sub%10;
        carry = sub/10;
        ans += dig + 48;
    }
    reverse(ans.begin(),ans.end());
    A = ans;

}

string multiply(string num1, string num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
        return "0";

    vector<int> result(n1 + n2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i=n1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j=n2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
        i--;

    if (i == -1)
        return "0";
    string s = "";
    while (i >= 0)
        s += (result[i--] + 48);

    return s;
}

string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
    int carry = 0;
    for (int i=n1-1; i>=0; i--)
    {
        int sum = ((str1[i]-'0') +(str2[i+diff]-'0') +carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());

    return str;
}
bool isSmaller(string str1, string str2)
{
    ///cout << "str1:  "<<str1<<"   str2:  "<<str2<<endl;
    int n1 = str1.length(), n2 = str2.length();
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    for (int i=0; i<n1; i++)
    {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}

string Division(string divident, string divisor)
{
    int lenDent = divident.size();
    int lenSor = divisor.size();
    if(lenSor == 1 && divisor[0] == '0')
    {
        cout << "error: divided by zero\n";
        exit(1);
    }
    if(lenDent == 1 && divident[0] == '0')
    {
        return "0";
    }
    if(lenSor == 1 && divisor[0] == '1')
    {
        return divident;
    }
    if(lenSor > lenDent || isSmaller(divident,divisor))
    {
        return "0";
    }
    string ans,temp1,temp2;
    vector <string> preCal;
    for(int i = 0; i<10;i++)
    {
        temp2 = i + 48;
        temp1 = multiply(divisor,temp2);
        preCal.push_back(temp1);
    }
    ///reverse(preCal.begin(),preCal.end());
    int lenDiff = lenDent - lenSor;
    int pivot = lenSor;
    temp1 = divident.substr(0,lenSor);
    int preIndex = 9;
   /// cout << temp1<<endl;
    bigint x,y,z;
    while(1)
    {
           for(int i = 9; i>=0; i--)
           {
               temp2 = preCal[i];
               if(!(isSmaller(temp1,temp2)))
               {
                       ans += i + 48;
                       break;
               }
           }
         x = temp1;
         y = temp2;
         z = x-y;
         temp1 = z.getStr();
         if(pivot>=lenDent)
         {
             break;
         }
         if(temp1.size() == 1 && temp1[0] == '0')
         {
             temp1 = divident[pivot];
             pivot++;
         }
         else
         {
              temp1 += divident[pivot];
             pivot++;
         }
    }

    return ans;
}
