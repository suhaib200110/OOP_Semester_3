#include<iostream>
using namespace std;

template<class x,class y>

class operation
{
    x X;
    y Y;
    public:
    void input()
    {
        cout<<"\nEnter X: ";
        cin>>X;
        cout<<"\nEnter Y: ";
        cin>>Y;
    }
    
    x addition()
    {
        return X+Y;
    }
    x subt()
    {
        return X-Y;
    }
    
     x division()
    {
        return X/Y;
    }
     x multi()
    {
        return X*Y;
    }
    
    void output()
    {
        cout<<"X : "<<X<<" \t\tY : "<<Y<<endl;
    }
};

int main()
{
    operation<int,int> opt;
    opt.input();
    cout<<"Addition: " << opt.addition()<<endl;
    cout<<"Multiplication: "<< opt.multi()<<endl;
    cout<<"Subtraction: "<<  opt.subt()<<endl;
    cout<<"Division: "<<opt.division();
    cout<<endl;
    
    opt.output();
    
    operation<float,float> a;
    a.input();
    cout<<"Addition: : " <<a.addition()<<endl;
    cout<<"Multilpication : "<< a.multi()<<endl;
    cout<<"Subtraction : "<< a.subt()<<endl;
    cout<<"Division: "<<a.division()<<endl; 
    opt.output();
}