#include <iostream>
using namespace std;

class copy_concatenate
{
    char x;
    public:
    copy_concatenate(const char *str)
    {
        x = *str;
    }

    copy_concatenate(const copy_concatenate &c1)
    {
        x=c1.x;
    }

    ~copy_concatenate()
    {
        cout<<"\nDestructor called\n";
    }
    void display()
    {
        cout<<"The concatenated string will be : " <<x;
    }
};

int main()
{
    copy_concatenate obj1("S");
    copy_concatenate obj2= obj1;
    cout<<"\n\nFor object #1: ";
    obj1.display();
    cout<<"\n\nFor object #2: ";
    obj2.display();
}