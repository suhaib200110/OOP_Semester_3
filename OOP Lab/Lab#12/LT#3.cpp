#include <iostream> 
using namespace std;

template <class x>

class a
{     
    int size;
    x *ptr;
    public:
     

    a(x *arr,int s)
    {
        size=s;
        ptr=arr;
        for (int i=0;i<size;i++)
        {
            cout<<"\n"<<ptr[i]<<endl;
        }
    }
    
};

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};   
    a<int> a(arr, 5);
    return 0;

}