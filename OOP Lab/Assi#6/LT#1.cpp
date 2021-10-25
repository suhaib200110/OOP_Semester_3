#include <iostream>
using namespace std;


class T
{
int hr, min;
public:

void input()
{
    cout<<"\n\nEnter hours: ";
    cin>>hr;
    cout<<"\nEnter minutes: ";
    cin>>min;
}
void display()
{ 
    cout<<"\nTime: "<<hr<<":"<<min<<endl;
}
};




class date
{

int d, m, y;

public:
void input()
{ 
    cout<<"\nEnter date: ";
    cin>>d;
    cout<<"\nEnter month: ";
    cin>>m;
    cout<<"\nEnter year: ";
    cin>>y;
}
void display()
{ 
    cout<<"\nDate: "<<d<<endl;
    cout<<"Month: "<<m<<endl;
    cout<<"Year: "<<y<<endl;
}
};


class event
{

string eventname;
date da; 
T ti;
public:
void input()
{ 
    cout<<"\nEnter the event name: ";
    cin>>eventname;
    ti.input();
    da.input();
}
void display()
{ 
    cout<<"\nThe event name is: "<<eventname<<endl;
    ti.display();
    da.display();
}
};
int main(){
event t;
t.input();
cout << endl;
t.display();
return 0;
}