#include <bits/stdc++.h>
#include "bigint.h"
#include "Matrix.h"
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    bigint a,b,c;
    Matrix <bigint>x,y,z;
    int n,m,var1,var2,var3,var4;
    int decision;
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
    cout<<  "\n\t\t\t\t\t\t\t\tWelcome to my project: Big-integer & it's application\n";
    cout << "\n\t\t\t\t\t\t\t\tThis project contains:\n";
    cout << "\t\t\t\t\t\t\t\t\t1: Summation\n\t\t\t\t\t\t\t\t\t2: Subtraction\n\t\t\t\t\t\t\t\t\t3: Multiplication\n\t\t\t\t\t\t\t\t\t4: Division\n\t\t\t\t\t\t\t\t\t5: Power function\n\t\t\t\t\t\t\t\t\t6: Modular operation\n\t\t\t\t\t\t\t\t\t7: Factorial operation\n\t\t\t\t\t\t\t\t\t8: Matrix operations on Big integers\n\n";
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
    cout <<"\n\n";
    main_menu:
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
    cout << "\n\t\t\t\t\t\t\t\tMain Menu:\n";
    cout << "\n\t\t\t\t\t\t\t\tPlease select:\n";
    cout << "\t\t\t\t\t\t\t\t\t<1>: Summation\n\t\t\t\t\t\t\t\t\t<2>: Subtraction\n\t\t\t\t\t\t\t\t\t<3>: Multiplication\n\t\t\t\t\t\t\t\t\t<4>: Division\n\t\t\t\t\t\t\t\t\t<5>: Power function\n\t\t\t\t\t\t\t\t\t<6>: Modular operation\n\t\t\t\t\t\t\t\t\t<7>: Factorial operation\n\t\t\t\t\t\t\t\t\t<8>: Matrix operations on Big integers\n\t\t\t\t\t\t\t\t\t<9>:File input/output\n\t\t\t\t\t\t\t\t\t <10>:Exit\n\n";
    cout << "Please press the corresponding number on your keyboard:  ";
    cin >> decision;
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
    cout << "\n";

    switch(decision)
    {
    case 1:
        cout << "Enter the 1st Value: ";
        cin >> a;
        cout << "Enter the 2nd Value: ";
        cin >> b;
        c = a+b;
        cout << "The Summation is : "<< c << endl;
        break;

    case 2:

        cout << "Enter the 1st Value: ";
        cin >> a;
        cout  <<  "Enter the 2nd Value: ";
        cin >> b;
        c = a-b;
        cout << "The Subtraction is : "<<c << endl;
        break;

    case 3:
        cout << "Enter the Multiplicand: ";
        cin >> a;
        cout << "Enter the  Multiplier: ";
        cin >> b;
        c = a*b;
        cout << "The Multiplication is : "<<c << endl;
        break;

    case 4:
        cout << "Enter the Divident ";
        cin >> a;
        cout <<  "Enter the Divisor: ";
        cin >> b;
        c = a/b;
        cout << "The Division is : "<<c << endl;
        break;

     case 5:
        cout << "Enter the Base ";
        cin >> a;
        cout <<  "Enter the Power: ";
        cin >> b;
        c = power(a,b);
        cout << a<<" to the power "<<b << " is : "<<c << endl;
        break;

    case 6:
        cout << "Enter the 1st value: ";
        cin >> a;
        cout <<  "Enter the 2nd Value: ";
        cin >> b;
        c = a%b;
        cout << a<<" mod "<<b << " is : "<<c << endl;
        break;

    case 7:
        cout << "Enter the value: ";
        cin >> a;
        c = factorial(a);
        cout << a<<"!  = "<<c << endl;
        break;

    case 8:
        matrix_menu:
        cout << "Please Select specific operation: \n";
        cout << "<1>: Addition\n<2>: Subtraction\n<3>: Multiplication\n<4>: Exit to main menu\n";
        cout << "Select: ";
        cin >> n;
        switch(n)
        {
        case 1:
            cout << "For Matrix 1:  \n"<<"Row: ";
            cin >> var1;
            cout <<"Coloumn: ";
            cin >> var2;
            x.setDimension(var1,var2);
            cout <<"Enter The Values of the Matrix\n";
            cin >> x;
            cout << "For Matrix 2:  \n"<<"Row: ";
            cin >> var3;
            cout <<"Coloumn: ";
            cin >> var4;
            y.setDimension(var3,var4);
            cout <<"Enter The Values of the Matrix\n";
            cin >> y;
            z.setDimension(var1,var2);
            z = x+y;
            cout << "\nThe Summation is: \n\n";
            cout << z;
            break;

        case 2:
            cout << "For Matrix 1:  \n"<<"Row: ";
            cin >> var1;
            cout <<"Coloumn: ";
            cin >> var2;
            x.setDimension(var1,var2);
            cout <<"Enter The Values of the Matrix\n";
            cin >> x;
            cout << "For Matrix 2:  \n"<<"Row: ";
            cin >> var3;
            cout <<"Coloumn: ";
            cin >> var4;
            y.setDimension(var3,var4);
            cout <<"Enter The Values of the Matrix\n";
            cin >> y;
            z.setDimension(var1,var2);
            z = x-y;
            cout << "\nThe Subtraction is: \n\n";
            cout << z;
            break;

        case 3:
            cout << "For Matrix 1:  \n"<<"Row: ";
            cin >> var1;
            cout <<"Coloumn: ";
            cin >> var2;
            x.setDimension(var1,var2);
            cout <<"Enter The Values of the Matrix\n";
            cin >> x;
            cout << "For Matrix 2:  \n"<<"Row: ";
            cin >> var3;
            cout <<"Coloumn: ";
            cin >> var4;
            y.setDimension(var3,var4);
            cout <<"Enter The Values of the Matrix\n";
            cin >> y;
            z.setDimension(var1,var4);
            z = x*y;
            cout << "\nThe Multiplication is: \n\n";
            cout << z;
            break;
        case 4:
            goto main_menu;
        default:
            cout <<"Invalid choice: Try again: ";
            goto matrix_menu;

        }

        break;

        case 9:
            goto file_section;
        case 10:
            exit(0);
        default:
            cout <<"Invalid choice: Try again: ";
            goto main_menu;
    }









    goto main_menu;

    file_section:
        bigint bint1,bint2;
        int iter;
        string line;
        ifstream in("input.txt");
        ofstream out("output.txt");
        getline(in,line);
        getline(in,line);
        stringstream ss(line);
        ss >> iter;
        bint1 = 1;
        for(int i = 1; i<=iter; i++)
        {
            bint2 = factorial(bint1);
            out << i<<"!  =  "<< bint2<< endl<<endl<<endl;
            bint1++;
        }
        in.close();
        out.close();

    goto main_menu;




















    return 0;
}
