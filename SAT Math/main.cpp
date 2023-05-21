#include <array>
#include <iostream>
#include <string_view>

#include "Header.h"
#include "Templates.h"


int main()
{
    
    std::array<std::string_view, QuestionBank::numberOfQuestions> questions{
        Questions::question1,
        Questions::question2,
        Questions::question3,
        Questions::question4
    };
    
    // indices correspond with 'questions' array
    std::array<AnswerType, QuestionBank::numberOfQuestions> answers{NULL};
    answers[0].studentProduced = Answers::answer1;
    answers[1].studentProduced = Answers::answer2;
    answers[2].multipleChoice = Answers::answer3;
    answers[3].studentProduced = Answers::answer4;
    
    // each loop is a run through a question
    int corrects{};
    for (int i = 0; i < QuestionBank::numberOfQuestions; ++i)
    {
        std::cout << "QUESTION #" << i + 1 << '\n' << questions[i];
        if (answers[i].multipleChoice)
        {
            char userAnswer{getUserAnswer<char>(i + 1, answers[i].multipleChoice)};
            bool isCorrect{checkIfCorrect<char>(userAnswer, answers[i].multipleChoice)};
            if (isCorrect)
            {
                corrects++;
            }
        }
        else if (answers[i].studentProduced)
        {
            double userAnswer{getUserAnswer<double>(i + 1, answers[i].studentProduced)};
            bool isCorrect{checkIfCorrect<double>(userAnswer, answers[i].studentProduced)};
            if (isCorrect)
            {
                corrects++;
            }
        }
        else
        {
            std::cerr << "Could not load question." << '\n';
            return 1;
        }
        std::cout << '\n';
    }
    
    printScore(corrects);
    
    return 0;
}

