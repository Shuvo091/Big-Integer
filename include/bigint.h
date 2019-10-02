#ifndef BIGINT_H
#define BIGINT_H


class bigint
{
public:
    bigint();
    bigint(const bigint& A);
    bigint(long long x);
    bigint(std::string s);
    virtual ~bigint();
    friend void tensCom(bigint& ,int );
    friend std::istream& operator>>(std::istream& in, bigint& A);
    friend std::ostream& operator<<(std::ostream& out, bigint& A);
    bool operator==(bigint A);
    bool operator!=(bigint A);
    bool operator>(bigint A);
    bool operator>=(bigint A);
    bool operator<(bigint A);
    bool operator<=(bigint A);
    friend bigint power(bigint base, bigint power);
    friend bigint operator%(bigint A,bigint B);
    friend bigint operator+(bigint A,bigint B);
    friend bigint operator-(bigint A,bigint B);
    friend bigint operator-(bigint A);
    friend bigint operator*(bigint A, bigint B);
    friend bigint operator/(bigint A,bigint B);
    bigint operator+=(bigint A);
    bigint operator-=(bigint A);
    bigint operator*=(bigint A);
    bigint operator*=(std::string A);
    bigint operator/=(bigint A);
    bigint operator/=(std::string A);
    bigint operator+=(std::string A);
    bigint operator-=(std::string A);
    bigint operator--();
    bigint operator--(int);
    bigint operator++();
    bigint operator++(int);
    std::string getStr();
    void zero_reducer();
    void pop_front(int number);
    void pop_back(int number);
    void push_front(int);
    void push_front(std::string);
    void push_front(bigint A);
    void push_back(int);
    void push_back(std::string);
    void push_back(bigint A);
    bigint operator=(const bigint& A);
    bigint operator=(long long a);
    bigint operator=(std::string a);
protected:
private:
    std::string str;
};


std::string findSum(std::string str1, std::string str2);
std::string multiply(std::string num1, std::string num2);
std::string Division(std::string divident, std::string divisor);
bool isSmaller(std::string str1, std::string str2);
bigint factorial(bigint number);
bigint power(bigint base, bigint power);
bigint operator%(bigint A,bigint B);


















#endif // BIGINT_H
