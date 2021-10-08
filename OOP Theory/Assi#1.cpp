#include <iostream>
using namespace std;


class Salesperson
{
    string name,date_of_joining;
    char type;
    float comm_1,comm_2;
    int ts_1_six_mon,ts_2_six_mon;
    public:
    Salesperson()
    {
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"\nEnter the level of employee('E','M','T' ): ";
        cin>>type;
        cout<<"\nEnter date of joining: ";
        cin>>date_of_joining;
        cout<<"\nEnter the total number of sales in first six months: ";
        cin>>ts_1_six_mon;
        cout<<"\nEnter the total number of sales in second six months: ";
        cin>>ts_2_six_mon;
        comm_1=0,comm_2=0;
    }
    int Calculate_quaterly_sales_1()
    {
        if (type=='E')
        {
            comm_1=(0.05*ts_1_six_mon);
        }
        else if(type=='M')
        {
            comm_1=(0.1*ts_1_six_mon);
        }
        else if(type=='T')
        {
            comm_1=(0.2*ts_1_six_mon);
        }
        return comm_1;
        }
    int Calculate_quaterly_sales_2()
    {
        if (type=='E')
        {
            comm_2=(0.05*ts_2_six_mon);
        }
        else if(type=='M')
        {
            comm_2=(0.1*ts_2_six_mon);
        }
        else if(type=='T')
        {
            comm_2=(0.2*ts_2_six_mon);
        }
        return comm_2;

    }
    std::string Name()
    {
        return name;
    }
    void display()
    {
        cout<<"\n\nThe commision of the employee for the first 6 months: "<<comm_1<<" rupees."<<endl;
        cout<<"The commision of the employee for the last 6 months: "<<comm_2<<" rupees."<<endl;
    }
   
        
};

void Highest_commision(Salesperson emp[],int size=0)
{
    //Calling display function from Class to display the commision details of all the employees
    /*for (int i=0;i<size;i++)
    {
        cout<<"Details for employee # "<<i+1;
        emp[i].display();     
    }*/
    int max_1=0,max_2,emp_1=0,emp_2=0;


    //For first six months
    for (int i=0;i<size;i++)
    {
        if (emp[i].Calculate_quaterly_sales_1()>max_1 )
        {
            max_1=emp[i].Calculate_quaterly_sales_1();
            emp_1=i+1;
        }
    }
    cout<<"\n\nThe name of the employee who earned the highest commision in the first 6 months:  "<<emp_1;


    //For last six months
    for (int i=0;i<size;i++)
    {
        if (emp[i].Calculate_quaterly_sales_2()>max_2 )
        {
            max_2=emp[i].Calculate_quaterly_sales_2();
            emp_2=i+1;
        
        }
    }
    cout<<"\n\nThe name of the employee who earned the highest commision in the last 6 months:  "<<emp_2<<endl;

}

int main()
{
    Salesperson p1[3];
    Highest_commision(p1,3);

}