#include <iostream>
using namespace std;

class account
{
    string account_id,ammount;
    public:
    void input()
    {
        cin.ignore();
        cout<<"\nEnter account ID: ";
        getline(cin,account_id);
        cout<<"\nEnter ammount: ";
        getline(cin,ammount);
    }

    void display()
    {
        cout<<"\nAccount ID: "<<endl<<"\nAmmount: "<<ammount<<endl;
    }
};

int main()
{
    int num;
    account *ptr[num];
    cout<<"\nEnter number of accounts: ";
    cin>>num;
    for (int i=0;i<num;i++)
    {
        ptr[i] = new account;
        ptr[i]->input();
    }
    cout<<"\n\nThe account data is: "<<endl;
    for (int i=0;i<num;i++)
    {
        ptr[i]->display();
    }
}