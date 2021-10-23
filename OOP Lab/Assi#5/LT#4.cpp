#include <iostream>
using namespace std;

class word
{
    string random_string;
    public:
    word()
    {
        random_string = "Muhammad Suhaib Salman";
    }
    word (string name)
    {
        random_string = name;
    }
    void display()
    {
        cout<<"\n\nThe string is: "<<random_string<<endl;
    }
    word operator + (word x)
    {
        word temp;
        temp.random_string = random_string + x.random_string;
        return temp;
    } 
    void operator == (word x)
    {
        if (random_string.length()==x.random_string.length())
        {
            cout<<"\n\nLength is equal"<<endl;
        }
        else
        {
            cout<<"\n\nNot equal"<<endl;
        }
    }

    void operator = (word x)
    {
        random_string = x.random_string;
    }
};

int main()
{
    word O1,O2(" Ali"),O3;
    O3 = O1+O2;
    O1.display();
    O2.display();
    O3.display();     //Sum of O1 and O2
    O1==O2;
    O1=O2;
    O1.display();
    return 0;
}