#include <iostream>
using namespace std;

class Student
{
    int number,*marks;
    float total;
    public:
    void input()
    {
        cout<<"\nEnter data of the student"<<endl;
        cout<<"\nEnter number of subjects: ";
        cin>>number;
        cout<<"\nEnter marks: ";
        marks= new int[number];
        total=0;
        for (int i=0;i<number;i++)
        {
            cin>>marks[i];
            total = marks[i]+total;
        }
    }
    float total_sum()      //Total sum of all subjects
    {
        return total;
    }
    void display()
    {
        cout<<"\nThe average of the student is "<<total/number<<endl;
    }
};

int main()
{
    int num;
    cout<<"\nEnter the number of students: ";
    cin>>num;
    Student *s[num];
    for (int i=0;i<num;i++)
    {
        s[i] = new Student;
        s[i]->input();
        s[i]->display();   //Will display average mark of an individual student
    }

    int total_class=0;
    for (int i=0;i<num;i++)
    {
        total_class=total_class+s[i]->total_sum();  //Will calculate the total marks of class
    }

    cout<<"\nThe average marks of the class are "<<total_class/num<<endl;

    
}