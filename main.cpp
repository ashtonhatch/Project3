/*
CSCI 1300 Fall 2022
Author: Ashton Hatch and Eli Jones
Recitation 305, 30? respectively
Project 3

reference material:
https://www.youtube.com/watch?v=Rub-JsjMhWY&t=362s&ab_channel=DerekBanas
https://www.tutorialspoint.com/cplusplus/cpp_switch_statement.htm case/switch statement
https://www.freecodecamp.org/news/string-to-int-in-c-how-to-convert-a-string-to-an-integer-example/
https://www.w3schools.com/cpp/cpp_exceptions.asp
https://www.asciiart.eu/mythology/dragons     ascii art
https://www.digitalocean.com/community/tutorials/convert-string-to-char-array-c-plus-plus  Convert string to char


*/
#include <iostream>
#include "map.h"
#include "actions.h"
#include <ctime> // seed for random numbers
#include <cstdlib> // random library
/*

#include "combat.h"
#include "merchant_menu.h"
#include "puzzles.h"
#include "movement.h"

*/

using namespace std;



int main() {


    Map map;
    Actions actions;

    //map.resetMap();
    system("clear");
    actions.welcomeMessage();
    system("clear");
    actions.getPlayerName();
    system("clear");
    actions.getPartyNames();
    system("clear");
    srand (time (0)); //seed random generator
    
    map.initializeMap();

    cout << endl << endl << endl << endl;

    map.displayMap(map);


    actions.displayMenu(map);





    return 0;

    
}




