#include <iostream>
using namespace std;

class travel
{
int km, hr;
public:
travel()
{
km =0;
hr =0;
}
void input()
{
    cout<<"Enter distance: ";
    cin>>km;
    cout<<"Enter time:";
    cin>>hr;
}
void display()
{
    cout<<"\nThe distance is "<<km<<endl;
    cout<<"The time is : "<<hr<<endl;
}
travel add(travel e)
{
    travel temp;
    temp.km = km + e.km;
    temp.hr = hr + e.hr; 
    return temp;
}

};
int main(){
travel t1,t2, l;
t1.input();
t1.display();
cout << endl;
t2.input();
t2.display();
l = t1.add(t2);
cout << endl;
l.display();
return 0;
}