#include <iostream>
#include <ctime>
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMOve(char *spaces,char computer);
bool checkWinner(char *spaces,char player,char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player= 'X';
    char computer='O';
    bool running = true;

    drawBoard(spaces);

    return 0;
}

void drawBoard(char *spaces){
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  " <<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';

}
void playerMove(char *spaces, char player){

}
void computerMOve(char *spaces,char computer){

}
bool checkWinner(char *spaces,char player,char computer){
    return 0;
}
bool checkTie(char *spaces){
    return 0;
}