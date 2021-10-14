#include <iostream>
using namespace std;

class person2;

class person1
{
    int distance;
    public:
    person1(int dis)
    {
        distance=dis;
    }
    friend void total_distance(person1,person2);
};

class person2
{
    int distance;
    public:
    person2(int dis)
    {
        distance=dis;
    }
    friend void total_distance(person1,person2);
};

void total_distance(person1 p1,person2 p2)
{
    cout<<"\n\nThe distance travelled by person 1: "<<p1.distance<<endl;
    cout<<"The distance travelled by person 2: "<<p2.distance<<endl;
    cout<<"\nThe total distance travelled by both: "<<p1.distance+p2.distance<<"\n\n\n";
}

int main()
{
    person1 p1(23);
    person2 p2(34);
    total_distance(p1,p2);
}