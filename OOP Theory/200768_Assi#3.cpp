#include <iostream>
using namespace std;

class Vehicle
{
    protected:
    int cost,number_people;
    string colour,dimension;
    void input()
    {
        cout<<"\n\nEnter cost: ";
        cin>>cost;
        cout<<"\nEnter number of  people that can travel in the vehicle: ";
        cin>>number_people;
        cout<<"\nEnter dimension: ";
        cin>>dimension;
        cout<<"\nEnter colour: ";
        cin>>colour;
    }
    void display()
    {
        cout<<"\nThe cost is "<<cost<<endl;
        cout<<"\nThe number of people that can travel are "<<number_people<<endl;
        cout<<"\nThe dimension is "<<dimension<<endl;
        cout<<"\nThe color is "<<colour<<endl;
    }
};
///////////////////////////////////////////////////////////////////////////
class Car : public Vehicle
{
    protected: 
    string transmission_type, back_cam_type;
    void input()
    {
        Vehicle::input();
        cout<<"\nEnter transmission type of the vehicle: ";
        cin>>transmission_type;
        cout<<"\nEnter the type of back camera: ";
        cin>>back_cam_type;
    }
    void display()
    {
        Vehicle::display();
        cout<<"\nTransmission type of the vehicle: ";
        cout<<"\nThe type of back camera: "<<endl;
    }
};

class Van : public  Car
{
    string seats,wheeler,van_type;
    public:
    void input()
    {
        Car::input();
        cout<<"\nIs your Van a 4 wheeler or 2 wheeler: ";
        cin>>wheeler;
        cout<<"\nEnter number of seats: ";
        cin>>seats;
        cout<<"\nEnter the type of van: ";
        cin>>van_type;
    }
    void display()
    {
        Car::display();
        cout<<"\nThis van is a "<<wheeler<<endl;
        cout<<"\nThe number of seats in this car are "<<seats<<endl;
        cout<<"\nThe type of the van is "<<van_type<<endl;
    }
};
    class Truck : public Car
    {
        string load,truck_type;
        public:
        void input()
        {
            Car::input();
            cout<<"\nEnter maximum load capacity of the truck in kilos: ";
            cin>>load;
            cout<<"\nEnter the truck type: ";
            cin>>truck_type;
        }
        void display()
        {
            cout<<"\nThe details of the truck are: "<<endl; 
            Car::display();
            cout<<"\nThe maximum capacity of the truck is "<<load<<" kg"<<endl;
            cout<<"The type of truck is "<<truck_type<<endl;
        }
    };
    /////////////////////////////////////////////////////////////////////////////

    class Boat: public Vehicle
    {
        protected:
        string beam,air_draft,complement;
        void input()
        {
            Vehicle::input();
            cout<<"\nEnter beam: ";
            cin>>beam;
            cout<<"\nEnter air draft: ";
            cin>>air_draft;
            cout<<"\nEnter the maximum number of people that are required to operate the boat: ";
            cin>>complement;
        }
        /*
        Beam – The width of the widest point of the boat
        Draft – The distance between the keel of the boat and the waterline; indicates the minimum depth of water the vessel needs to float
        Air draft – The distance between the ship's waterline and the highest point of the boat; indicates the distance the vessel can safely pass under
        Complement – The full number of people necessary to operate a ship, not counting any passengers
        */
        void display()
        {
            Vehicle::display();
            cout<<"\nThe beam of the boat is "<<beam<<endl;
            cout<<"The air draft of the boat is "<<air_draft<<endl;
            cout<<"The complement of the boat is "<<complement<<endl;

        }
    
    };
    class Sailing_boat
    {
        
        void input()
        {

        }
    };

