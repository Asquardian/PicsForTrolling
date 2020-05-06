#include "head.h"

class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;

    int Correct_Answer;
    int Question_Score;

public:
    void setValues(string, string, string, string, string, int, int);
    void askQuestion();
};
