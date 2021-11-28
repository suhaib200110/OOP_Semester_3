/*

With diamond problem

*/
#include <iostream>
using namespace std;


class Person
{
    string name,age;
    public:
    Person()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter age: ";
        cin>>age;
        cout<<"\nThe name of the person: "<<name<<endl;
        cout<<"The age of the person "<<age<<endl;
    }
};

class Faculty:  public Person    
{
    public:
    Faculty():Person()
    {
    }
};

class Student :  public Person
{
    public:
    Student():Person()
    {
    }

};

class TA : public Student, public Faculty
{
    public:
    TA():Student(),Faculty()
    {
        
    }
};

int main()
{
    TA a;
    return 0;
}