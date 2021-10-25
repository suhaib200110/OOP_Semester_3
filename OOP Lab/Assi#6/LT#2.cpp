#include<iostream>
using namespace std;


class role
{
string pos, duty;
public:
void input()
{ 
    cout<<"\nEnter position: ";
    cin>>pos;
    cout<<"\nEnter duty: ";
    cin>>duty;
}
void display()
{ 
    cout<<"\nPosition: "<<pos<<endl;
    cout<<"\nDuty: "<<duty<<endl;
}
};


class company
{

string nam, add;
public:
void input()
{ 
    cout<<"\nEnter name: ";
    cin>>nam;
    cout<<"\nEnter address: ";
    cin>>add;
}
void display()
{ 
    cout<<"\nName: "<<nam<<endl;
    cout<<"Address: "<<add<<endl;
}
};


class person{

string person;
role r;
company c;

public:

void input()
{ 
    cout<<"\nEnter the name of the person: ";
    cin>>person;
    r.input();
    c.input();
}
void display()
{ 
    cout<<"Name of the person: "<<person<<endl;
    r.display();
    c.display();
}
};
int main(){
person p;
p.input();
cout << endl;
p.display();
return 0;
}