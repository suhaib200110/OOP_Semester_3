#include <iostream>
using namespace std;

class Mammal
{
    protected:
    int Age;
    public:
    Mammal()
    {
    Age = 1;
    cout<< "\nMammal constructor called" <<endl; 
    }
    ~Mammal()
    {
        cout<<"\nMammal destructor called "<<endl;
    }
    virtual void Move()
    {
        cout<<"\nMammal moves a step"<<endl;  
    }
    virtual void Speak()
    {
        cout<<"\nWhat langauge does a mammal speak? "<<endl;
    } 
};


class Dog : public Mammal
{
    public:
    void Move()
    {
    cout << "Dog moves a step!" << endl; 
    }
    void Speak()
    {
    cout << "Dog barks" << endl;
    }
};

int main()
{
    Mammal *pDog = new Dog;
    pDog->Move();
    pDog->Speak();
    Dog *pDog2 = new Dog;
    pDog2->Move();
    pDog2->Speak();
    return 0;
}