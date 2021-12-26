#include <iostream>
using namespace std;

class Account
{
    protected:
    double account_balance;
    string account_no, customer_name;
    public:
    Account()
    {
        cout<<"\nEnter customer's name: ";
        getline(cin,customer_name);
        cout<<"\nEnter the account number: ";
        getline(cin,account_no);
        cout<<"\nEnter account balance; ";
        cin>>account_balance;
        if (account_balance==0.0||account_balance>0.0)
         ;  //continues without doing anything 
        else 
        {
            account_balance=0.0;
            cout<<"\nInvalid balance."<<endl;
        }
    }
    void credit()
    {
        int bal=0;
        cout<<"\nEnter the balalnce to be added: ";
        cin>>bal;
        account_balance = account_balance + bal;
    }
    void debit()
    {
        int debit=0;
        cout<<"\nEnter the amount of debit: ";
        while(1)
        {
            cin>>debit;
            account_balance=account_balance-debit;
            if (account_balance==0.0||account_balance>0.0)
            break;
            else
            cout<<"\nDebit amount exceeded account balance."<<endl;
        }
    }
    double getBalance()
    {
        return account_balance;
    }
    string getAccountNo()
    {
        return account_no;
    }


};

class Credit_acc:public Account
{
    int pin_num;
    Credit_acc():Account()
    {
        cout<<"\nEnter pin number: ";
        cin>>pin_num;
    }
    void reset_pin()
    {
        pin_num=0;
    }

};

class Checking_acc: public Account
{};