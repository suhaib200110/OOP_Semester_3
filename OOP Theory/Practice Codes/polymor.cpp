using namespace std;
#include <iostream>

class Accomodation 
{
        public:
        virtual float income_generated() 
		{}
};

class fivestarHotel : public Accomodation 
{
        private:
            string name;
            float cost_per_day;
            float service_charge;
            int rooms_occupied;
            int sports_subs;  //number of customers availing sports facilities
                
        public:
            fivestarHotel(string n, int rooms, float cost, float tax, int sport)
            {
            sports_subs = sport;
            name = n;    
            rooms_occupied = rooms;
            cost_per_day = cost;
            service_charge = tax ;
            }
                
            float income_generated()
            {
                
            float sum = (rooms_occupied*cost_per_day*7) + service_charge + (sports_subs*60*7);
            cout<<name<< " generated: \t$"<<sum<<endl;
            return sum;
            
            }
       
};

class Room_sharing : public Accomodation
{
        int residents;
        string name;
        float room_cost;
        public:
            Room_sharing(string n, int r, float rc)
            {
            name = n;
            residents = r;
            room_cost=rc;
            }
            
            float income_generated()
            {
            float sum = (residents/4) * room_cost*7;
            cout<<name<< " generated: \t$"<<sum<<endl;
            return sum;
            }
        
};

int main() 
{
        Accomodation* AirStay[4];

        AirStay[0] = new fivestarHotel("Pearl Continental Hotel", 13,4000,100, 5); //format = (name, rooms occupied, cost per room, tax, no of customers using sports facilities)
        AirStay[1] = new fivestarHotel("Serena Hotel", 15,6000,150,6);
        AirStay[2] = new Room_sharing ("Salimar Hostels", 15,70);
        AirStay[3] = new Room_sharing ("Rayan Hostels", 4,40);

        cout << "My income breakdown per week: " <<endl;
        double total_income;
        for (int k=0; k<4; k++) 
        {
            total_income = total_income+ AirStay[k]->income_generated();
        }
        
        cout << "\n\nMy total Income for the week is  $"<<total_income <<endl;
}
