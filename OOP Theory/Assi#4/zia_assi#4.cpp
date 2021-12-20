#include <iostream>
using namespace std;

class Generator{
    public:
    virtual int marks_calculater() 
    { 

    }
    virtual void pose_question() 
    {

    }
    virtual void generator()
    {
        
    }
    virtual int TM() 
    {

    }
    };


class OneWord: public Generator{
    string student_answer;
    string teacher_answer;
    string question;
    public:
    void generator(){
        cout<<"\nOne Word question:";
        getline(cin,question);
        cout<<"\nCorrect answer: ";
        getline(cin,teacher_answer);
    }
    void pose_question(){
        cout<<"\n\n\n"<<question<<endl;
        cin.ignore();
        getline(cin,student_answer);
    }
    int marks_calculater(){
        int marks=0; 
        if (student_answer==teacher_answer)
        {
            marks=8;
            return marks;
        }
        else
        {
            marks=0;
            return marks;
        }
    }
    int TM()
    {
        int tot_marks=8;
        return tot_marks;
    }
};

class MCQs : public Generator{
    string question;
    char teacher_answer;
    char student_ans;
    string opt_a,opt_b,opt_c,opt_d;
    public:
    void generator()
    {
        cout<<"\n\nMCQ: "<<endl;
        cout<<"Please enter the question: ";
        getline(cin,question);
        cout<<"\nPlease provide 3 options: ";
        cout<<"\nOption a: ";
        getline(cin,opt_a);
        cout<<"\nOption b: ";
        getline(cin,opt_b);
        cout<<"\nOption c: ";
        getline(cin,opt_c);
        cout<<"\nOption d: ";
        getline(cin,opt_d);
        cout<<"\nPlease provide the correct option: ";
        cin>>teacher_answer;
    }
    void pose_question()
    {
        cout<<"\nSelect  a , b , c , d\n\n";
        cout<<"\n\n"<<question<<endl;
        cout<<"\na: "<<opt_a<<endl;
        cout<<"\nb: "<<opt_b<<endl;
        cout<<"\nc: "<<opt_c<<endl;
        cout<<"\nd: "<<opt_d<<endl;
        cin>>student_ans;
    }
    int marks_calculater()
    {
        int marks=0;
        if (student_ans==teacher_answer)
        {
            marks=4;
            return marks;
        }
        else
        {
            marks=0;
            return marks;
        }
    }
    int TM()
    {
        int tot_marks=3;
        return tot_marks;
    }    
};

int main(){
    Generator **double_pointer;
    int number=0;
    cout<<"\nHow many questions do you want to create: ";
    cin>>number;

    double_pointer = new Generator *[number];

    for (int i=0;i<number;i++)
    {
        cout<<"\nEnter 1 for MCQ and 2 for One Word: "<<endl;
        int o=0;
        cin>>o;
        cin.ignore();
        if (o==1)
        {
            double_pointer[i] = new MCQs;
        }
        if (o==2)
        {
            double_pointer[i]= new OneWord;
        }
        double_pointer[i]->generator();        
    }
    cout<<"\n\nQuiz\n"<<endl;
    for (int i=0;i<number;i++)
    {
        double_pointer[i]->pose_question();
    }
    cout<<"\n\n\n";
    int result=0;
    int total_marks=0;
    for (int i=0;i<number;i++)
    {
        result=result+double_pointer[i]->marks_calculater();
    }
    for (int i = 0; i < number; i++)
    {
        total_marks = total_marks + double_pointer[i]->TM();
    }
    cout<<"\nTotal marks: "<<total_marks<<endl;
    cout<<"\nResult: "<<result<<endl;
    
}
