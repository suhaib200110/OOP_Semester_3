#include<iostream>
using namespace std;
class localcontacts
{
    protected:
    long number;
    public:
    void input()
    {
        cout<<"\nEnter number: ";
        cin>>number;
    }
    void display()
    {
        cout<<"\nThe number is "<<number<<endl;
    }

};
class nationalcontacts:public localcontacts
{
    protected:
    string citycode;
    public:
    void in()
    {
        cout<<"\nEnter city code: ";
        cin>>citycode;
    }
    void dis()
    {
        cout<<"\nThe city code is "<<citycode<<endl;
    }

};
int main()
{
    nationalcontacts n;
    cout << endl << "Enter phone number " << endl;
    n.in();
    n.input();
    cout << endl << "Display phone number " << endl;
    n.dis();
    n.display();
    return 0;
}