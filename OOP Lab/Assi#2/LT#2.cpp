#include <iostream>
#include <bits/stdc++.h>           
/*Calling this library to call gcd function for highest common factor
 to convert to reduced form*/
using namespace std;

class Rational
{
    int num1,num2,den1,den2;
    public:
    void input()
    {
        cout<<"\n\nEnter the numerator of the first number:";
        cin>>num1;
        cout<<"\nEnter the denominator of the first number:";
        cin>>den1;
        cout<<"\n\nEnter the numerator of the second number:";
        cin>>num2;
        cout<<"\nEnter the denominator of the second number:";
        cin>>den2;
    }
    void reduce_fraction(int a,int b)     
    { 
      int result=0;
      result = __gcd(a,b);       //Calling this gcd function from the above library to convert to simplest form
      a=a/result;
      b=b/result;
      cout<<a<<"/"<<b<<endl; 
    }
    void Add()
    {
        int num_add=0,den_add=0;
        num_add= num1*den2+num2*den1;
        den_add= den1*den2;
        cout<<"\n\nThe result of addition in reduced form is: ";
        reduce_fraction(num_add,den_add);
    }

    void Sub()
    {
        int num_sub=0,den_sub=0;
        num_sub= num1*den2-num2*den1;
        den_sub= den1*den2;
        cout<<"\nThe result of subtraction in reduced form is: ";
        reduce_fraction(num_sub,den_sub);
    }
    void Mult()
    {
        int num_mul=0,den_mul=0;
        num_mul=num1*num2;
        den_mul=den1*den2;
        cout<<"\nThe result of multiplication in reduced form is: ";
        reduce_fraction(num_mul,den_mul);
    }
    void Div()
    {
        int num_div=0,den_div=0;
        num_div=num1*den2;
        den_div=den1*num2;
        cout<<"\nThe result of division in reduced form is: ";
        reduce_fraction(num_div,den_div);
    }



};

int main()
{
    Rational o1;
    o1.input();
    o1.Add();
    o1.Sub();
    o1.Mult();
    o1.Div();
    return 0;
}