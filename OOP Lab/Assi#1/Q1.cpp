#include <iostream>
using namespace std;

struct Cylinder
{
    int rad , height;
    
    float Area(){
        return 2*3.14*rad*2+2*3.14*height;
    }
    float Volume(){
        return 3.14*rad*2*height;
    }
};

int main()
{   
    Cylinder C1;
    cout<<"\n\nPlease enter the height and radius of cylinder:";
    cout<<"\n\nHeight:";
    cin>>C1.height;
    cout<<"\n\nRadius:";
    cin>>C1.rad;
    cout<<"The surface area of the cylinder is:"<<C1.Area();
    cout<<"\n\nThe Volume of the cylinder is:"<<C1.Volume()<<"\n\n\n\n";
    
}
