#include <iostream>
using namespace std;

class location
{
    int X,Y;
    public:
    void input()
    {
        cout<<"Please enter the x-coordinate: ";
        cin>>X;
        cout<<"Please enter the y-cordinate: ";
        cin>>Y;
    }
    void display()
    {
        cout<<"The x-coordinate: "<<X<<endl;
        cout<<"The y-coordinate: "<<Y<<endl;
    }
};

class house
{
    string owner_name,num_room;
    public:
    void input()
    {
        cout<<"\nPlease enter the owner name: ";
        cin>>owner_name;
        cout<<"\nPlease enter the number of rooms: ";
        cin>>num_room;
    }
    void display()
    {
        cout<<"The owner name is "<<owner_name<<endl;
        cout<<"The number of rooms are "<<num_room<<endl;
    }
};
class society
{
    int num_houses;
    location l;
    house h;
    public:
    void input()
    {
        cout<<"\nPlease enter the number of houses: ";
        cin>>num_houses;
        l.input();
        h.input();
    }
    void output()
    {
        cout<<"\nThe number of houses in the society are "<<num_houses<<endl;
        l.display();
        h.display();
    }
};

int main()
{
    society s;
    cout<<"\n\n\n";
    s.input();
    s.output();
    cout<<"n\n\n";
    return 0;
}