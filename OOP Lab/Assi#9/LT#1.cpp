#include <iostream>
using namespace std;

class Teacher
{
    string salary,inst,exp;
    public:
    Teacher()
    {
        salary=inst=exp="Nill";
    }
    void input()
    {
        cout<<"\nEnter Institution: ";
        cin>>inst;
        cout<<"\nEnter Salary: ";
        cin>>salary;
        cout<<"\nEnter Experience: ";
        cin>>exp;
    }
    void display()
    {
        cout<<"\nInstitution: "<<inst<<endl<<"Salary: "<<salary<<endl<<"Experience: "<<exp<<endl;
    }

};

class writer
{
int book;
public:
void input()
{
    cout<<"\nEnter number of books: ";
    cin>>book;
}
void display()
{
    cout<<"\nThe number of books are: "<<book<<endl;
} 
};

class scholar: public Teacher, public writer
{
string name,address;
int age;
public:
void input()
{
    Teacher::input();
    writer::input();
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nEnter address: ";
    cin>>address;
    cout<<"\nEnter age: ";
    cin>>age;
}
void display()
{
    Teacher::display();
    writer::display();
    cout<<"\nName: "<<name<<endl<<"Address: "<<address<<endl<<"Age: "<<age<<endl;
}
};

int main()
{
    scholar s;
    s.input();
    s.Teacher::input();
    s.writer::input();
    s.display();
    s.Teacher::display();
    s.writer::display();

}