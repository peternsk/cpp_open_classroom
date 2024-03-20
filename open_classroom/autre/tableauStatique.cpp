// type nom[taille];

#include <iostream>
#include <string>

int main(void)
{
    unsigned int idx(0);
    int playerPos[10];
    std::string playersName[4];

    playersName[0] = "player1";
    playersName[1] = "player2";
    playersName[2] = "player3";
    playersName[3] = "player4";

    while(idx < 10)
    {
        playerPos[idx] = idx;
        std::cout << "player's pos : " << playerPos[idx] << std::endl;
        idx++;
    }
    idx = 0;
    while(idx < 4)
    {
        std::cout << "player's name : " << playersName[idx] << std::endl;
        idx++;
    }
}