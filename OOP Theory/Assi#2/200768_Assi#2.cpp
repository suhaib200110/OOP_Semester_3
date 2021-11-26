/*Name : Muhammad Suhaib Salman
  Roll# : 200768
  Class : BEEE-3A
*/
#include <iostream>
using namespace std;
class Currency;
class Conversion_Rate
{
    int rupee,lira_in_rupees,pound_in_rupees;
    Conversion_Rate()                      //Taking exchange rate from the user
    {
        cout<<"\n\nPlease enter the excahnge rate. \nEnter rupees in one pound? ";
        cin>>pound_in_rupees;
        cout<<"\nEnter rupees in one lira: ";
        cin>>lira_in_rupees;
        cout<<"\n\n";
    }
    int pound_to_rupee(int temp_pound)              //function for converting from pound to rupee
    {
        return pound_in_rupees*temp_pound;
    }
    int lira_to_rupee(int temp_lira)                //function for converting from lira to rupees
    {
        return lira_in_rupees*temp_lira;
    }
    friend class Currency;                        
    /*All the private functions and variables of this class 
    will be accessible by the Currency class*/

};
class Currency
{
    int arr[3];
    int pkr,lira,pound;
    Conversion_Rate conv_rate;
    public:

    Currency()            //Taking the currency collected by the user
    {
        cout<<"\nEnter rupees:";
        cin>>pkr;
        cout<<"\nEnter pounds:";
        cin>>pound;
        cout<<"\nEnter lira:";
        cin>>lira;
        cout<<"\n\n";
    }
    
    
    Currency operator + (Currency x)
    {
        Currency temp;                 //Adding 2 objects and then returning an object
        temp.lira=lira+x.lira;
        temp.pkr= pkr+x.pkr;
        temp.pound=pound+x.pound;
        return temp;
    }
    void operator % (int x)
    {
        if (x==3)
        {
            cout<<"\n\nRupees: "<<pkr<<endl;      //Displaying all the 3 currencies stored in the object
            cout<<"Liras: "<<lira<<endl;
            cout<<"Pound: "<<pound<<endl;
        }
    }
    
    void operator[] (string i)
    {
        if (i=="pkr")
        {
            cout<<"\n"<<pkr<<endl;
        }
        else if (i=="gbp")
        {
            cout<<"\n"<<pound<<endl;
        }
        else if (i=="lira")
        {
            cout<<"\n"<<lira<<endl;
        }
    }

};

int main()
{
    Currency C1,C2,C3,C4,Sum;
    Sum = C1+C2+C3+C4;
    Sum % 3;
    C2["pkr"];         
    C1["gbp"];
    return 0;
}