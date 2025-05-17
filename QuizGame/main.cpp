#include <iostream>
int main()
{   int righttimes=0;
    std::string questions[] = {"1. What year was C++ created?: ",
                              "2. Who invented C++?: ",
                              "3. What is the predecessor of C++?: ",
                              "4. Is the Earth flat?"};
    std::string options[][4] ={ {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C.John Carmack", "D.Mark Zuckerb"},
                {"A. C","B. C+","C. C--","D. B++"},
                {"A. yes","B. no","C.sometimes","D.what's Earth?"}};
    std::string answer[4]={"A","B","C","D"};
    std::string choice;
    for (int i= 0;i<sizeof(questions)/sizeof(questions[0]);i++){
        std::cout<<questions[i]<<"\n";
        
        for(int j =0;j<sizeof(options[i])/sizeof(options[i][j]);j++){
            std::cout<<options[i][j]<<"\n";

        }
        std::cout<<"Enter your choice: ";
        std::cin>>choice;
        //std::cout<<"\n";
        if(choice==answer[i]){
            std::cout<<"You are right!"<<"\n";
            righttimes+=1;
        }else{
            std::cout<<"Opps! You are wrong"<<"\n";
            std::cout<<"The right answer is: "<<answer[i]<<"\n";
        }
    }
    std::cout<<"Your grade is: "<<righttimes<<"/"<<sizeof(questions)/sizeof(questions[0])<<"\n";

    return 0;
}