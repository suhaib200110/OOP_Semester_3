#include <iostream>
using namespace std;

class student{
string name,roll;

public:
// default constructor
student()
{
    name=roll="NA";
}

// input function
void input()
{
    cout<<"\nEnter Name: ";
    getline(cin,name);
    cout<<"\nEnter Roll # : ";
    getline(cin,roll);
}
};
class marks
{
    // data members
    int mar[6],s;
    public:
    // default constructor
    marks()
    {
        for (int i=0;i<6;i++)
        {
            mar[i]=0;
        }
        s=0;
    }
    // input function
    void input()
    {
        for (int i=0;i<6;i++)
        {
            cout<<"\nEnter marks: ";
            cin>>mar[i];
        }
    }
    // sum function
    int sum()
    {
        for (int i=0;i<5;i++)
        {
            s = s + mar[i];
        }
        return s;
    }

};


class result: public student, public marks
{
    // data member
    int Avg;
    public:
    // default constructor
    result()
    {
        Avg=0;
    }
    // input function
    void input()
    {
        student::input();
        marks::input();

    }
    // avg_marks function
    void avg_marks()
    {
        int s=marks::sum();
        int avg = s/6;
        cout<<"\nThe average is "<<avg<<endl;
    }
};
int main()
{
    result r;
    r.input();
    r.avg_marks();
    return 0;
}