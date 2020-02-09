#include <iostream>
#include <string>
 
using namespace std;
 
#ifndef GAME_H
#define GAME_H

class Game
{
    private:
        string name;
        bool pebble;
        string friends[2];
        bool pizza;
        int next = 0;
        bool lost;
 
    public:
        Game(string);
        void home();
        void moon();
        void comets();
        void alien();
        void detective();
        void sneak();
        void pp();
        void boss();
        void battle(int e);
        char getNext();
        bool getLost();
 
};
 
#endif
