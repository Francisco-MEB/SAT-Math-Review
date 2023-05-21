#ifndef TEMPLATES_H
#define TEMPLATES_H

template <typename T>
T getUserAnswer(int questionNumber, T answer)
{
    if (sizeof(answer) == sizeof(char))
    {
        char userAnswer{};
        do
        {
            troubleshoot();
            std::cin >> userAnswer;
            userAnswer = toupper(userAnswer);
        } while (std::cin.fail() || (userAnswer != 'A' && userAnswer != 'B' && userAnswer != 'C' && userAnswer != 'D'));
        
        return userAnswer;
    }
    else if (sizeof(answer) == sizeof(double))
    {
        double userAnswer{};
        do
        {
            troubleshoot();
            std::cin >> userAnswer;
        } while (std::cin.fail());
        
        return userAnswer;
    }
    else
    {
        std::cerr << "Could not load question." << '\n';
        
        return 1;
    }
}


template <typename T>
bool checkIfCorrect(T userAnswer, T answer)
{
    if (userAnswer == answer)
    {
        return true;
    }
    
    return false;
}

#endif
