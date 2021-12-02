#include <iostream>
using namespace std;

class counter
{
    int c;
    public:
    counter()
    {
        c=0;
    }
    void display()
    {
        cout<<endl<<c<<endl;
    }
    public:
    counter operator ++ ()
    {
    
        for (int i=0;i<20;++i)
        {
            c=c+1;
            display();
        }

    }

    counter operator -- ()
    {
       
        for (int i=20;i>5;--i)
        {
            c=c-1;
            display();
        }
    
    }

};

int main()
{
    counter obj1,obj2;
    obj1.display();
    obj1=++obj2;
    cout<<endl;
    obj1=--obj2;
    cout<<endl;
    cout<<"\n\n\n";
}