#include <iostream>

using namespace std;

class sportsperson
{
protected:
    float salary;
    int games;
public:
   virtual void initialise() = 0;
   virtual void calculate_salary()=0;
};

class footballer : public sportsperson
{
protected:
    string club;
    int goals;
    int assists;
    float field_time;  
    
public: 
    footballer()
    {cout<<"footballer default constructor"<<endl;
        
    }
    
    void initialise()
    {
        sportsperson::salary = 5.7;
        sportsperson::games = 34; 
        club = "Manchester";
        goals = 23;
        assists = 90;
        field_time = 1700;
        
    }
    void calculate_salary()
    {
        
        if (club == "Manchester")
        sportsperson::salary =  4.3;
        
        
        if (club == "Tottenham")
        sportsperson::salary = 2.3;
        
        
        cout<<"Footballer Salary for "<<club<<" is "<<sportsperson::salary<<endl;
        
    }
    
    
};


class cricketer: public sportsperson
{
protected:
    string team;
public:

    cricketer()
    {cout<<"cricketer default constructor"<<endl;
        
    }
    
    virtual void Strike_Rate()=0; 
    
};



class batsman: public cricketer
{
protected:
    int innings, not_outs, aggregate_runs, highest_score;
    int balls_faced;
    
public: 
    
    void initialise()
    {
        sportsperson::salary = 2.7;
        sportsperson::games = 10; 
        cricketer:: team = "Pakistan";
        innings = 6;
        not_outs = 2;
        aggregate_runs = 700;
        highest_score= 90;
        balls_faced = 120;
        
    }
    
    void Strike_Rate()
    {
       float temp = ((float)balls_faced/(float) aggregate_runs) * 100;
       cout<<"Strike Rate is "<<temp<<endl ;
        
        
    }
    
    void calculate_salary()
    {
        
        if (team == "Pakistan")
        sportsperson::salary = 2.4 ;
        
        if (team == "England")
        sportsperson::salary = 5.4 ;
        
        cout<<"Batsman Salary for "<<cricketer::team<< " is "<<sportsperson::salary<<endl;
        
    }
    
    
    batsman ()
    {cout<<"Batsman default constructor"<<endl;
        
    }
    
};


class bowler: public cricketer
{
protected:
    int overs, runs_conceded, wickets; 
    string career_best;

    
public:
    void initialise()
    {
        sportsperson::salary = 4;
        sportsperson::games = 120; 
        cricketer:: team = "England";
        overs = 60;
        runs_conceded = 500;
        wickets = 45;
        career_best = "4/87";
        
    }
    void Strike_Rate()
    {
        cout<<"Strike Rate is "<< (overs * 6/wickets * 100) <<endl ;
        
    }
    
    bowler ()
    {cout<<"Bowler default constructor"<<endl;
        
    }
    
    void calculate_salary()
    {
        
        if (team == "Pakistan")
        sportsperson::salary = 1 ;
        
        if (team == "England")
        sportsperson::salary = 1.4 ;
        
        cout<<"Bowler Salary for "<<cricketer::team << " is "<<sportsperson::salary<<endl;
        
    }
    
    

    
};


int main()
{
 
   int choice;
   cout<<"Number of players?";
   cin>> choice;
   sportsperson** players;
   players = new sportsperson*[choice];
   string type;
   cin.clear();
   cin.ignore();
   
   for (int i=0; i<choice; i++)
   { 
       cout<<endl<<"Player Type"<<endl;
       getline(cin,type);
       
       if(type=="cricketer")
        {
            cin.clear();
            cout<<"Batsman or Bowler?"<<endl;
            getline(cin,type);
            if (type == "Bowler")
            {
                players[i] = new bowler();
                cout<<"New Bowler created"<<endl;
                
            }
        
            if (type == "Batsman")
            {   
                players[i] = new batsman();
                cout<<"New Batsman created"<<endl;
               
            }
            
 
        }
        
      if (type == "footballer")
        {
         players[i] = new footballer();
        }
    
      
    players[i]->initialise();
    players[i]->calculate_salary();   

   }
   

cricketer* cricketers[2];
 
cricketers[0] = new bowler();
cricketers[0]->initialise();
cricketers[0]->Strike_Rate();

cricketers[1] = new batsman();
cricketers[1]->initialise();
cricketers[1]->Strike_Rate();




return 0;

}
