#include <iostream>
using namespace std;

class number
{
int num;
public:
void input()
{
cout<<"\nEnter a number: ";
cin>>num;
}
void display()
{
cout<<"\nThe number is "<<num<<endl;
}
};

int main()
{
number *ptr , A;
ptr = &A;
ptr->input();
ptr->display();
}

