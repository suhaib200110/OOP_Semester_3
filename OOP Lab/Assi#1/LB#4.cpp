#include <iostream>
using namespace std;

struct ComplexNumber
{
    int ima_part_1,real_part_1,ima_part_2,real_part_2;
    void input()
    {
        cout<<"\n\nEnter a complex number."<<endl;
        cout<<"Enter the real part of the complex number: ";
        cin>>real_part_1;
        cout<<"\nEnter the imaginary part of the complex number:";
        cin>>ima_part_1;
        cout<<"\nEnter the real part of the second complex number:";
        cin>>real_part_2;
        cout<<"\nEnter the imaginary part of the second complex number:";
        cin>>ima_part_2;
    }

    int first_zero()
    {
        if (real_part_1==0 && ima_part_1==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

    int second_zero()
    {
         if (real_part_2==0 && ima_part_2==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    

    int Greater_then()
    {
        if ((real_part_1>real_part_2)&&(ima_part_1>ima_part_2))
        {
            cout<<"\n\nThe first complex number is greater than the second complex number"<<endl;
        }
        else 
        {
            cout<<"\n\nThe second complex number is greater than the first complex number"<<endl;
        }
    }


    int Add_real()
    {
        return real_part_1+real_part_2;
    }
    int Add_ima()
    {
        return ima_part_1+ima_part_2;
    }
};
int main()
{
    struct ComplexNumber C1;
    C1.input();
    int first_complex=C1.first_zero(),second_complex=C1.second_zero();
    if (first_complex==0)
    {
        cout<<"\nThe second complex number is zero"<<endl;
    }
    else if (second_complex==0) 
    {
        cout<<"\nThe first complex number is zero"<<endl;
    }
    else{
        ;
    }
    C1.Greater_then();
    int ima=0,real=0;
    ima = C1.Add_real();
    real = C1.Add_ima();
    cout<<"\n\nThe sum of both the complex numbers is : "<<real<<" + ("<<ima<<"i)\n\n\n";

}
