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
        cout<<"The "
    }

};
class student : public person
{
    protected:
    int roll_no, marks;
    public:
    student()
    {
    }
    void in()
    {
    }
    void dis()
    {
    }

};
int main(){
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