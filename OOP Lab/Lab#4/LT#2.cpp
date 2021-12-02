#include <iostream>
using namespace std;

class Magzine;

class Book
{
    string name;
    int num_of_pages,price;
    public:
    Book(string nm,int n_pages,int pr)
    {
        name=nm;
        num_of_pages=n_pages;
        price=pr;
    }
    friend class Libranian;
    friend void compare(Book,Magzine);
};

class Magzine
{
    string name;
    int num_of_pages,price;
    public:
    Magzine(string nm,int n_pages,int pr)
    {
        name=nm;
        num_of_pages=n_pages;
        price=pr;
    }
    friend class Libranian;
    friend void compare(Book,Magzine);
};

class Libranian
{
    
    int total,price_b,price_m;
    public:
    Libranian(Book b,Magzine mag)
    {
        price_b=b.price;
        price_m=mag.price;
    }
    void result()
    {
        cout<<"\n\nThe price of book: "<<price_b<<endl;
        cout<<"\nThe price of book: "<<price_b<<endl;
        cout<<"\nThe total cost: "<<price_b + price_m<<endl;
    }
    

};

void compare(Book b, Magzine m)
{
    if (b.price>m.price)
    {
        cout<<"\nThe price of book is greater then the price of magzine."<<endl;
    }
    else
    {
        cout<<"\nThe price of book is less then the price of magzine."<<endl;
    }
}

int main()
{
    Book b1("Physics",300,500);
    Magzine m1("Reader's Digest",100,150);
    Libranian l1(b1,m1);
    l1.result();
    compare(b1,m1);
}
