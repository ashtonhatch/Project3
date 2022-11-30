#include "actions.h"
#include <string>
#include "map.h"

using namespace std;

Actions::Actions()
{
    // intiating menu
}



void Actions::welcomeMessage()
{



    cout << endl << endl << endl << endl;
    cout << "     Welcome to the dungeon escape!" << endl << endl << endl;
    displayDragon();
    cout << "     Hit E to enter the dungeon > ";
    getline(cin, selectedAction);
    if(selectedAction == "e" || selectedAction == "E") {

        

    } else {
        system("clear");
        welcomeMessage();
    }
}




void Actions::displayMenu(Map map)
{    
    cout << endl << endl << endl << endl;
    cout << "     " << playerName << ", Please Select One:" << endl << "     1. Move" << endl << "     2. Investigate" << endl << "     3. Pick a Fight" << endl << "     4. Cook and Eat" << endl << "     5. Give up" << endl << endl << endl << endl;
    cout << "     > ";
    getline(cin, selectedAction);
    cout << "     Selected Choice is: " << selectedAction << endl;



    //crashed program if letters are tried to convert to integers
    //int selectedActionInt = stoi(selectedAction); // free code camp

    int selectedActionInt = 0;

    try {
        selectedActionInt = stoi(selectedAction);
    }  catch(...) {
        
        cout << endl << endl << endl << "     Must be a number" << endl << endl;

    }



    cout << "selectedActionInt: " << selectedActionInt << endl;

    switch(selectedActionInt) {     // would not accept string so had to convert to int or char
	    case 1: 
            //cout << "     You selected move. Select A for left, D for right, W for up, and S for down. Select Q to return to main mennu. " << endl;
            cout <<" before calling move direction " << endl;
            map.displayMap(map);

            sendMoveDirection(map);
         	break;
	    case 2:
            cout << "You selected 2" << endl; 
         	break;
  	    case 3:
            cout << "You selected 3" << endl; 
         	break;
	    case 4:
            cout << "You selected 4" << endl; 
         	break;
	    case 5:
            cout << "     Are you sure you want to quit? (y/n) > ";
            getline(cin, selectedAction);
            if(selectedAction == "y") {
                // show score and save scores
                system("clear");
                cout << endl << endl << endl << endl;
                cout << "     Thank you for playing!!" << endl;
                displayDragon();
                cout << "     Please play again." << endl;
                cout << endl << endl << endl << endl;
                


            } else {
                map.displayMap(map);
                displayMenu(map);
            }
    
         	break;
    default : 
        displayMenu(map);
}




}

void Actions::displayDragon() {

    cout << endl << endl << endl << endl;
    //ASCI ART
    cout << "                     \\||/" << endl;
    cout << "                     |  @___oo" << endl;
    cout << "           /\\  /\\   / (__,,,,|" << endl;
    cout << "          ) /^\\) ^\\/ _)" << endl;
    cout << "          )   /^\\/   _)" << endl;
    cout << "          )   _ /  / _)" << endl;
    cout << "      /\\  )/\\/ ||  | )_)" << endl;
    cout << "     <  >      |(,,) )__)" << endl;
    cout << "      ||      /    \\)___)\\" << endl;
    cout << "      | \\____(      )___) )___" << endl;
    cout << "       \\______(_______;;; __;;;" << endl;
    cout << endl << endl << endl << endl;

}




void Actions::sendMoveDirection(Map map){

            //system("clear");
            cout << endl << endl << endl << endl;
            map.displayMap(map);
            cout << "after 1st display map" << endl;
            cout << endl << endl << endl << endl;
            cout << "     Select A for left, D for right, W for up, and S for down." << endl <<"     Select Q stop and return to main menu.    > ";
            getline(cin, moveDirection);
            char charr[moveDirection.length() + 1]; 
            strcpy(charr, moveDirection.c_str());
                        
               if(charr[0] == 'w' || charr[0] == 'a' || charr[0] == 's' || charr[0] == 'd') {
                map.move(charr[0]);
                system("clear");
                map.displayMap(map);

            cout << "after 2 display map" << endl;
                sendMoveDirection(map);

            } else if (charr[0] == 'q') {
                system("clear");
                map.displayMap(map);
                displayMenu(map);

            cout << "after 3 display map" << endl;
                
            } else {
                cout << endl << endl << endl << endl;
                cout << "Must be lowercase w,a,s,d" << endl;
                cout << endl << endl << endl << endl;
                sendMoveDirection(map);
            }

}


void Actions::getPlayerName()
{
    cout << endl << endl << endl << endl;
    cout << "     Please enter your name: " << endl;
    cout << "     > ";
    getline(cin, playerName);
    cout << "     Player name is: " << playerName << endl;
}

void Actions::getPartyNames()
{
    
    for (int pni = 0; pni < 4; pni++) {
        cout << endl << endl << endl << endl;
        cout << "     Enter party # " << pni + 1 << "'s name: ";
        cout << "     > ";
        getline(cin, partyNames[pni]);
    } 
    
}