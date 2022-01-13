#include <iostream>
using namespace std;

template < typename T>

T findMin(T arr[], int n)
{
    T min;
    min = arr[0];
    
    for (int i =0; i<n;i++)
    {
        if(min>arr[i])
        min = arr[i];
    }
    return min;
}

template < typename T1, typename T2 >
T2 product( T1 x, T2 y)
{
    return (T2)(x * y);
}


int main()
{
	int arr1[3] = {3,4,10};
	float arr2[4] = {11.5,4.5,10.8,55.6};
	cout<<"Minimum integer in integer array is "<<findMin(arr1,3 )<<endl;
	cout<<"Minimum float in float array is "<<findMin(arr2,  4 )<<endl;
	
	cout << product(3, 4.7) << endl;
	cout << product(4, 5.6) << endl;
	
	return 0;
}
