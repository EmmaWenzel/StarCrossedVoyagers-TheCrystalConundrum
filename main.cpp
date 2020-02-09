#include <iostream>
#include "Game.h"
#include <stdlib.h>
#include <iostream>

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"
using namespace std;

int main()
{
    cout << "IN THE NOT SO DISTANT FUTURE, IN THIS VERY GALAXY, THERE WAS A PLANET THAT YOU CALL HOME. SPEAKING OF YOU, WHO ARE YOU?" << endl;
    string name;
    //cin.ignore();
    getline(cin, name);
    cout << "HELLO " << name << "! WELCOME HOME." << endl;
    Game nGame(name);

    nGame.home();

    if(nGame.getNext() == 1)
    {
        nGame.moon();
    }
    else if(nGame.getNext() == 2)
    {
        nGame.comets();
    }
    else
    {
        cout << "error 1" << endl;
    }

    // if(nGame.getLost() == true)
    // {
    //     return 0;
    // }

    switch(nGame.getNext())
    {
        case 3: 
            nGame.alien();
            break;
        case 4:
            nGame.detective();
            break;
        case 5:
            nGame.sneak();
            break;
        case 6:
            //out << "main" << endl;
            nGame.pp();
            break;
    }
    if(nGame.getLost() == true)
    {
        return 0;
    }

    switch(nGame.getNext())
    {
        case 6: 
            nGame.pp();
            if(nGame.getNext() == 7)
            {
                nGame.boss();
            }
            break;
        case 7:
            nGame.boss();
            break;
    }

    cout << "   o       "<<KRED<<"~*    "<<KMAG<<"/^\\"<<KNRM<<"         "<<KGRN<<"o " << endl;
    cout << "        "<<KYEL<<"*       "<<KMAG<<"/___\\"<<KNRM<<"  "<<KYEL<<"* " << endl;
    cout << "                "<<KMAG<<"|   |"<<KNRM<<"                "<<KYEL<<"*" << endl;
    cout <<KMAG<< "                | O |    " << endl;
    cout <<KNRM<<"Star Crossed Voyagers: The Crystal Conundrum" <<KMAG<<endl;
    cout << "               /| | |\\     " << endl;
    cout << "              /_|_|_|_\\        "<<KNRM<<"*" << endl;
    cout << "     "<<KGRN<<"~O~         "<<KRED<<"***"<<KBLU<<"         o" << endl;
    cout << "          o    "<<KRED<<" *****    *~    " << endl;
    cout << "               *******            "<<KYEL<<"o " << endl << endl << KNRM;
    return 0;
}