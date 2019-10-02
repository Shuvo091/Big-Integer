#include <bits/stdc++.h>
#include "bigint.h"
#ifndef MATRIX_H
#define MATRIX_H


using namespace std;

template <typename T>
class Matrix
{
public:
    Matrix()
    {
        row =0;
        coloumn = 0;
    }
    void setDimension(int a,int b)
    {
        row = a;
        coloumn = b;
        arr = new T*[row];
        for(int  i =0; i<row; i++)
        {
            arr[i]  = new T[coloumn];
        }
    }

    Matrix(int a, int b)
    {
        row = a;
        coloumn = b;
        arr = new T*[row];
        for(int  i =0; i<row; i++)
        {
            arr[i]  = new T[coloumn];
        }
    }
    Matrix(Matrix &A)
    {
        row = A.row;
        coloumn = A.coloumn;
        arr = new T*[row];
        for(int  i =0; i<row; i++)
        {
            arr[i]  = new T[coloumn];
        }
        for(int i =0; i < row; i++)
        {
            for(int j =0; j<coloumn;j++)
            {
                arr[i][j] = A.arr[i][j];
            }
        }
    }
    ~Matrix()
    {
        for(int  i =0; i<row; i++)
        {
            delete []arr[i];
        }
        delete []arr;
    }
    friend istream& operator>>(istream& in, Matrix& A)
    {
        for(int i = 0; i < A.row; i++)
        {
            for(int j = 0; j<A.coloumn; j++)
            {
                cout << "row: "<<i+1<<" column: "<< j+1<<": ";
                in >> A.arr[i][j];
            }
        }
        return in;
    }
    friend std::ostream& operator<<(std::ostream& out, Matrix& A)
    {
        for(int i = 0; i < A.row; i++)
        {
            for(int j = 0; j<A.coloumn; j++)
            {
                out << A.arr[i][j]<<"  ";
            }
            out << std::endl;
        }
        return out;
    }
    Matrix operator=(const Matrix& A)
    {
        ///cout <<"Assignment Called\n";
        if(row != A.row || coloumn != A.coloumn)
          {
              ///cout << "n.row = "<< n.row<<"   row= "<<row<<"   n.coloumn= "<< n.coloumn<<"   coloum= "<<coloumn<<endl;
              cout <<"Assignment error ";
              exit(4);
          }
          for(int i =0; i< row; i++)
          {
              for(int j =0; j<coloumn;j++)
              {
                  arr[i][j] = A.arr[i][j];
              }
          }
          return *this;
    }
    friend Matrix operator+(Matrix m, Matrix n)
    {
          if(n.row != m.row || n.coloumn != m.coloumn)
          {
              cout <<"Not Correct! ";
              exit(3);
          }
          Matrix ans(m.row,m.coloumn);
          for(int i =0; i<m.row; i++)
          {
              for(int j=0; j<m.coloumn; j++)
              {
                  ans.arr[i][j] = n.arr[i][j]+m.arr[i][j];
              }
          }
          return ans;
    }
    friend Matrix operator-(Matrix m, Matrix n)
    {
          if(n.row != m.row || n.coloumn != m.coloumn)
          {
              cout <<"Not Correct! ";
              exit(3);
          }
          Matrix ans(m.row,m.coloumn);
          for(int i =0; i<m.row; i++)
          {
              for(int j=0; j<m.coloumn; j++)
              {
                  ans.arr[i][j] = m.arr[i][j]-n.arr[i][j];
              }
          }
          return ans;
    }
    friend Matrix operator*(Matrix m, Matrix n)
    {
          if(m.coloumn != n.row)
          {
              cout <<"Not Correct! ";
              exit(3);
          }
          Matrix ans(m.row,n.coloumn);
          bigint temp;
          for(int i =0; i<m.row; i++)
          {
              for(int j=0; j<n.coloumn; j++)
              {
                  for(int k =0; k<n.row; k++)
                  {
                      temp += m.arr[i][k]*n.arr[k][j];
                  }
                  ans.arr[i][j] = temp;
                  temp = 0;
              }
          }
          return ans;
    }

private:
    int row,coloumn;
    T **arr;
};


bool Is_operand(char ch);
bool Is_operator(char ch);
bool Open_Parenthesis(char ch);
int give_value_of_precedence(char ch);
bool Has_higher_Precedence(char op1, char op2);
string Infix_to_Postfix(string exp);














#endif // MATRIX_H
