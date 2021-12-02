#include <iostream>
using namespace std;

class player
{
    string name,age;
    public:
    void input()
    {
        cout<<"\nPlease enter name of the player: ";
        cin>>name;
        cout<<"\nPlease enter age of the player: ";
        cin>>age;
    }
    void display()
    {
        cout<<"The name of the player : "<<name<<endl;
        cout<<"The age of the player : "<<age<<endl;
    }
};

class timetable 
{
    string train_hours,sleep_hours;
    public:
    void input()
    {
        cout<<"Please enter tarining hours: ";
        cin>>train_hours;
        cout<<"Please enter sleeping hours: ";
        cin>>sleep_hours;
    }
    void display()
    {
        cout<<"The number training hours : "<<train_hours<<endl;
        cout<<"The number of sleeping hours : "<<sleep_hours<<endl;
    }
};

class team
{
    string num_players;
    player p;
    timetable t;
    public:
    void input()
    {
        cout<<"Please enter the number of players: ";
        cin>>num_players;
        t.input();
        p.input();
    }
    void display()
    {
        cout<<"The number of players : "<<num_players<<endl;
        t.display();
        p.display();
    }

};

int main()
{
    team t;
    t.input();
    cout<<"\n\n\n";
    t.display();
    cout<<"\n\n\n";
    return 0;
}