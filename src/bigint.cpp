#include <bits/stdc++.h>
#include "bigint.h"

using namespace std;


bigint::bigint(long long x)
{
    stringstream ss;
    ss << x;
    str = ss.str();
    this->zero_reducer();
}
bigint::bigint(string x)
{
    str = x;
    this->zero_reducer();
}
bigint::bigint(const bigint& x)
{
    str = x.str;
    this->zero_reducer();
}
bool bigint::operator<=(bigint A)
{
    if(*this == A || *this < A)
        return true;
    else
        return false;
}
bool bigint::operator>=(bigint A)
{
    if(*this == A || *this > A)
        return true;
    else
        return false;
}
bool bigint::operator!=(bigint A)
{
    if(*this == A)
        return false;
    else
        return true;
}
bool bigint::operator<(bigint A)
{
    if(*this > A || *this == A )
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool bigint::operator>(bigint A)
{
    int len = str.size();
    int lenA = A.str.size();
    if(*this == A || (str[0] == '-' && A.str[0] != '-'))
    {
        return false;
    }
    else if(str[0] != '-' && A.str[0] == '-')
    {
        return true;
    }
    else if((str[0] != '-' && A.str[0] != '-'))
    {
        if(len > lenA)
        {
            return true;
        }
        else if(len < lenA)
        {
            return false;
        }
        else
        {
        for(int i = 0; i<len; i++)
        {
            if(str[i] > A.str[i])
            {
                return true;
            }
            else if(str[i] < A.str[i])
            {
                return false;
            }
        }
        return false;
        }
    }
    else if((str[0] == '-' && A.str[0] == '-'))
    {
        if(len > lenA)
        {
            return false;
        }
        else if(len < lenA)
        {
            return true;
        }
        for(int i = 1; i<len; i++)
        {
            if(str[i] > A.str[i])
            {
                return false;
            }
            else if(str[i] < A.str[i])
            {
                return true;
            }
        }
        return false;
    }
}
bool bigint::operator==(bigint A)
{
    bool x = str.compare(A.str);
    return !x;
}
void bigint::pop_front(int number)
{
        str.erase(0,number);

}
void bigint::pop_back(int number)
{
    int start = str.size() - number;
        str.erase(start,number);

}
void bigint::push_back(int x)
{
    stringstream ss;
    ss<<x;
    string temp ;
    temp = ss.str();
    str+=temp;
}
void bigint::push_front(int x)
{
    stringstream ss;
    ss<<x;
    string temp ;
    temp = ss.str();
    str=temp+str;
}
void bigint::push_back(string temp)
{
    str+=temp;
}
void bigint::push_front(string temp)
{
    str = temp+str;
}
void bigint::push_back(bigint temp)
{
    str +=temp.str;
}
void bigint::push_front(bigint temp)
{
    str =temp.str + str;
}
void bigint::zero_reducer()
{
     int flag = 0;
     if(str[0] == '-')
     {
         flag = 1;
     }
     for(int i =flag; ;)
     {
         if(str[i] == '0')
         {
             str.erase(i,1);
         }
         else
            break;
     }
     if(str.empty() ||(str.size() == 1 && str[0] == '-'))
     {
         str = "0";
     }


}
string bigint::getStr()
{
    return str;
}
bigint::bigint()
{
}



bigint::~bigint()
{
   ///static int x =0;
  /// cout << "Destructor Called: "<<++x<<endl;
}
