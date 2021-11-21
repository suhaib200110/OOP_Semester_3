#include <iostream>
using namespace std;

class Computer
{
    protected:
    string ram,hard_drive,core;
    Computer()
    {
        ram=hard_drive=core="Nill";
    }
    void input()
    {
        cout<<"\nEnter Ram:";
        cin>>ram;
        cout<<"\nEnter Hard Drive space: ";
        cin>>hard_drive;
        cout<<"\nEnter number of cores: ";
        cin>>core;
    }
    void display()
    {
        cout<<"\nRam is "<<ram<<endl<<"Hard Drive space: "<<hard_drive<<endl<<"Cores: "<<core<<endl;
    }

};

class Laptop : protected Computer
{
    int length,height,width,weight;
    public:
    Laptop()
    {
        length=height=weight=width=0;
    }
    void input()
    {
        Computer::input();
        cout<<"\nEnter length: ";
        cin>>length;
        cout<<"\nEnter height: ";
        cin>>height;
        cout<<"\nEnter weigth: ";
        cin>>weight;
        cout<<"\nEnter width: ";
        cin>>width;
    }
    void display()
    {
        Computer::display();
        cout<<"Length: "<<length<<endl<<"Heigth: "<<height<<endl<<"Weigth: "<<weight<<endl<<"Width: "<<width<<endl;
    }
};

int main()
{
    Laptop l;
    l.input();
    l.display();
    return 0;
}