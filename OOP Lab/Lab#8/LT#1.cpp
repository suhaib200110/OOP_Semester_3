#include<iostream>
using namespace std;

class person
{
    protected:
    string name, address,id;
    public:
    person()
    {
        name="Nill";
        address="Nill";
        id="Nill";
    }
    void input()
    {
        cout<<"\nEnter name of the student: ";
        cin>>name;
        cout<<"\nEnter adress: ";
        cin>>address;
        cout<<"\nEnter ID: ";
        cin>>address;
    }
    void display()
    {
        cout<<"The name is "<<name<<endl;
        cout<<"The adress of the student is "<<address<<endl;
        cout<<"The Id is "<<id<<endl;
    }

};
class student : public person
{
    protected:
    int roll_no, marks;
    public:
    student()
    {
        roll_no=0;
        marks=0;
    }
    void in()
    {
        cout<<"Enter Roll#: ";
        cin>>roll_no;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void dis()
    {
        cout<<"\nRoll # is "<<roll_no<<endl;
        cout<<"Marks are "<<marks<<endl;
    }

};
int main()
{
    student s;
    cout << "There is no record of any student yet ";
    s.display();
    s.dis();
    cout << endl << "Enter record of a student " << endl;
    s.input();
    s.in();
    cout << endl << "Display record of a student " << endl;
    s.display();
    s.dis();
    return 0;
}