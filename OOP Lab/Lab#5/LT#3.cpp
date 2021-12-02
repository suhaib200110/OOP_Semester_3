#include <iostream>
using namespace std;

class Book
{
    int Days,Pages;
    public:
    Book()
    {
        Days=32;
        Pages=12;
    }
    Book(int d,int p)
    {
        Days=d;
        Pages=p;
    }
    void display()
    {
        cout<<"\n\nDays: "<<Days;
        cout<<"\nPages: "<<Pages;
    }
    Book operator + (Book b)
    {
        Book temp;
        temp.Pages = Pages + b.Pages;
        return temp;
    }
    void operator == (Book b)
    {
        if (Pages==b.Pages)
        {
            cout<<"\nPages of both books are equal"<<endl;
        }
        else
        {
            cout<<"\nThe pages of both book are not equal"<<endl;
        }
    }
    void operator > (Book b)
    {
        if (Pages>b.Pages)
        {
            cout<<"\nThe pages of Book # 1 are greater than the pages of Book # 2"<<endl;
        }
        else
        {
            cout<<"\nThe pages of Book # 1 are less than the pages of Book # 2"<<endl;
        }
    }
    friend void total(Book b);
};
void total(Book temp)
{
    cout<<"\n\nThe total pages of both books: "<<temp.Pages<<endl;
}

int main()
{
    Book b1,b2(44,66),total_pages;
    b1.display();
    b2.display();
    total_pages = b1+b2;
    total(total_pages);
    cout<<"\n\n";
    b1 > b2;
    cout<<"\n";
    b1==b2;
    cout<<"\n\n\n";
}