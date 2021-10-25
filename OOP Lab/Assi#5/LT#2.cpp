#include <iostream>
using namespace std;

class plane
{
    int X,Y;
    public:
    plane()
    {
        X=10;
        Y=20;
    }
    plane(int val_1,int val_2)
    {
        X=val_1;
        Y=val_2;
    }
    void display()
    {
        cout<<"\n\nValue of x: "<<X<<endl;
        cout<<"value of y: "<<Y<<endl;
    }

    plane operator + (plane p2)
    {
        plane p;
        p.X = X+p2.X;
        p.Y = Y+p2.Y;
        cout<<"\nThe added value of X is "<<p.X<<" and Y is "<<p.Y;
    }

    void operator - (plane p2)
    {
        plane p;
        p.X = X-p2.X;
        p.Y = Y-p2.Y;
        cout<<"\nThe subtracted value of X is "<<p.X<<" and Y is "<<p.Y;
    }

    void operator * (plane p)
    {
        /*cout<<"\n\nThe multiplied value of point X: "<<X*p.X<<endl;
        cout<<"The multiplied value of point Y: "<<Y*p.Y<<endl;*/
        cout<<"\nThe dot product of both points is: "<<(X*p.X)+(Y*p.Y);
    }
    void operator += (plane p)
    {
        cout<<"\nAdding: ("<<X+p.X<<","<<Y+p.Y<<")"<<endl;
    }
    void operator -= (plane p)
    {
        cout<<"\nSutracting: ("<<X-p.X<<","<<Y-p.Y<<")"<<endl;
    }
    void operator *= (plane p)
    {
        cout<<"\nMultiplying: ("<<X*p.X<<","<<Y*p.Y<<")"<<endl;
    }

};

int main()
{
    plane o1,o2(6,4);
    cout<<"\n\n\n";
    o1.display();
    cout<<endl;
    o2.display();
    cout<<endl;
    o1+o2;
    o1-o2;
    o1 * o2;
    o1 += o2;
    o1 -= o2;
    o1 *= o2;
    cout<<"\n\n\n";
}