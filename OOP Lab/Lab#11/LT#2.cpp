#include <iostream>
using namespace std;

class Mammal 
{
    public:
    virtual void Speak()
    {
        cout<<"Mammal Called "<<endl;
    }
};

class Dog: public Mammal
{
    public:
    void Speak()
    {
        cout<<"\nWoof woof"<<endl;
    }
};

class Horse: public Mammal 
{
    public:
    void Speak()
    {
        cout<<"\nHe he he"<<endl;
    }
};

class Cat: public Mammal
{
    public:
    void Speak()
    {
        cout<<"\nMeow meow"<<endl;
    }
};

int main () 
{
    Mammal* theArray[5];
    Mammal* ptr;
    int choice, i;
    for (i = 0;i<5; i++){
    cout << "(1)dog (2)cat (3)horse: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    ptr = new Dog;
    break;
    case 2:
    ptr = new Cat;
    break;
    case 3:
    ptr = new Horse;
    break;
    default: 
    ptr = new Mammal;
    break;
    }
    theArray[i] = ptr;
    }
    for (i=0;i<5;i++)
    theArray[i]->Speak();
    for (i=0;i<5;i++)
    delete theArray[i]; // Always free dynamically allocated objects
    return 0;
}