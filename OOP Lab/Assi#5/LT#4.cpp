#include <iostream>
#define DECLDIREXP __declspec(dllexport) 
using namespace std;

class DECLDIREXP word
{
    string name;
    public:
    word()
    {
    }

};