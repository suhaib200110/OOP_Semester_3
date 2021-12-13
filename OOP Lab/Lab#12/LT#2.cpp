#include <iostream>
using namespace std;

template <class T,class U,class V=char>


class test
{
    T x;
    U y;
    V z;
    public:
    test()
    {
        cout<<"\nEnter elements: ";
        cin>>x>>y>>z;
    }
    test (T o,U p,V q)
    {
        x=o;
        y=p;
        z=q;
    }
    void display()
    {
        cout<<"\nThe value of elements: "<<x<<" "<<y<<" "<<z<<endl;
    }
};

int main()
{
    test <int,float,char> obj1;
    obj1.display();
    test <float, int , char> obj2(9,21,'I');
    obj2.display();
}



