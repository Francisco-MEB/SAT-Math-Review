#ifndef HEADER_H
#define HEADER_H

struct AnswerType
{
    char multipleChoice{};
    double studentProduced{};
};

namespace Questions
{
    inline constexpr std::string_view question1{"x^2 + 8x + 8 has the solutions r and s where r<s,\nand x^2 + 4x + 2 has the solutions u and t where u<t.\nx^2 + 10x + c has the solutions r+t and u+s.\nWhat is the value of c?\n"};
    inline constexpr std::string_view question2{"A rectangle, with its length being 2.5 times its width, is evenly split into 85 plots.\nThe rectangle's length can be expressed as xSqrt(A) [A is total area].\nWhat is the value of x? Round your answer to the nearest tenth.\n"};
    inline constexpr std::string_view question3{"Which of the following has x + 2b as a factor, where b is a positive integer?\nA. 3x^2 + 7x + 14b\nB. 3x^2 + 28x + 14b\nC. 3x^2 + 42x + 14b\nD. 3x^2 + 49x + 14b\n"};
    inline constexpr std::string_view question4{"ax^2 + 182x + c = 0\nWhat is the maximum value of ac if (pq + x) is one factor?\n"};
}

namespace Answers
{
    inline constexpr double answer1{34.0};
    inline constexpr double answer2{1.6};
    inline constexpr char answer3{'D'};
    inline constexpr double answer4{8281.0};
}

namespace QuestionBank
{
    inline constexpr int numberOfQuestions{4};
    inline constexpr int storageForQuestionAndAnswer{2};
}

// functions

void troubleshoot();
void printScore(int numberOfCorrects);

#endif

