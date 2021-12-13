#include <iostream>
using namespace std;

template <class x>

class test
{
    x arr[5];
    public:
    void input()
    {
    cout<<"\nEnter elements: ";
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    }
    void display(int l)
    {
        cout<<"\nThe number is: "<<arr[l]<<endl;
    }
};

int main()
{
    test <int> obj1;
    cout<<"\nIntger data type: "<<endl;
    obj1.input();
    cout<<"\n\n\nEnter  index:";
    int size1,size2;
    cin>>size1;
    obj1.display(size1);

    cout<<"\nFloat data type: "<<endl;
    test <float> obj2;
    obj2.input();
    cout<<"\n\n\nEnter  index:";
    cin>>size2;
    obj2.display(size2);
}