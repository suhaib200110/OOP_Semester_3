/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

class vecter;

// friend function with 2 classes

class matrix
{
  int matrex[3][3];
  public:
  matrix()
  {
      cout<<"Fill in the matrix row by row: "<<endl;
      for (int i =0; i<3 ; i++)
        {   for (int j=0; j<3; j++)
            {   
                cout<<"Enter number: \t";
                cin>> matrex[i][j];
            }
        }
  }
  
  void display ()
  {
      cout<<"Matrix: "<<endl;
      for (int i =0; i<3 ; i++)
        {   for (int j=0; j<3; j++)
            {   
                cout<< matrex[i][j]<<"\t";
            }
            cout<<endl;
        }
      
      
  }
  
  friend void multiply (matrix, vecter ) ;
  
};


class vecter 
{
    int vector [3];
    
    public:
    
    vecter ()
    {
        cout<<"Enter vector array \t"<<endl;
        for (int i = 0; i<3; i++)
        cin>> vector[i];
        
    }
    
    void display()
    {
        cout<<"Vector: "<<endl;
        for (int i = 0; i<3; i++)
        cout<< vector[i] <<"\n";
        
        
    }
  friend void multiply (matrix, vecter ) ; 
};

void multiply (matrix M, vecter V)
{
    cout<<"\nMatrix x Vector \n";
    int solution[3];
    //initilization.
    for(int i=0;i<3;i++)
    {
        solution[i]=0;
    }
    //multiplication.
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

             solution[i]+=( M.matrex[i][j]*V.vector[j]);
        }

    }
   
    cout<<endl;
    
        for(int i=0;i<3;i++)
        {
            cout<<"|"<<solution[i]<<"|"<<endl;
        }


    
}


int main()
{
  matrix M1; 
  
  
  vecter V1;
  M1.display();
  V1.display();
  
  multiply (M1, V1 );
  

    return 0;
}
