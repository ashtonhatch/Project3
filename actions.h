#ifndef ACTIONS_H
#define ACTIONS_H


#include <iostream>


using namespace std;




class Actions
{
private:
    string selectedAction;
    string playerName;
    string partyNames[5];
    string moveDirection;
    
public:
    Actions();
    void welcomeMessage();
    void displayMenu(Map map);
    void getPlayerName();
    void getPartyNames();
    void sendMoveDirection(Map map);
    void displayDragon();
    
};




#endif