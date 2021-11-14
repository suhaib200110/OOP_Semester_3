#include <iostream>
using namespace std;

class time
{
private:
int hr, min, sec;

public:
time()
{ 
    hr = min = sec =0;
}               
friend ostream & operator << (ostream &out,  time &c);
friend istream & operator >> (istream &in, time &c);
friend void operator==(time &t1, time &t2);
};

istream & operator >> (istream &in, class time &c)
{
cout << "\nEnter hour ";
in >> c.hr;
cout<<"\nEnter minutes ";
in>>c.min;
cout<<"\nEnter seconds ";
in>>c.sec;

return in;

}
ostream & operator << (ostream &out, class time &c)
{ 
    out << c.hr;
    return out;
}
void operator== (class time &t1,class time &t2)
{
    if (t1.hr==t2.hr)
    {
        cout<<"Both the time values are same";
    }
    else
    {
        cout<<"Both the time values are not equal";
    }
}
int main()
{
class time t1, t2;
cin >> t1;
cout << "The first time is ";
cout << t1;
cout << endl;
cin >> t2;
cout << "The second time is ";
cout << t2<<endl;

return 0;
}