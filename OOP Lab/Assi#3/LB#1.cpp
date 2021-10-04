#include <iostream>
using namespace std;

class SavingAccount
{
    float saved_balance,annual_interest,monthly_interest;
    public:
    SavingAccount()
    {
        cout<<"\n\nEnter your current balance:"<<endl;
        cin>>saved_balance;
        cout<<"\nEnter the annual interest rate:"<<endl;
        cin>>annual_interest;
    }
    
    void Monthly_Interest()
    {
        monthly_interest = (saved_balance*annual_interest)/12;
        cout<<"\n\nThe monthly interest is: "<<monthly_interest<<endl;
    }
    void Add_interest()
    {
        saved_balance = saved_balance+monthly_interest;
        cout<<"\n\nThe balance after adding interest will be: "<<saved_balance;
    }
    ~SavingAccount()
    {
        cout<<"\n\nDestructor called\n\n";
    }


};
int main()
{
    SavingAccount person1;
    person1.Monthly_Interest();
    person1.Add_interest();
    cout<<"\n\n\n";
    return 0;
}