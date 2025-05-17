#include <iostream>
int main()
{
    int righttimes = 0;
    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?"};
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C.John Carmack", "D.Mark Zuckerb"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C.sometimes", "D.what's Earth?"}};
    char answerkey[] = {'C', 'B', 'A', 'B'};
    char choice;
    for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
    {
        std::cout << "********************************\n";
        std::cout << questions[i] << "\n";
        std::cout << "********************************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][j]); j++)
        {
            std::cout << options[i][j] << "\n";
        }
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        choice = toupper(choice);
        // std::cout<<"\n";
        if (choice == answerkey[i])
        {
            std::cout << "You are right!" << "\n";
            righttimes++;
        }
        else
        {
            std::cout << "Opps! You are wrong" << "\n";
            std::cout << "The right answer is: " << answerkey[i] << "\n";
        }
    }
    std::cout<<"*************************\n";
    std::cout<<"*       RESULT          *\n";
    std::cout<<"*************************\n";
    std::cout<<"CORRECT GUESSES: "<<righttimes<<"\n";
    std::cout<<"# of QUESTIONS: "<<sizeof(questions)<<"\n";
    std::cout << "Your score is: " << righttimes << "/" << sizeof(questions) / sizeof(questions[0]) << "\n";
    std::cout << "Your score is: " << righttimes /double((sizeof(questions) / sizeof(questions[0])))*100 << "%\n";

    return 0;
}