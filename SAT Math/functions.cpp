#include <array>
#include <iostream>
#include <string_view>

#include "Header.h"


void troubleshoot()
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}


void printScore(int numberOfCorrects)
{
    std::cout << "You answered " << numberOfCorrects << "/" << QuestionBank::numberOfQuestions << " questions correct." << '\n';
}

