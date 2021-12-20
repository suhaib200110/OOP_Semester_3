#include<iostream>
using namespace std;

template<class x>

class temp
{
  x * ptr;
  int size;
  public:
  temp()
  {
      cout<<"\nEnter size of array : ";
      cin>>size;
      ptr=new int(size);
      
      for(int i=0;i<size;i++)
      {
          cout<<"enter element number "<<i+1<<endl;
          cin>>ptr[i];
      }
  }
  
  
  void display()
  {
      for(int i=0;i<size;i++)
      {
          cout<<"\nElement "<<i+1<<" is : "<<ptr[i]<<endl;
      }
  }
  
};

int main()
{
    int arr[5]={1,2,3,4,5};
    temp<int> obj(arr,5);
    obj.display();    
}