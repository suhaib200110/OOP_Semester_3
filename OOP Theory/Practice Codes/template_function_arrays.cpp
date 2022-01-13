#include <iostream>

using namespace std;

template<class VariableType>
void swap_values(VariableType& variable1,  VariableType& variable2)
{
 VariableType temp;
 temp = variable1;
 variable1 = variable2;
 variable2 = temp;
}

template<class BaseType>
int index_of_smallest(const BaseType a[], int start_index, int number_used)
{
 BaseType min = a[start_index];
 int index_of_min = start_index;
 
 for (int index = start_index + 1; index < number_used; index++)
 {
    if (a[index] < min)
    {
    min = a[index];
    index_of_min = index;
    //min is the smallest of a[start_index] through a[index]
    }
 }
 return index_of_min;
}


template<class BaseType>
void sort(BaseType a[], int number_used)
{ int index_of_next_smallest;
  for(int index = 0; index < number_used - 1; index++)
 {//Place the correct value in a[index]:
    index_of_next_smallest =  index_of_smallest(a, index, number_used);
    swap_values(a[index], a[index_of_next_smallest]);
 
 //a[0] <= a[1] <=...<= a[index] are the smallest of the original array
 //elements. The rest of the elements are in the remaining positions.
 }
 
}
template<typename printType>
void print(printType arr[],int len)
{
 for (int i = 0; i < len; i++)
 cout << arr[i] << " ";
 cout << endl;   
}

int main()
{

 double b[5] = {5.5, 4.4, 1.1, 3.3, 2.2};
 cout << "Unsorted doubles:\n";
 print<double>(b,5);
 sort(b, 5);
 cout << "In sorted order the doubles are:\n";
 print(b,5);
 
 char c[7] = {'G', 'E', 'N', 'E', 'R', 'I', 'C'};
 cout << "In unsorted order the characters are:\n";
 print(c,7);
 sort(c, 7);
 cout << "In sorted order the characters are:\n";
 print(c,7);	
    
    
}
