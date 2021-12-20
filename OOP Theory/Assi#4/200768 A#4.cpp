#include <iostream>
using namespace std;

class QuizGen
{
public:
    virtual void q_gen() {}
    virtual void pose_q() {}
    virtual int calculate() {}
    virtual int total_marks() {}
};

class OneWord : public QuizGen
{
    string question, correct_ans, student_answer;

public:
    void q_gen()
    {
        cout << "\n\nPlease enter question:";
        getline(cin, question);
        cout << "\n\nPlease provide the correct answer: ";
        getline(cin, correct_ans);
    }
    void pose_q()
    {
        cout << "\n\n#####################" << endl;
        cout << "\n\n"
             << question << endl;
        getline(cin, student_answer);
    }
    int total_marks()
    {
        int tot_marks = 5;
        return tot_marks;
    }
    int calculate()
    {
        int marks = 0;
        if (student_answer == correct_ans)
        {
            marks = 5;
            return marks;
        }
        else
        {
            marks = 0;
            return marks;
        }
    }
};

class MCQs : public QuizGen
{
    string question, correct_ans, student_ans, option_1, option_2, option_3;

public:
    void q_gen()
    {
        cout << "\n\nMCQ: " << endl;
        cout << "\nPleas enter the question: ";
        getline(cin, question);
        cout << "\nPlease provide 3 options: ";
        cout << "\nOption # 1: ";
        getline(cin, option_1);
        cout << "\nOption # 2: ";
        getline(cin, option_2);
        cout << "\nOption # 3: ";
        getline(cin, option_3);
        cout << "\nPlease provide the correct option as '1','2' or '3': ";
        getline(cin, correct_ans);
    }
    void pose_q()
    {
        cout << "\n\n################" << endl;
        cout << "\nSelect the option as '1' , '2' or '3' \n\n";
        cout << "\n\n"
             << question << endl;
        cout << "\n1: " << option_1 << endl;
        cout << "\n2: " << option_2 << endl;
        cout << "\n3: " << option_3 << endl;
        getline(cin, student_ans);
    }
    int total_marks()
    {
        int tot_marks = 1;
        return tot_marks;
    }
    int calculate()
    {
        int marks = 0;
        if (student_ans == correct_ans)
        {
            marks = 1;
            return marks;
        }
        else
        {
            marks = 0;
            return marks;
        }
    }
};

int main()
{
    QuizGen **ptr2;
    int size = 0;
    cout << "\nHow many questions do you want to create: ";
    cin >> size;

    ptr2 = new QuizGen *[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\n\nWhat type of question do you want? ";
        cout << "\nPress '1' for One word and '2' for MCQ " << endl;
        int x = 0;
        cin >> x;
        cin.ignore();
        if (x == 1)
        {
            ptr2[i] = new OneWord;
        }
        if (x == 2)
        {
            ptr2[i] = new MCQs;
        }
        ptr2[i]->q_gen();
    }
    cout << "\n\n\n\t##############Quiz############\n\n\n";
    for (int i = 0; i < size; i++)
    {
        ptr2[i]->pose_q();
    }
    cout << "\n\n\n";
    int result = 0, tm = 0;
    for (int i = 0; i < size; i++)
    {
        tm = tm + ptr2[i]->total_marks();
    }
    for (int i = 0; i < size; i++)
    {
        result = result + ptr2[i]->calculate();
    }
    cout << "\nTotal marks: " << tm << endl;
    cout << "\nThe total marks obtained by the student: " << result << endl;
    float perc = (result * 100) / tm;
    cout << "\nPercentage: " << perc << "%\n"
         << endl;
    if (perc < 40)
    {
        cout << "Status: FAILED\n\n"
             << endl;
    }
    else
    {
        cout << "Status: PASSED\n\n"
             << endl;
    }
}
