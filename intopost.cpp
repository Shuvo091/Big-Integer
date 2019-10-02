#include <bits/stdc++.h>
#include "bigint.h"
#include "Matrix.h"

using namespace std;


bool Is_operand(char ch)
{
    bool b;

    if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        b = true;
    }
    else
    {
        b = false;
    }

    return b;
}

bool Is_operator(char ch)
{
    bool b;

    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
    {
        b = true;
    }
    else
    {
        b = false;
    }

    return b;
}

bool Open_Parenthesis(char ch)
{
    bool b;

    if(ch == '(')
    {
        b = true;
    }
    else
    {
        b = false;
    }

    return b;
}

int give_value_of_precedence(char ch)
{
    int temp;

    if(ch == '+' || ch == '-')
    {
        temp = 1;
    }
    else if(ch == '*' || ch == '/')
    {
        temp = 2;
    }
    else if(ch == '^')
    {
        temp = 3;
    }

    return temp;
}

bool Has_higher_Precedence(char op1, char op2)
{
    bool b;
    int x, y;
    x = give_value_of_precedence(op1);
    y = give_value_of_precedence(op2);

    if(x > y)
    {
        b = true;
    }
    else
    {
        b = false;
    }

    return b;
}

