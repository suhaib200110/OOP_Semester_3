#include <iostream>
using namespace std;

class Assessment
{
    string st_name, topic, CLO,date;
    protected:
    int total_marks;
    float scored_marks;
    void set_data()
   {
     cout<<"Enter today's date (format dd-mm-yy) \t";
     getline(cin, date);
     cin.ignore();  cin.clear();
     cout<<"Enter Student Name: \t"; 
     getline(cin, st_name);
     cin.ignore();  cin.clear();
     cout<<"Enter Assessment Topic: \t"; 
     getline(cin, topic);
     cin.ignore();  cin.clear();
     cout<<"Enter Assessment CLO: \t"; 
     getline(cin, CLO);
     cout<<"Enter total marks\t"; 
     cin>>total_marks;
     cout<<"Enter scored marks\t"; 
     cin>>scored_marks;
       
   }
    
};


class Quiz : public Assessment
{
    int number;
    public:
    Quiz() {}
    
    void set_data()
    {   Assessment:: set_data();
        cout<<"Which quiz of the semester is this?\t";
        cin>>number;
        
    }

};

class Exam : public Assessment
{
    string type;
    float weightage, scored_weightage;
    
    public:
    Exam (){weightage = 0; }
    void set_data()
    {
    Assessment::set_data();
    cin.ignore();cin.clear();
    cout<<"Enter Exam type: (Mid or Final)\t";
    getline(cin,type);
    set_weightage();
    }
    
    void set_weightage()
    {
        if (type=="Mid")
        weightage=25;
        else
            if (type=="Final")
            weightage=45;
            else
            {cout<<"\nIncorrect Exam type"; return;  }
        
        calculate_weightage();
    }

    void calculate_weightage()
    {
	scored_weightage = (scored_marks/total_marks)*weightage;
	cout<<"Exam Scored weightage out of "<<weightage<<" is "<<scored_weightage<<endl;
    }
    
};


class Lab : public Assessment
{
    string experiment_title;
    int group_number;
    public: 
    void set_data()
    {
        Assessment:: set_data();
        cin.ignore();   cin.clear();
        cout<<"Enter experiment title\t";
        cin.ignore();   cin.clear();
        getline(cin, experiment_title);
        cout<<"Enter Group number \t";
        cin>>group_number;
    }
    
    
    
};

class Viva : public Lab
{
  int duration;
  public:
  void set_data()
  {
      Lab:: set_data();
      cout<<"\nEnter Duration\t"; cin>>duration;
  }
    
};

class Report: public Lab
{
    char copied;
    public:
    
    void set_data()
    {
        Lab:: set_data();
        cin.clear();
        cout<<"Was the lab report copied?\t";
        cin>>copied;
        
        if(copied=='y' || copied=='Y')
        {
         scored_marks -= 5;   
        }
        
        if (scored_marks<0)
        {
            scored_marks = 0;
        }
    }
    
    
};

int main()
{
    Exam e1;
    e1.set_data();
     Report sec_A[3];
     for (int i=0; i<3; i++)
     {
         sec_A[i].set_data();
     }

    return 0;
}
