#include <iostream> 
#include <conio.h>  
#include <string> 
#include<string.h>
using namespace std; 
class copy_concatenate { 
    char* s1 = NULL; 
public: 
copy_concatenate(const char*); 
copy_concatenate(const copy_concatenate& t); 
void concatenate(const char *); 
void display(); 
~copy_concatenate(); 
}; 
copy_concatenate::copy_concatenate(const char* c) { s1 = new char[strlen(c)]; 
strcpy(s1, c); 
} 
copy_concatenate::copy_concatenate(const copy_concatenate& t) { s1 = t.s1; 
} 
void copy_concatenate::concatenate(const char* p) { int length = strlen(s1); 
int destinationLength = strlen(p); 
int position=0; 
char* temp = new char[length+destinationLength ]; for (int i = 0; i < length; i++)
{ 
temp[i] = s1[i]; 
} 