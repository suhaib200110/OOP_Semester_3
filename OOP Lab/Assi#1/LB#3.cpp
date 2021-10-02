#include <iostream>
using namespace std;

struct Student
{
    string student_name,father_name,reg_num,degree;

    void input()
    {
        cout<<"\n\nPlease enter the name of the student:";
        cin>>student_name;
        cout<<"\n\nPlease enter the student's Registration number:";
        cin>>reg_num;
        cout<<endl<<"Please enter father's name:";
        cin>>father_name;
        cout<<endl<<"Please enter degree:";
        cin>>degree;
    }

    void display()
    {
        cout<<"The name of the student is "<<student_name<<endl;
        cout<<"The registration ID of the student is "<<reg_num<<endl;
        cout<<"The father's name is "<<father_name<<endl;
        cout<<"The degree of the student is "<<degree<<endl; 
    }
};


int main()
{
    int num_of_students=0;
    cout<<"\n\n\nHow many students do you want to enter?"<<endl;
    cin>>num_of_students;
    struct Student s[num_of_students];

    for (int i=0;i<num_of_students;i++)
    {
        s[i].input();
    }
    cout<<"\n\nEnter the student number to see the data of that student:";
    int student_number=0;
    cin>>student_number;
    student_number=student_number-1;
    s[student_number].display();
    return 0;}
