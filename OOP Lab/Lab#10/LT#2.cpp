#include <iostream>
using namespace std;

class data
{
string name,age,gender;
public:
void input()
{
cout<<"\nEnter name: ";
cin>>name;
cout<<"\nEnter age: ";
cin>>age;
cout<<"\nEnter gender: ";
cin>>gender;
}
void display()
{
cout<<"\nName: "<<name<<endl<<"Age: "<<age<<endl<<"Gender:  "<<gender<<endl;
}
};

int main()
{
int size;
cout<<"\nHow many students are there? ";
cin>>size;
data *ptr[size];


for(int i=0; i<size; i++)
{
ptr[i] = new data;      // creating object of class A
ptr[i]->input();
ptr[i]->display();
}


for(int i=0; i<size; i++)
{
delete ptr[i];
}
return 0;
}