#include<iostream>
using namespace std;

class worker
{
    protected:
    int id, pay;
    public:
    worker()
    {
        id=pay=0;
    }
    void input()
    {
        cout<<"\nEnter id:";
        cin>>id;
        cout<<"\nEnter pay:";
        cin>>pay;    
    }
    void display()
    {
        cout<<"\nID: "<<id<<endl<<"Pay: "<<pay<<endl;
    }

};
class supervisor : protected worker
{
    string name, dept;
    public:
    supervisor()
    {
        name=dept="NA";
    }
    void in()
    {
        worker :: input();
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter department: ";
        cin>>dept;
    }
    void dis()
    {
    worker :: display();
    cout<<"\nName:  "<<name<<endl;
    cout<<"\nDepartment: "<<dept<<endl;
    }

};
int main()
{
    supervisor s;
    cout << "There is no record of any worker yet ";
    s.dis();
    cout << endl << "Enter record of a worker " << endl;
    s.in();
    cout << endl << "Display record of a worker " << endl;
    s.dis();
    return 0;
}