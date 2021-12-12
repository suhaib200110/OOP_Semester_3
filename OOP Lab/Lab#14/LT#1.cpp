#include <iostream>
using namespace std;

class Shapes
{
    public:
    virtual void input(){};
    virtual void area(){};
    virtual void per_cir(){};
    virtual void volume(){};
};
class two_d:public Shapes
{
    public:
    virtual void input(){};
    virtual void area(){};
    virtual void per_cir(){};
};

class three_d:public Shapes
{
    public:
    virtual void input(){};
    virtual void volume(){};
    virtual void area(){};
};

//2D Shapes
class square:public two_d
{
    float area_square,peri_sqaure,len;
    public:
    void input()
    {
        cout<<"\n\n\t Enter data for square "<<endl;
        cout<<"\nEnter the length of square: ";
        cin>>len;
    }
    void area()
    {
        area_square=len*len;
        cout<<"\nThe area of the square: "<<area_square<<endl;
    }
    void per_cir()
    {
        peri_sqaure=len*4;
        cout<<"\nThe perimeter of square: "<<peri_sqaure<<endl;
    }
};

class circle: public two_d
{
    float radius,circum_cir,area_cir;
    public:
    void input()
    {
        cout<<"\n\n\t Enter data for circle"<<endl;
        cout<<"\nEnter radius of circle: ";
        cin>>radius;
    }
    void area()
    {
        area_cir=3.14*radius*radius;
        cout<<"\nThe area of circle: "<<area_cir<<endl;
    }
    void per_cir()
    {
        circum_cir=4*3.14*radius*radius;
        cout<<"\nThe circumference of circle: "<<circum_cir<<endl;
    }

}; 

//3D Shapes
class sphere:public three_d
{
    float radius,surface_area,volume_cir;
    public:
    void input()
    {
        cout<<"\n\n\t Enter data for sphere \n";
        cout<<"\nEnter the radius of sphere: ";
        cin>>radius;
    }
    void area()
    {
        surface_area=4*3.14*radius*radius;
        cout<<"\nThe surface area of the sphere: "<<surface_area<<endl;
    }
    void volume()
    {
        volume_cir=(4*3.14*radius*radius*radius)/3;
        cout<<"\nThe volume of circle: "<<volume_cir<<endl; 
    }

};

class cube:public three_d
{
    float len,volume_cube,surface_area;
    public:
    void input()
    {
        cout<<"\n\n\t Enter data for cube "<<endl;
        cout<<"\nEnter the lenght of side: ";
        cin>>len;
    }
    void area()
    {
        surface_area=6*len*len;
        cout<<"\nThe surface area of cube: "<<surface_area<<endl;
    }
    void volume()
    {
        volume_cube=len*len*len;
        cout<<"\nThe volume of cube: "<<volume_cube<<endl;
    }
};

int main()
{
    Shapes *ptr[3];
    ptr[0]=new cube;
    ptr[0]->input();
    ptr[0]->area();
    ptr[0]->volume();
    ptr[1] = new sphere();
    ptr[1]->input();
    ptr[1]->area();
    ptr[1]->volume();
    ptr[2] = new circle;
    ptr[2]->input();
    ptr[2]->area();
    ptr[2]->per_cir();         //Calculates circumference of the circle
    ptr[3]= new square;
    ptr[3]->input();
    ptr[3]->area();
    ptr[3]->per_cir();        //Calculates perimeter of square
}