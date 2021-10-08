#include <iostream>
using namespace std;


class Invoice
{
    int price,quantity;
    string part_des,part_num;
    public:
    
    Invoice(int price_func,int quantity_func,string part_des,string part_num)
    {
        if (price<0)             //Parametarized constructor
        {
            price=0;
        }
       
        if (quantity<0)
        { 
            quantity=0;
        }
       
        cout<<"\n\nThe Price is: "<<price_func<<endl;
        cout<<"The Quantity is: "<<quantity_func<<endl;
        cout<<"The part description is: "<<part_des<<endl;
        cout<<"The part number is: "<<part_num<<endl;
        price=price_func;
        quantity=quantity_func;
    }
    Invoice()
    {
        cout<<"\n\nEnter Price:";
        cin>>price;
        cout<<"\nEnter Quantity:";
        cin>>quantity;
        cout<<"\nEnter Part description:";
        cin>>part_des;
        cout<<"\nEnter Part number:";
        cin>>part_num;
        if (price<0)
        {
            price=0;
        }
        if (quantity<0)
        {
            quantity=0;
        }
        cout<<"\n\nThe Price is: "<<price<<endl;
        cout<<"The Quantity is: "<<quantity<<endl;
        cout<<"The part description is: "<<part_des<<endl;
        cout<<"The part number is: "<<part_num<<endl;
    }
 
    int getInvoiceAmount()
    {
        return quantity*price;
    }
    ~Invoice()
    {
        cout<<"\n\nDestructor called\n\n";
    }
};
int main()
{
    cout<<"\n\nEnter the details of hardware "<<endl;
    int price_2=23,quantity_2=60;
    string part_des_2="Silver",part_num_2="00EN700";
    Invoice part_1,part_2(price_2,quantity_2,part_des_2,part_num_2);

    /*Part 1 without arguments 
    and part 2 with arguments*/
    
    int value_1 = part_1.getInvoiceAmount();
    int value_2=part_2.getInvoiceAmount();
    cout<<"\n\nThe invoice amount for part 1 will be: "<<value_1<<endl;
    cout<<"\nThe invoice amount for part 2 will be: "<<value_2<<endl;
    cout<<"\n\n\n";
    return 0;

}