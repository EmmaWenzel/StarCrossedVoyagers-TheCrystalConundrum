#include <iostream>
#include <iomanip>
#include <string>
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
 
 
Game::Game(string n)
{
    name=n;
    pebble=false;
    pizza=false;
}

char Game::getNext()
{
    return next;
}

bool Game::getLost()
{
    return lost;
}

void Game::home()
{
    cout << endl;
    cout << KMAG<< "   ,= ”``” =." << endl;
    cout << "  /##   #####\\ " << endl;
    cout <<" |###     ####| " << endl;
    cout <<"  \\#   ###  #/" << endl;
    cout << "    ‘=.__.=’" << KNRM << endl;
    cout << endl;
    cout << "YOUR HOME PLANET IS A BEAUTIFUL PLANET. IT HAS ROLLING PURPLE HILLS, PURPLE BIRDS WITH CHEERFUL PURPLE SONGS, AND LITTLE PURPLE HOUSES." << endl;
    cout << "Press '.' AND enter to continue. If at any point in the game the text stops printing, assume you must PRESS PERIOD AND ENTER to continue." << endl;
    string ah;
    cin >> ah;
    if(ah != ".")
    {
        cout << "You rebelious bastard. I won't stop you." << endl;
    }
    cout << "THIS PLANET IS -- DARE I SAY IT -- A PERFECT PLANET. EVERYONE LIVES IN HARMONY, THRIVING OFF THE PLANET'S PURPLE POWER SOURCE:" << endl;
    cin >> ah;
    cout << "THE PERFECT PURPLE CRYSTAL." << endl << endl << "ALRIGHT ENOUGH WORLD BUILDING, LETS DIVE IN. YOU WAKE UP TO YOUR MOM CALLING YOU FOR BREAKFAST.";
    cout << endl;
    cin >> ah;
    cout << endl<<KBLU<< "\""<< name << "\""<< KNRM << " SHE CALLS," << KBLU << " \"I am hungry, and we have no food! You are 26 and still living under this roof, you really owe me, as your ";
    cout << "mother, some breakfast. Will you go to the market and buy us a delicious meal?" << endl << KNRM;
    cin >> ah;

    cout << "WILL YOU? (type 1 or 2)" << endl << "1) Yes, I do indeed enjoy food, and it seems reasonable that to obtain some I must head to the market" << endl;
    cout << "2) No, I owe my poor mother nothing. I am not hungry, in fact, I just want to watch some Say Yes to the Dress on TLC." << endl;
    string choice = "nope";
    while(choice != "1" && choice != "2")
    {
        cin >> choice;
        if(choice == "1")
        {
            cout << "GOOD CHOICE. YOU HEAD OUT FOR THE MARKET." << endl << "AS YOU WALK, YOU BEGIN TO BRAINSTORM FOOD CHOICES." << endl;
            cout << "WILL YOU BUY:" << endl << "1) Pizza!" << endl << "2) Rocks sound delicious this morning." << endl;
            string food;
            cin >> food;
            if(food != "1" && food != "2")
            {
                cout << "YOU REALLY AREN'T GETTING THE HANG OF THIS WHOLE 1 OR 2 THING ARE YOU? NO MATTER, SPOILER ALERT: YOU DON'T END UP BUYING ANYTHING ANYWAY";
                cout << endl;
                cin >> ah;
            }
            cout << "AS YOU WALK ALONG THE CROOKED PURPLE COBLESTONE PATH TOWARDS TOWN, YOU NOTICE SOME STRANGE OCCURANCES." << endl;
            cin >> ah;
            cout << "THE CHEERY LIGHTS AND MUSIC THAT NORMALLY LEAK OUT OF CORNER SHOPS AND BAKERIES ARE PAINFULLY ABSENT. A MAN, YOUR GOOD FRIEND DIMITRI," << endl;
            cout << "SPRINTS UP TO YOU. HE LOOKS NOTICEABLY UNSHOWERED. HIS EYES ARE WILD, PANICKED." << endl;
            cin >> ah;
            cout << "YOU CALL OUT TO HIM AS HE APPROACHES," << KMAG << " \"You have some real PEP in your step! What's happening my good friend Dimitri?\"" << endl << KNRM;
            cin >> ah;
            cout << "HE PANTS AS HE BEGINS TO SPEAK:" << endl;
            cout <<KCYN<< "\"The uber powerful purple crystal that powers our uber wonderful purple planet?\"" << KNRM << " HE ASKS. YOU SAY YOU KNOW THE ONE." << KCYN << " \"It's missing!\" ";
            cout << KNRM<< endl;
            cin >> ah;
            cout << "THIS IS, YOU DECIDE, NOT GREAT. YOU THINK ABOUT IT FOR A SECOND." << KMAG << " Maybe, " << KNRM << "YOU THINK," << KMAG << " this is actually pretty great." << endl;
            cin >> ah;
            cout << "I've been waiting for an opportunity such as this!" << KNRM << " YOU EXCLAIM. IN YOUR MIND, OF COURSE. I KNOW YOU'VE BEEN STARING INTO SPACE BLANKLY";
            cout << endl;
            cout << "FOR THE PAST THREE MINUTES, BUT EXCLAIMING THAT OUT LOUD WOULD BE really WEIRD. " << KMAG <<"I can fly into space in my handy dandy rocketship," << KNRM << " YOU" << endl;
            cout << "THINK, " << KMAG << "find the purple crystal, restore it, and become a hero!" << KNRM << endl;
            cin >> ah;
            cout << "AREN'T YOU BRILLIANT?" << endl;
            cin >> ah;
            cout << "SO, READY TO STRAP IN AND HEAD FOR THE STARS?" << endl << "1) Come on, vaminos! everybody, let's go!" << endl << "2) What? no! I still ";
            cout << "haven't finished this season of The Bachelor!" << endl;
            string stars;
            cin >> stars;
            if(stars == "1")
            {
                cout << endl;
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
                cout << endl;
                cin >> ah;
                cout << "AND AWAY WE GO!" << endl;
                // we need to choose a planet here 
                cout << "YOU BLAST OFF INTO SPACE! AS YOU TRAVEL FURTHER INTO THE SOLAR SYSTEM, YOU COME ACROSS A PLANET. AS YOU GET CLOSER, YOU CAN SEE IT" << endl;
                cout << endl << ".-.,= ”``” =." << endl;
                cout << "‘=/_         \\ " << endl;
                cout <<  " |   ’=._     | " << endl;
                cout <<  "  \\        ’=/`," << endl;
                cout << "    ‘=.__.=’`=’" << endl << endl;
                cout << "HAS A PRETTY RAD SET OF RINGS AND ONE REALLY BIG MOON. YOU REALIZE THAT TO REACH THE PLANET, YOU'LL NEED TO NAVIGATE THROUGH" << endl;
                cout << "A BELT OF ASTERIODS." << endl; 
                cout << endl;

                cout << "   ,= ”`u`”=." << endl;
                cout << "  /  O    o  \\ " << endl;
                cout << " | o  o      C| " << endl;
                cout << "  \\ O    O   /" << endl;
                cout << "    ‘=.__.=’" << endl;

                cout << endl;
                cin >> ah;
                // MOON
                // and also planet
                cout << "WHERE WILL YOU GO?" << endl << "1) You know what's not fun? astroids. I'd rather not deal with that so let's head to that moon" << endl;
                cout << "2) Asteriods? Bring those suckers on. I am not afraid of death. Danger is my middle name. Planet it is!" << endl;
                string moon = "nope";
                while(moon != "1" && moon != "2")
                {
                    cin >> moon;
                    if(moon == "1")
                    {
                        next = 1;
                        cout << "MOON IT IS! HERE WE GO!" << endl;
                        cout << endl;
                        cout << " o       ~*    /^\\         o " << endl;
                        cout << "      *       /___\\  * " << endl;
                        cout << "              |   |                *" << endl;
                        cout << "    *      o  | O |    " << endl;
                        cout << "              |   |           -O-" << endl;
                        cout << "       *     /| | |\\   * " << endl;
                        cout << "            /_|_|_|_\\        *" << endl;
                        cout << "   ~O~         ***         o" << endl;
                        cout << "        o     *****    *~    " << endl;
                        cout << "             *******            o " << endl << endl;
                        cin >> ah;
                        return;
                    }
                    else if(moon == "2")
                    {
                        next = 2;
                        cout << "PLANET IT IS! HERE WE GO!" << endl;
                        cout << endl;
                        cout << " o       ~*    /^\\         o " << endl;
                        cout << "      *       /___\\  * " << endl;
                        cout << "              |   |                *" << endl;
                        cout << "    *      o  | O |    " << endl;
                        cout << "              |   |           -O-" << endl;
                        cout << "       *     /| | |\\   * " << endl;
                        cout << "            /_|_|_|_\\        *" << endl;
                        cout << "   ~O~         ***         o" << endl;
                        cout << "        o     *****    *~    " << endl;
                        cout << "             *******            o " << endl << endl;
                        cin >> ah;
                        return; 
                    }
                    else
                    {
                        cout << "OKAY I FEEL LIKE WE WOULD'VE GOTTEN THIS DOWN BY NOW. 1 OR 2. NOT THAT HARD." << endl;
                    }
                }
            }
            else if(stars == "2")
            {
                cout << "YOU DECIDE ITS BEST TO STAY HOME. WHEN YOU GO HOME TO TURN ON THE BACHELOR, YOU REALIZE THERE'S NO POWER. REALLY, WHY DID YOU NOT" << endl;
                cout << "THINK OF THAT EARLIER? OH WELL." << endl;
                cin >> ah;
                cout << "YOU TAKE UP SUDUKO TO PASS THE TIME, BUT THE LONGER THE PLANET REMAINS WITHOUT POWER, THE FURTHER INTO DESPAIR THE PURPLE PEOPLE FALL.";
                cout << endl << "THE PERFECT PURPLE PLANET FALLS INTO RUIN. LOOKING BACK ON IT, MAYBE YOU SHOULD HAVE TAKEN THAT ROCKET SHIP." << endl;
                cin >> ah;
                cout << "IN FACT, IT WOULDN'T BE HALF STUPID TO GO BACK AND TRY THAT ONE AGAIN." << endl;
                // maybe add in play again here
                return;
            }
        }
        else if(choice == "2")
        {
            cout << "WHAT AN A+ CHILD YOU ARE." << endl;
            cin >> ah;
            cout << "YOU SIT DOWN AT THE TV AND FLIP IT ON. IT DOES NOT COMPLY. YOU PRESS THE BUTTON HARDER THIS TIME. THAT DOESN'T HELP."  << endl;
            cin >> ah;
            cout << KMAG << "\"Mom!\"" << KNRM << " YOU CALL. THE TV WILL NOT TURN ON. YOUR WORLD IS CRUMBLING AROUND YOU. YOU BREAK DOWN INTO TEARS." << endl;
            cin >> ah;
            cout << "THE PHONE RINGS IN THE OTHER ROOM AND YOU HEAR YOUR MOM PICK UP." << endl;
            cout << KBLU <<"\"Hello?\"" << KNRM << " SHE ASKS THE PHONE," << KBLU << " \"Oh dear! The purple power crystal is gone? What ever will we do?\" " << KNRM << endl;
            cin >> ah;
            cout << "DID YOU HEAR THAT CORRECTLY? THE PURPLE CRYSTAL POWER SOURCE IS GONE? WHAT EVER WILL YOU DO?" << endl;
            cout << "HAHA JUST KIDDING, YOU KNOW EXACTLY WHAT TO DO." << endl;
            cin >> ah;
            cout << "WILL YOU:" << endl << "1) Hop in your spaceship, it's time to avenge the planet and return a hero! That crystal can't have gone far, if you";
            cout << " go searching in the solar system, you're sure to find it!" << endl << "2) Keep pressing that button, it's sure to work eventually!" << endl;

            string stars;
            cin >> stars;
            if(stars == "1")
            {
                cout << endl;
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
                cout << "AND AWAY WE GO!" << endl;
                cin >> ah;
                // we need to choose a planet here 
                cout << "YOU BLAST OFF INTO SPACE! AS YOU TRAVEL FURTHER INTO THE SOLAR SYSTEM, YOU COME ACROSS A PLANET. AS YOU GET CLOSER, YOU CAN SEE IT" << endl;
                cout << endl << ".-.,= ”``” =." << endl;
                cout << "‘=/_         \\ " << endl;
                cout <<  " |   ’=._     | " << endl;
                cout <<  "  \\        ’=/`," << endl;
                cout << "    ‘=.__.=’`=’" << endl;

                cout << endl;
                cout << "HAS A PRETTY RAD SET OF RINGS AND ONE REALLY BIG MOON. YOU REALIZE THAT TO REACH THE PLANET, YOU'LL NEED TO NAVIGATE THROUGH" << endl;
                cout << "A BELT OF ASTERIODS." << endl; 
                cin >> ah;
                cout << endl;

                cout << "   ,= ”`u`”=." << endl;
                cout << "  /  O    o  \\ " << endl;
                cout <<  " | o  o      C| " << endl;
                cout <<  "  \\ O    O   /" << endl;
                cout << "    ‘=.__.=’" << endl;

                cout << endl;
                // and also planet
                cout << "WHERE WILL YOU GO?" << endl << "1) You know what's not fun? astroids. I'd rather not deal with that so let's head to that moon." << endl;
                cout << "2) Asteriods? Bring those suckers on. I am not afraid of death. Danger is my middle name. Planet it is!" << endl;
                string moon = "nope";
                while(moon != "1" && moon != "2")
                {
                    cin >> moon;
                    if(moon == "1")
                    {
                        next = 1;
                        cout << "MOON IT IS! HERE WE GO!" << endl;
                        cout << endl;
                        cout << " o       ~*    /^\\         o " << endl;
                        cout << "      *       /___\\  * " << endl;
                        cout << "              |   |                *" << endl;
                        cout << "    *      o  | O |    " << endl;
                        cout << "              |   |           -O-" << endl;
                        cout << "       *     /| | |\\   * " << endl;
                        cout << "            /_|_|_|_\\        *" << endl;
                        cout << "   ~O~         ***         o" << endl;
                        cout << "        o     *****    *~    " << endl;
                        cout << "             *******            o " << endl << endl;
                        return;
                    }
                    else if(moon == "2")
                    {
                        next = 2;
                        cout << "PLANET IT IS! HERE WE GO!" << endl;
                        cout << endl;
                        cout << " o       ~*    /^\\         o " << endl;
                        cout << "      *       /___\\  * " << endl;
                        cout << "              |   |                *" << endl;
                        cout << "    *      o  | O |    " << endl;
                        cout << "              |   |           -O-" << endl;
                        cout << "       *     /| | |\\   * " << endl;
                        cout << "            /_|_|_|_\\        *" << endl;
                        cout << "   ~O~         ***         o" << endl;
                        cout << "        o     *****    *~    " << endl;
                        cout << "             *******            o " << endl << endl;
                        return; 
                    }
                    else
                    {
                        cout << "OKAY I FEEL LIKE WE WOULD'VE GOTTEN THIS DOWN BY NOW. 1 OR 2. NOT THAT HARD." << endl;
                    }
                }
            }
            else if(stars == "2")
            {
                cout << "YOU DECIDE ITS BEST TO STAY HOME. WHEN YOU GO HOME TO TURN ON THE BACHELOR, YOU REALIZE THERE'S NO POWER. REALLY, WHY DID YOU NOT" << endl;
                cout << "THINK OF THAT EARLIER? OH WELL." << endl;
                cin >> ah;
                cout << "YOU TAKE UP SUDUKO TO PASS THE TIME, BUT THE LONGER THE PLANET REMAINS WITHOUT POWER, THE FURTHER INTO DESPAIR THE PURPLE PEOPLE FALL.";
                cout << endl << "THE PERFECT PURPLE PLANET FALLS INTO RUIN. LOOKING BACK ON IT, MAYBE YOU SHOULD HAVE TAKEN THAT ROCKET SHIP." << endl;
                cin >> ah;
                cout << "IN FACT, IT WOULDN'T BE HALF STUPID TO GO BACK AND TRY THAT ONE AGAIN." << endl;
                // maybe add in play again here
                return;
            }
        }
        else
        {
            cout << "I DO NOT THINK YOU UNDERSTAND. YOU CAN PICK 1 OR YOU CAN PICK 2. FOR A RECAP IN CASE YOU FORGOT: DO NOT TYPE ANYTHING THAT IS NOT 1 OR 2."; 
            cout << " OKAY THANKS. LET'S TRY THAT AGAIN." << endl;
        }
    } 
}
void Game::moon()
{
    string ah;
    cout << "   ,= ”`u`”=." << endl;
    cout << "  /  O    o  \\ " << endl;
    cout <<  " | o  o      C| " << endl;
    cout <<  "  \\ O    O   /" << endl;
    cout << "    ‘=.__.=’" << endl<<endl;
    cout<<"YOU QUICKLY APPROACH YOUR MOON, CALM AND GRAY. AS YOU GET CLOSER, YOU REALIZE WHAT YOU PREVIOUSLY THOUGHT WAS ROCK LOOKS LIKE..."<<endl;
    cin>>ah;
    cout<<"...CHEESE?"<<endl;
    cin>>ah;
    cout<<"YOUR SHIP LANDS ON THE MOON, AND IMMEDIATELY YOU ARE MET BY A MAN."<<endl;
    cin>>ah;
    //ADD PICTURE FOR FARMER BOI (OR CHANGE TO THE CAT)
    cout<<"MAN: " << KYEL << "What are you doing on my cheese planet? You need to move now or else you'll ruin all of my precious cheese!" << KNRM <<endl;
    cin>>ah;
    cout<<"YOU LOOK AROUND CONFUSED. YOU SAY" << KMAG << " \"Cheese?\""<< KNRM << endl;
    cin>>ah;
    cout<<"MAN:" << KYEL <<  " Yes, cheese. What else would it be? I realize we haven't introduced ourselves. My name is Jimbob. And you are?"<< KNRM<<endl;
    cout<<"YOU REPLY, " << KMAG <<"\"" << name<< "\"."<< KNRM << endl;
    cout<<"JIMBOB: " << KYEL <<"Well, as long as you're here, you can help me with something. Some of my cows have eaten some bad food, but they're all mixed up." << endl;
    cout<<"And now it's time to make some cheese, but if I use any of the sick cows' milk, the cheese will be RUINED!"<<endl;
    cin>>ah;
    cout<<"So, can you help me find some healthy cows? I only need 5 containers full, and you can get one container per cow."<<endl;
    cout<<"Be careful though, they move around a lot and if you get even one bad cow, you'll have to pour out the milk and start over."<<endl;
    cout<<"Good luck!"<< KNRM <<endl;
    time(NULL);
    string choice;
    int ic;
    int numFound=0;
    bool poison[3][5];
    int randRow=0;
    int randCol=0;
    int random=0;
    int numRandomCow=0;
    bool gtg=true;
    bool valid = false;
    while (numFound<5)
    {
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<5; j++)
            {
                poison[i][j]=false;
            }
        }
        numRandomCow=0;
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<5; j++)
            {
                if (numRandomCow<7)
                {
                    random = rand() & 2;
                    if (random==0)
                    {
                        poison[i][j]=true;
                        numRandomCow++;
                    }
                }
            }
        }
        // for (int i=0; i<3; i++)
        // {
        //     for (int j=0; j<5; j++)
        //     {
        //         if (poison[i][j]==true)
        //         {
        //             cout<<"X";
        //         }
        //         else
        //         {
        //             cout<<"O";
        //         } 
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        gtg = true;
        while (gtg==true)
        {
            cout<<"PICK A COW STALL"<<endl; //fix up this dialogue
            //print cow here
            cout<<"---------------------"<<endl;
            cout<<"| 1 | 2 | 3 | 4 | 5 |"<<endl;
            cout<<"---------------------"<<endl;
            cout<<"| 6 | 7 | 8 | 9 | 10|"<<endl;
            cout<<"---------------------"<<endl;
            cout<<"| 11| 12| 13| 14| 15|"<<endl;
            cout<<"---------------------"<<endl;
            cin>>choice;
            if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7" && choice != "8" && choice != "9" && choice != "10" && choice != "11" && choice != "12" && choice != "13" && choice != "14" && choice != "15")
            {
                cout << "TRY A VALID NUMBER, MY DUDE." << endl;
                ic = 0;
            }
            else
            {
                ic = stoi(choice);
            }
            if (ic>0 && ic<16)
            {
                valid = true;
            }
            while (valid==false)
            {
                cout<<"PLEASE PICK A VALID COW STALL."<<endl;
                cin>>choice;
                if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7" && choice != "8" && choice != "9" && choice != "10" && choice != "11" && choice != "12" && choice != "13" && choice != "14" && choice != "15")
                {
                    cout << "TRY A VALID NUMBER, MY DUDE." << endl;
                    ic = 0;
                }
                else
                {
                    ic = stoi(choice);
                }
                if (ic>0 && ic<16)
                    {
                        valid = true;
                    }
            }
            switch (ic)
            {
                case 1:
                    if (poison[0][0]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<<KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[0][0]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over." << KNRM<<endl;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 2:
                    if (poison[0][1]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL << "Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[0][1]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl<<KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 3:
                    if (poison[0][2]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<<KYEL << "Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[0][2]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<< KNRM<< endl;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 4:
                    if (poison[0][3]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[0][3]=true;
                    }
                    else
                    {
                        cout<<KYEL << "What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 5:
                    if (poison[0][4]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[0][4]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 6:
                    if (poison[1][0]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[1][0]=true;
                    }
                    else
                    {
                        cout<<KYEL << "What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 7:
                    if (poison[1][1]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<<KYEL << "Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[1][1]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 8:
                    if (poison[1][2]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[1][2]=true;
                    }
                    else
                    {
                        cout<< KYEL << "What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 9:
                    if (poison[1][3]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL << "Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[1][3]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 10:
                    if (poison[1][4]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[1][4]=true;
                    }
                    else
                    {
                        cout<< KYEL << "What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<< KNRM<<endl;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 11:
                    if (poison[2][0]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[2][0]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 12:
                    if (poison[2][1]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<<KYEL << "Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl<< KNRM;
                        }
                        poison[2][1]=true;
                    }
                    else
                    {
                        cout<< KYEL << "What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 13:
                    if (poison[2][2]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL <<"Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[2][2]=true;
                    }
                    else
                    {
                        cout<< KYEL << "What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<< KNRM <<endl;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 14:
                    if (poison[2][3]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<<KYEL << "Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<< KNRM << endl;
                        }
                        poison[2][3]=true;
                    }
                    else
                    {
                        cout<< KYEL << "What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<endl << KNRM;
                        gtg=false;
                        numFound=0;
                    }
                    break;
                case 15:
                    if (poison[2][4]==false)
                    {
                        numFound++;
                        if (numFound<5)
                        {
                            cout<< KYEL << "Good choice! This milk will be perfect. Only "<<5-numFound<<" more to go."<<endl << KNRM;
                        }
                        poison[2][4]=true;
                    }
                    else
                    {
                        cout<< KYEL <<"What's that smell?... Oh... The milk... It's spoiled. I Guess we'll have to start all over."<<KNRM <<endl;
                        gtg=false;
                        numFound=0;
                    }
                    break;
            }
            if (numFound==5)
            {
                gtg=false;
            }
        }

    }
    cout<<"JIMBOB:" << KYEL << " Thanks for your help! Now I can make some real GOUDA cheese!" << KNRM <<endl;
    cin>>ah;
    cout<<"AS JIMBOB THANKS YOU, YOU NOTICE SOMETHING MOVING IN THE CORNER OF YOUR EYE. YOU SPIN AROUND TO SEE WHAT IT IS."<<endl;
    cin>>ah;
    cout << KCYN << " _" << endl;
    cout << "( \\ " << endl;
    cout << ") )" << endl;
    cout << "( (  .-””-.    A.-.A " << endl;
    cout << "\\ \\ /       \\/ ,   , \\" << endl;
    cout << "\\  \\        =;   t   /=" << endl;
    cout << " \\   |”” .   ‘, --- ’" << endl;
    cout << " / / /    | || " << endl;
    cout << "/_,) )    |_,)) " << endl << endl << KNRM;
    cout<<"JIMBOB:" << KYEL << " Oh that's just a space rodent. I've been trying to get rid of it for years."<<endl<<KNRM;
    cin>>ah;
    cout<<"THE CAT COMES UP TO YOU AND RUBS ITS HEAD ON YOUR LEG. YOU REACH DOWN AND PET IT. YOU REPLY," << KMAG << " \"I'd be more than happy to take this"<<endl;
    cout<<"guy with me, if you'd like.\""<<endl << KNRM;
    cin>>ah;
    cout<<"JIMBOB:" << KYEL << " That would be fantastic. Thanks for your help. I've gotta go keep making some cheese, but thanks for stopping by."<<endl << KNRM;
    cin>>ah;
    friends[0]="cat";
    cout<<"YOU WAVE GOODBYE TO JIMBOB AND BOARD YOUR SHIP WITH YOUR FELINE FRIEND BY YOUR SIDE. AS YOU GET READY TO LAUNCH YOU DECIDE WHICH PATH TO FOLLOW."<<endl;
    cin>>ah;
    cout<<"DO YOU WANT TO GO 1. A SMOKING PLANET WITH SHIPS SWARMED ON THE SURFACE OR 2. A QUIET PLANET FAR IN THE DISTANCE (PICK 1 OR 2)?"<<endl;
    cin>>choice;
    if(choice != "1" && choice != "2")
    {
        ic = 0;
    }
    else
    {
        ic = stoi(choice);
    }
    if (ic==1)
    {
        next=3;
        cout<<"YOU BEGIN THE NEXT LEG OF YOUR JOURNEY, TRAVELING DOWN THE PATH TO YOUR RIGHT."<<endl;
    }
    else if (ic==2)
    {
        next=4;
        cout<<"YOU BEGINT HE NEXT LEG OF YOUR JOURNEY, WINDING ALONG THE LEFT PATH."<<endl;
    }
    else
    {
        next=4;
        cout<<"GOING ROGUE I SEE. YOU PUT THE SHIP ON AUTOPILOT AND TAKE A NAP."<<endl;
    }
}
void Game::comets()
{
    string ah;
    string choice;
    int ic;
    bool asteroids[7][7];
    bool position[7][7];
    bool caught=false;
    bool valid = false;
    bool win = false;
    int playerRow=1;
    int playerCol=3;
    for (int i=0; i<7; i++)
    {
        for (int j=0; j<7; j++)
        {
            if (i==0 || j==0 | j==6)
            {
                asteroids[i][j]=true;
            }
            else
            {
                asteroids[i][j]=false;
            }
            position[i][j]=false;
        }
    }
    asteroids[1][2]=true;
    asteroids[2][2]=true;
    asteroids[2][5]=true;
    asteroids[3][4]=true;
    asteroids[4][2]=true;
    asteroids[4][5]=true;
    asteroids[5][1]=true;
    asteroids[5][3]=true;
    asteroids[6][5]=true;
    asteroids[1][3]=false;
    position[1][3]=true;
    cout << ".-.,= ”``” =." << endl;
    cout << "‘=/_         \\ " << endl;
    cout <<  " |   ’=._     | " << endl;
    cout <<  "  \\        ’=/`," << endl;
    cout << "    ‘=.__.=’`=’" << endl;
    cin>>ah;
    cout<<"ON YOUR WAY TO THE NEXT PLANET, YOU REALIZE YOU CAN'T MOVE ANY FURTHER. YOUR PATH IS BLOCKED BY COMETS."<<endl;
    cin>>ah;
    cout<<"AS YOU SIT THINKING ABOUT HOW TO GET THROUGH THE ASTEROID FIELD, A SNAKE DRIFTS PAST YOUR WINDOW."<<endl;
    cin>>ah;
    cout << "        ___" << endl;
    cout << "       _|_|_ " << endl;
    cout << KRED << "    >--<" << KNRM <<KGRN << " * ) " << endl;
    cout << "         ) )" << endl;
    cout << "        / /    _" << endl;
    cout << "       ( (_.-’ _ ‘. " << endl;
    cout << "       `-----’   ` ) "<< endl;
    cout << "              _.- ’ " << endl << endl << KNRM;
    cout<<"SNAKE:" << KGRN <<" Hello! Pleassse to let me insssside. It'sss pretty chilly out here in sssspace."<< KNRM <<endl;
    cin>>ah;
    cout<<"YOU LET THE SNAKE COME INSIDE THE SPACESHIP."<<endl;
    cin>>ah;
    cout<<"SNAKE:" << KGRN<<" Thank you, my friend. My name is Jake the ssssnake. I've been traveling this galaxy for a few monthssss now and"<<endl;
    cout<<"ssssomehow managed to get ssstuck in sssspace away from my home planet. Why are you guys jusssst ssssiting here? We need to move"<<endl;
    cout<<"before your sssship getsss hit by a comet!"<<KNRM << endl;
    cin>>ah;
    cout<<"YOU TELL JAKE" <<KMAG <<" \"I'm not sure how to get through the asteroid field without ruining my ship, so I've been sitting trying to figure it out.\""<<endl << KNRM;
    cin>>ah;
    cout<<"JAKE:" <<KGRN << " Ahhh, I sssseeee. Getting through these asteroids is super easy! They move pretty slowly, so just remember where they are."<<endl;
    cout<<"If you get hit, they won't do too much damage since they're so slow, but they will push you back to this spot, so be careful or else"<<endl;
    cout<<"we'll be here all day. Alright, you can move forward, backward, right and left. Good luck!"<<endl << KNRM;
    cin>>ah;
    //Add snake commentary describing how to move
    while (position[6][1]==false && position[6][2]==false && position[6][3]==false && position[6][4]==false)
    {
        //for (int i=0; i<7; i++)
        // {
        //     for (int j=0; j<7; j++)
        //     {
        //         if (position[i][j]==true)
        //         {
        //             cout<<"X";
        //         }
        //         else if (asteroids[i][j]==true)
        //         {
        //             cout<<"A";
        //         }
        //         else
        //         {
        //             cout<<"O";
        //         }
        //     }
        //     cout<<endl;
        //}
        cout<<endl;
        cout<<"PICK A DIRECTION TO MOVE: FORWARDS (1), BACKWARDS (2), RIGHT (3), OR LEFT (4)?"<<endl;
        cin>>choice;
        if(choice != "1" && choice != "2" && choice != "3" && choice != "4")
        {
            ic = 0;
        }
        else
        {
            ic = stoi(choice);
        }
        if (ic>0 && ic<5)
        {
            valid = true;
        }
        while (valid==false)
        {
            cout<<"JAKE:" <<KGRN << " You have to pick an actual direction, dude."<<endl << KNRM;
            cout<<"PICK A DIRECTION TO MOVE: FORWARDS (1), BACKWARDS (2), RIGHT (3), OR LEFT (4)?"<<endl;
            cin>>choice;
            if(choice != "1" && choice != "2" && choice != "3" && choice != "4")
            {
                ic = 0;
            }
            else
            {
                ic = stoi(choice);
            }
            if (ic>0 && ic<5)
            {
                valid = true;
            }
        }
        switch (ic)
        {
           case 1:
                position[playerRow][playerCol]=false;
                playerRow++;
                if (asteroids[playerRow][playerCol]==false )
                {
                    position[playerRow][playerCol]=true;
                    cout<<"JAKE:" << KGRN << " Good move. We're safe so far!"<<endl << KNRM;
                }
                else
                {
                    cout<<"YOU'VE RUN INTO AN ASTEROID! YOU WERE HIT ALL THE WAY BACK TO THE BEGINNING OF THE ASTEROID FIELD!"<<endl;
                    playerRow=1;
                    playerCol=3;
                    position[1][3]=true;
                }
                valid=false;
                break;
            case 2:
                    position[playerRow][playerCol]=false;
                playerRow--;
                if (asteroids[playerRow][playerCol]==false || playerRow>0)
                {
                    position[playerRow][playerCol]=true;
                    cout<< KGRN << "Good move. We're safe so far!"<< KNRM <<endl;
                }
                else
                {
                    cout<<"YOU'VE RUN INTO AN ASTEROID! YOU WERE HIT ALL THE WAY BACK TO THE BEGINNING OF THE ASTEROID FIELD!"<<endl;
                    playerRow=1;
                    playerCol=3;
                    position[1][3]=true;
                }
                valid = false;
                break;
            case 3:
                position[playerRow][playerCol]=false;
                playerCol++;
                if (asteroids[playerRow][playerCol]==false || playerRow>0)
                {
                    position[playerRow][playerCol]=true;
                    cout<< KGRN << "Good move. We're safe so far!"<< KNRM <<endl;
                }
                else
                {
                    cout<<"YOU'VE RUN INTO AN ASTEROID! YOU WERE HIT ALL THE WAY BACK TO THE BEGINNING OF THE ASTEROID FIELD!"<<endl;
                    playerRow=1;
                    playerCol=3;
                    position[1][3]=true;
                }
                valid = false;
                break;
            case 4:
                position[playerRow][playerCol]=false;
                playerCol++;
                if (asteroids[playerRow][playerCol]==false || playerRow<6)
                {
                    position[playerRow][playerCol]=true;
                    cout<< KGRN << "Good move. We're safe so far!"<< KNRM <<endl;
                }
                else
                {
                    cout<<"YOU'VE RUN INTO AN ASTEROID! YOU WERE HIT ALL THE WAY BACK TO THE BEGINNING OF THE ASTEROID FIELD!"<<endl;
                    playerRow=1;
                    playerCol=3;
                    position[1][3]=true;
                }
                valid = false;
                break;
        }
    }
    cout<<"AN ASTEROID FLIES DIRECTLY BESIDE YOUR SHIP."<<endl;
    cin>>ah;
    cout<<"JAKE:" << KGRN <<  " Phew! That was a clossssssssse one! We made it out in the nick of time." << KNRM <<endl;
    cin>>ah;
    cout<<"JAKE:" << KGRN  << " Sssssince I helped you through the asssssssteroid field, would you mind if I tagged along for while?"<<endl;
    cout<<"I need to warm up from that time floating around in sssspace."<<endl << KNRM;
    cin>>ah;
    cout<<"YOU NOD YOUR HEAD."<<endl;
    cin>>ah;
    cout<< KMAG <<"Great! I love a good adventure!" << KNRM <<endl;
    cin>>ah;
    cout<<"AND WITH THAT YOU CONTINUE ON YOUR JOURNEY. DO YOU WANT TO 1. HEAD TO THE PLANET EVILOLI OR 2. PIZZA PLANET?"<<endl;
    cin>>choice;
    if(choice != "1" && choice != "2" && choice != "3" && choice != "4")
    {
        ic = 0;
    }
    else
    {
        ic = stoi(choice);
    }
    if (ic==1)
    {
        next=5;
        cout<<"YOU BEGIN THE NEXT LEG OF YOUR JOURNEY, STAYING DIRECTLY ON YOUR PLANNED PATH."<<endl;
    }
    else if (ic==2)
    {
        next=6;
        cout<<"YOU TAKE A SLIGHT TURN TO THE RIGHT, GOING DOWN A NEW PATH."<<endl;
    }
    else
    {
        next=6;
        cout<<"YOU GIVE JAKE CONTROL OF THE SHIP AND READ A SHORT BOOK."<<endl;
    }
    //cout << "commets" << endl;
    return;
    //friends[0]="snake";
}
void Game::alien()
{
    // if we have time display one here
    string ah;
    cout << "YOU APPROACH THE PLANET; FROM HERE YOU CAN ALREADY SEE THE DESTRUCTION. MUSHROOM CLOUDS DON'T SCARE YOU! YOU HEAD FOR THE SURFACE." << endl;
    cin >> ah;
    cout << "IT TAKES A FEW TRICKY MANUVERS TO AVIOD THE LASER BEAMS, BUT YOU AND YOUR NEW FRIEND MAKE IT SAFTELY TO THE SURFACE. IT'S BRUTAL DOWN THERE." << endl;
    cout << "THE ALIEN RACE EVILOLIS ARE BLASTING AT THE LOCALS WITH LASERS, HOUSES ARE IN RUIN; IT'S CLEAR, THIS IS A PLANET HIJACKING." << endl;
    cout << endl << KGRN << "          o     o" <<endl;
    cout << "          \\\\___//" << endl;
    cout << "         /. __ .\\ " << endl;
    cout << "         \\  \\/  /  " << endl;
    cout << "     ‘__ /      \\ " << endl;
    cout << "      \\--        )" << endl;
    cout << "       \\________/" << endl;
    cout << "          |   | " << endl << KNRM << endl;
    cout << "ALL OF A SUDDEN, AN ALIEN SPOTS YOU! YOU TELL YOUR FRIEND TO WAIT IN THE SHIP, AND HEAD FISTS FIRST INTO BATTLE." << endl;
    cin >> ah;
    bool gottem = false;
    bool nF = false;
    int hits = 0;
    int rounds = 0;

    cout << "THE ALIEN COMES AT YOU! YOU HAVE TO THINK FAST!" << endl;
    while(gottem == false && rounds <= 3)
    {
        cout << "WHERE WILL YOU HIT HIM?" << endl << "1) Go for a headshot." << endl << "2) Hit his oncoming hand." << endl << "3) Stab him in the heart." << endl;
        cout << "4) Gut punch that sucker." << endl << "5) Kick him in the groin." << endl << "6) Stomp on his right foot." << endl << "7) Stub that left pinkie toe.";
        cout << endl;
        // will you hit 
        // 1. head
        // 2. hand
        // 3. heart
        // 4. gut 
        // 5. groin
        // 6. right foot 
        // 7. left toe

        string choice;
        int ic;
        cin >> choice;
        if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7")
        {
            cout << "WAY TO WIFF IT BRO" << endl;
            cout << "HE CLOCKS YOU IN THE FACE WITH HIS LASER GUN. VERY CINEMATIC BUT SEEMS A LITTLE IRONIC." << endl;
            cin >> ah;
            cout << "IF I'M BEING TOTALLY HONEST I CAN'T DEFINE IRONIC, BUT LET'S JUST BOTH PRETEND THAT WAS THE RIGHT USE." << endl;
            ic = 8;
        }
        else
        {
            ic = stoi(choice);
        }
        switch(ic)
        {
            case 1: 
                hits = hits + 1;
                cout << "HE DOESN'T EVEN FLINCH; DID YOU FORGET TO READ UP ON THE EVILOLIS? THEIR BRAINS AREN'T IN THEIR HEADS!" << endl;
                cin >> ah;
                cout << "HE GOES TO KICK YOU IN THE FACE WITH A ROUNDHOUSE KICK, BUT LOOKS LIKE HE MISJUDGED HOW SHORT HE WAS AND HIT YOU IN THE CROTCH INSTEAD.";
                cout << " OUCH." << endl;
                // print thats not the brain bit
                break;
            case 2: 
                hits = hits + 5;
                cout << "YOU SLAP HIS HAND WITH YOUR HAND. WOW. NOW THAT WAS A SOLID HIGH FIVE RIGHT THERE. ALL OF THE RAGE AND AGRESSION SEEMS TO MELT OUT OF HIM";
                cout << endl;
                cin >> ah;
                cout << "YOU'VE MADE YOURSELF A FRIEND!" << endl;
                nF = true;
                // print high five!
                break;
            case 3: 
                hits = hits + 3;
                cout << "YOU SPIT SOME SICK BARS AT THAT GUY. WOAH, LOOKS LIKE THOSE INSULTS HIT HIM HARD. RIGHT IN THE HEART!" << endl;
                cin >> ah;
                // you insult him
                cout << "HE BEGINS TO CRY. OH MAN. YOU FEEL BAD NOW. WAY TO GO." << endl;
                break;
            case 4: 
                hits = hits + 2;
                cout << "YOU HIT HIM IN THE STOMACH AND HE DOUBLES OVER. GOOD HIT!" << endl;
                cin >> ah;
                cout << "HE RECOVERS AND PUNCHES YOU BACK IN THE GUT. AN EYE FOR AN EYE I GUESS." << endl;
                break;
            case 5: 
                hits = hits + 1;
                cout << "YOU NAIL HIM IN THE GROIN. HE DOESN'T SEEM HURT AT ALL. JUST OFFENDED." << endl;
                cin >> ah;
                cout << "HE THROWS HANDS. YOU'RE NOT DOING SO HOT AFTER THAT WHOLE EVENT." << endl;
                // he seems unfased 
                break;
            case 6: 
                hits = hits + 3;
                cout << "YOU STOMP ON HIS FOOT. \"ouch!\" NICE HIT!" << endl;
                cin >> ah;
                cout << "HE RECOVERS QUICKLY AND USES HIS MIND POWERS TO MAKE YOU PUNCH YOURSELF IN THE FOOT. weird, YOU THINK, but okay." << endl;
                // you stomp on his foot, ouch that hurt! nice hit!
                break;
            case 7: 
                hits = hits + 5;
                cout << "YOU STUB HIS LEFT PINKIE TOE AND HE COLLAPSES IN PAIN. NOW THAT'S WHAT I CALL A CRITICAL HIT." << endl;
                cin >> ah;
                // now that's a crit hit!
                break;
            default:
                cout << "WAY TO WIFF IT BRO" << endl;
                cout << "HE CLOCKS YOU IN THE FACE WITH HIS LASER GUN. VERY CINEMATIC BUT SEEMS A LITTLE IRONIC." << endl;
                cin >> ah;
                cout << "IF I'M BEING TOTALLY HONEST I CAN'T DEFINE IRONIC, BUT LET'S JUST BOTH PRETEND THAT WAS THE RIGHT USE." << endl;
                break;
        }
        rounds++;
        if(hits >= 5)
        {
            gottem = true;
        }
    }
    if(gottem == false)
    {
        cout << "YOU FALL TO THE GROUND IN DEFEAT. HE RAISES HIS LASER BLASTER. THE LAST THING YOU SEE IS THE MOUTH OF THAT GUN STARING BACK AT YOU." << endl;
        return;
        lost = true;
    }
    else if(nF == false)
    {
        cout << "HE FALLS TO THE GROUND IN DEFEAT. YOU PICK UP HIS LASER GUN AND PUT IT TO HIS HEAD. DO YOU PULL THE TRIGGER?" << endl;
        cout << "1) Yes" << endl << "2) No" << endl;
        string shoot;
        cin >> shoot;
        if(shoot == "1")
        {
            cout << "YOU PULL THE TRIGGER. ALL OF THE OTHER EVILOLIS SURROUND YOU. THE LAST THING YOU SEE IS THE LIGHT OF A HUNDRED LASERS." << endl;
            lost = true;
        }
        else if(shoot == "2")
        {
            cout << "HE PEEKS AN EYE OPEN." << KGRN << " \"You're not going to shoot me?\"" << KNRM << " HE ASKS. IN THAT INSTANT HE LOOKS SO HUMAN."<< KMAG << " \"No,\"" << KNRM << " YOU RESPOND," << endl;
            cout << KMAG <<  " \"You seem like a pretty cool dude.\" " << KNRM << endl;
            cin >> ah;
            cout << KGRN <<"\"You know what,\"" << KNRM << " HE SAYS," << KGRN << " \"I am a pretty cool dude. Thanks for noticing. You know what? Galaxatron never called me cool.\"" << endl;
            cin >> ah;
            cout << KMAG <<"\"Galaxatron?\"" << KNRM <<" YOU ASK, " << KMAG << "\"Who's that?\"" << KNRM << endl;
            cin >> ah;
            cout << KGRN <<"\"Our manager,\"" << KNRM << " HE REPLIES, " << KGRN << "\"The king of the universe or whatever it is he's calling himself. He told us, he said, you just take over this";
            cout << endl << "planet real quick, and i'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
            cin >> ah;
            cout << "But you know what?\""<< KNRM << " HE SAID," << KGRN << " \"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" << KNRM << endl;
            cin >> ah;
            cout << "YOU LOWER THE PISTOL FROM HIS HEAD." << KMAG << " \"You know where this Galaxatron is right now?\"" << endl << KNRM;
            cin >> ah;
            cout << KGRN << "\"Oh yeah,\""<< KNRM << " HE RESPONDS,"<<KGRN << " \"You got a ship?\"" << endl << KNRM << KMAG << "\"Oh,\""<< KNRM <<" YOU REPLY," << KMAG <<" \"I sure do.\"" << endl << KNRM;
            cin >> ah;
            cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
            next = 7;
            friends[1] = "alien";
            cout << endl << " o       ~*    /^\\         o " << endl;
            cout << "      *       /___\\  * " << endl;
            cout << "              |   |                *" << endl;
            cout << "    *      o  | O |    " << endl;
            cout << "              |   |           -O-" << endl;
            cout << "       *     /| | |\\   * " << endl;
            cout << "            /_|_|_|_\\        *" << endl;
            cout << "   ~O~         ***         o" << endl;
            cout << "        o     *****    *~    " << endl;
            cout << "             *******            o " << endl << endl;
            return;
        }
        else
        {
            cout << "YOU REALIZE YOU DON'T EVEN KNOW WHERE THE TRIGGER IS ON THIS GUN. TIME TO PRETEND YOU NEVER INTENDED TO SHOOT HIM." << endl;
            cout << "HE PEEKS AN EYE OPEN." << KGRN << " \"You're not going to shoot me?\"" << KNRM << " HE ASKS. IN THAT INSTANT HE LOOKS SO HUMAN."<< KMAG << " \"No,\"" << KNRM << " YOU RESPOND," << endl;
            cout << KMAG <<  " \"You seem like a pretty cool dude.\" " << KNRM << endl;
            cin >> ah;
            cout << KGRN <<"\"You know what,\"" << KNRM << " HE SAYS," << KGRN << " \"I am a pretty cool dude. Thanks for noticing. You know what? Galaxatron never called me cool.\"" << endl;
            cin >> ah;
            cout << KMAG <<"\"Galaxatron?\"" << KNRM <<" YOU ASK, " << KMAG << "\"Who's that?\"" << KNRM << endl;
            cin >> ah;
            cout << KGRN <<"\"Our manager,\"" << KNRM << " HE REPLIES, " << KGRN << "\"The king of the universe or whatever it is he's calling himself. He told us, he said, you just take over this";
            cout << endl << "planet real quick, and i'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
            cin >> ah;
            cout << "But you know what?\""<< KNRM << " HE SAID," << KGRN << " \"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" << KNRM << endl;
            cin >> ah;
            cout << "YOU LOWER THE PISTOL FROM HIS HEAD." << KMAG << " \"You know where this Galaxatron is right now?\"" << endl << KNRM;
            cin >> ah;
            cout << KGRN << "\"Oh yeah,\""<< KNRM << " HE RESPONDS,"<<KGRN << " \"You got a ship?\"" << endl << KNRM << KMAG << "\"Oh,\""<< KNRM <<" YOU REPLY," << KMAG <<" \"I sure do.\"" << endl << KNRM;
            cin >> ah;
            cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
            friends[1] = "alien";
            next = 7;
            cout << endl << " o       ~*    /^\\         o " << endl;
            cout << "      *       /___\\  * " << endl;
            cout << "              |   |                *" << endl;
            cout << "    *      o  | O |    " << endl;
            cout << "              |   |           -O-" << endl;
            cout << "       *     /| | |\\   * " << endl;
            cout << "            /_|_|_|_\\        *" << endl;
            cout << "   ~O~         ***         o" << endl;
            cout << "        o     *****    *~    " << endl;
            cout << "             *******            o " << endl << endl;
            return;
        }
    }
    else
    {
        cout << KGRN << "\"Wow!\"" << KNRM << " HE SAYS," << KGRN << " \"You sure are one cool guy. I don't get why Galaxatron hates my high fives!" << KNRM << endl;
        cin >> ah;
        cout << KMAG <<"\"Galaxatron?\"" << KNRM <<" YOU ASK, " << KMAG << "\"Who's that?\"" << KNRM << endl;
        cin >> ah;
        cout << KGRN <<"\"Our manager,\"" << KNRM << " HE REPLIES, " << KGRN << "\"The king of the universe or whatever it is he's calling himself. He told us, he said, you just take over this";
        cout << endl << "planet real quick, and i'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
        cin >> ah;
        cout << "But you know what?\""<< KNRM << " HE SAID," << KGRN << " \"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" << KNRM << endl;
        cin >> ah;
        cout << "YOU LOWER THE PISTOL FROM HIS HEAD." << KMAG << " \"You know where this Galaxatron is right now?\"" << endl << KNRM;
        cin >> ah;
        cout << KGRN << "\"Oh yeah,\""<< KNRM << " HE RESPONDS,"<<KGRN << " \"You got a ship?\"" << endl << KNRM << KMAG << "\"Oh,\""<< KNRM <<" YOU REPLY," << KMAG <<" \"I sure do.\"" << endl << KNRM;
        cin >> ah;
        cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
        friends[1] = "alien";
        next = 7;
        cout << " o       ~*    /^\\         o " << endl;
        cout << "      *       /___\\  * " << endl;
        cout << "              |   |                *" << endl;
        cout << "    *      o  | O |    " << endl;
        cout << "              |   |           -O-" << endl;
        cout << "       *     /| | |\\   * " << endl;
        cout << "            /_|_|_|_\\        *" << endl;
        cout << "   ~O~         ***         o" << endl;
        cout << "        o     *****    *~    " << endl;
        cout << "             *******            o " << endl << endl;
        return;
    }
    return;
}
void Game::detective()
{
    string ah;
    cout << "AS YOU APPROACH THE PLANET'S SURFACE, YOU BEGIN TO SEE THE DESTRUCTION. CRATERS ARE CAKED ACROSS THE GROUND, HOUSES ARE CHARRED AND STREETS" << endl;
    cout << "ARE BARREN. WHATEVER HAPPENED HERE, IT MUST HAVE BEEN THE WORK OF THE PERSON WHO STOLE THE PURPLE CRYSTAL." << endl;
    cin >> ah;
    cout << "YOU DECIDE TO GET A CLOSER LOOK FOR MORE INFORMATION." << endl;
    cin >> ah;
    cout << "YOU LAND IN THE MIDDLE OF THE STREET. THERE'S A HOUSE TO YOUR LEFT THAT WOULD BE GREAT FOR EXPLORING. THE REST OF THE STREET, OR WHAT'S LEFT OF IT," << endl;
    cout << "IT'S SO HOT ON THIS PLANET, ONE MAY EVEN SAY YOU'RE BACON OUT HERE!" << endl;
    cout << "ALSO LOOKS PROMISING. WHAT ARE YOU GOING TO DO?" << endl;
    string hole;
    string choice2;
    while(choice2 != "3")
    {
        cout << "1) Take a peak under the deck of the house" << endl << "2) Take a walk around the back of the house, see what you see" << endl;
        cout << "3) Try the door handle" << endl << "4) Is that a writing desk pulled into the street? maybe check that out." << endl << "5) Inspect the ground" << endl;
        cout << "6) Take a look around that light pole that's fallen down." << endl << "7) Look up, maybe there's a hint in the heavens." << endl;
        cout << "8) Turn over that big rock" << endl << "9) Is that something flying through the air? let's catch it!" << endl << "10) Head over to that crater" << endl;
        string choice;
        bool both = false;
        int ic = 0;
        cin >> choice;

        if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7" && choice != "8" && choice != "9" && choice != "10")
        {
            cout << "NOT LOOKING'S NOT GOING TO GET YOU ANYWHERE, CHOOSE AGAIN." << endl;
        }
        else 
        {
            ic = stoi(choice);
        }
        switch(ic)
        {
            case 1:
                cout << "YOU GET DOWN ON YOUR KNEES AND PEER UNDER THE DECK. YOU SPOT SOMETHING, BUT IT'S HIDDEN IN SHADOW, SO YOU REACH YOUR HAND IN." << endl;
                cin >> ah;
                cout << "YOUR HAND GETS BITTEN OFF!" << endl;
                cin >> ah;
                cout << "HAHA JUST KIDDING. IT'S JUST A LEAF. YOU PULL IT OUT AND INSPECT IT: IT LOOKS LIKE A CACTUS LEAF!" << endl;
                cin >> ah;
                break;
            case 2:
                cout << "YOU TAKE A FEW STEPS BEHIND THE HOUSE AND STUMBLE ACROSS A PEICE OF PAPER. IT'S BLANK. MAYBE A SECRET MESSAGE?" << endl;
                cin >> ah;
                if(both == true)
                {
                    cout << "YOU HOLD THE INVISIBLE INK DECODER OVER THE NOTE, AND A MESSAGE APPEARS." << endl;
                    cout << KMAG<<endl << "Wowie Drew, what a day. Galaxatron is still going on about the perfect pizza! he had us destroy the whole planet, just";
                    cout << "because he belived they might have a peice." << endl << "I'm getting sick of this guy, sitting up on his purple crystal throne";
                    cout << "on the red sands planet while we slave over laser blasters. just sick!" << KNRM<<endl << endl;
                    cout << "WELL THAT SEEMS PROMISING." << endl;
                    cin >> ah;
                }
                both = true;
                break;
            case 3:
                cout << "YOU TRY THE DOOR HANDLE, AND IT SWINGS OPEN. THERE'S NOT MUCH IN THE HOUSE EXCEPT FOR A SCARF. HEY -- YOU KNOW THAT MATERIAL.";
                cout << "IT'S FROM YOUR HOME PLANET! WHAT A LOVELY SHADE OF LILAC." << endl;
                cin >> ah;
                break;
            case 4:
                cout << "YOU HEAVE THE DESK UP UNTIL IT IS STANDING. SOME OF THE KNOBS HAVE BROKEN OFF, BUT ONE REMAINS. YOU PULL THE DRAWER OPEN." << endl;
                cin >> ah;
                cout << "INSIDE, THERE IS A SMALL DEVICE LABELED 'INVISIBLE INK DECODER'. I WONDER WHAT IT'S FOR?" << endl;
                cin >> ah;
                if(both == true)
                {
                    cout << "YOU HOLD THE INVISIBLE INK DECODER OVER THE NOTE, AND A MESSAGE APPEARS." << endl;
                    cout << KMAG<< endl << "Wowie Drew, what a day. Galaxatron is still going on about the perfect pizza! he had us destroy the whole planet, just";
                    cout << "because he belived they might have a peice." << endl << "I'm getting sick of this guy, sitting up on his purple crystal throne";
                    cout << "on the red sands planet while we slave over laser blasters. just sick!" <<KNRM<< endl << endl;
                    cout << "WELL THAT SEEMS PROMISING." << endl;
                    cin >> ah;
                }
                both = true;
                break;
            case 5:
                cout << "YOU CROUCH TO INSPECT THE GROUND BENEATH YOUR FEET. THERE ARE YOUR FOOTPRINTS... AND THEN SOME OTHER FOOTPRINTS." << endl;
                cout << "THE OTHER FOOTPRINTS LEAVE BEHIND FLECKS OF RED SAND." << endl;
                cin >> ah;
                break;
            case 6:
                cout << "YOU STEP OVER THE FALLEN LIGHT POLE AND FIND A PIECE OF PIZZA SQUASHED UNDERNEATH." << endl;
                cout <<KMAG<< "\"wow.\" "<<KNRM<<"YOU SAY OUT LOUD. YOU COULDN'T HELP YOURSELF, THIS PIZZA IS BEAUTIFUL. "<<KMAG<<"\"this is quite possibly the most perfect piece of";
                cout << " pizza I have ever seen!\"" << KNRM<<endl;
                cin >> ah;
                break;
            case 7:
                cout << "YOU PEER INTO THE SKY AND SEE A STRANGE OBJECT. THE LIGHT OF THE STARS SEEMED TO CURVE AROUND A SPHERE OF MORE STARS." << endl;
                cout << "THE OTHER STARS LOOK DIFFERENT SOMEHOW. YOU CAN'T PUT YOU FINGER ON IT, BUT THEY JUST LOOK OTHER." << endl;
                cin >> ah;
                cout << "WILL YOU TRAVEL THROUGH THE WORMHOLE?" << endl;
                cout << "1) Adventure awaits!" << endl;
                cout << "2) No way jose, that thing will sqaush me in an instant; I haven't even tried the famed perfect pizza yet!" << endl;
                cin >> hole;
                if(hole == "1")
                {
                    cout << "YOU START UP YOUR ROCKET BLASTERS AND HEAD FOR THE HOLE. AS YOU GET CLOSER, TIME SEEMS TO MELT AND SPACE SEEMS TO SQUEEZE." << endl;
                    cout << "YOU CAN FEEL IT ALREADY, THE OTHER SIDE OF THE HOLE IS A DIFFERENT PLACE." << endl;
                    cin >> ah;
                    cout << "YOUR UNDERSTANDING OF OBJECTS SEEMS TO MELT WITH TIME. THERE IS ONLY COLOR, AND SOMETIMES SHAPE." << endl;
                    cin >> ah;
                    cout << "A Poem: by You" << endl;
                    cin >> ah;
                    cout << "orange is the color of hellfire" << endl;
                    cin >> ah;
                    cout << "it pools in your viens like mollasses in the snow" << endl;
                    cin >> ah;
                    cout << "he sings sonnets and spits time" << endl;
                    cin >> ah;
                    cout << "it slips through your fingers" << endl;
                    cin >> ah;
                    cout << "why does it go so slow" << endl;
                    cin >> ah;
                    cout << "I go so slow" << endl;
                    cin >> ah;
                    cout << "AND WITH THAT, YOU FADE INTO THE FABRIC OF THE UNIVERSE." << endl;
                    lost = true;
                    return;
                }
                break;
            case 8:
                cout << "IT TAKES ALL OF YOUR STRENGTH TO HEAVE OVER THE LARGE ROCK, AND UNDERNEATH YOU FIND" << endl;
                cin >> ah;
                cout << "A SMALLER ROCK! A SMALL RED ROCK, IN FACT." << endl;
                break;
            case 9:
                cout << "YOU CATCH THE OBJECT OUT OF THE AIR. IT IS A SMALL FLUFF. PRETTY! YOU RELEASE IT BACK INTO THE WIND WITH A FLOURISH."  << endl;
                break;
            case 10:
                cout << "YOU VENTURE INTO THE NEAREST CRATER, AND AT THE BOTTOM ALL THAT REMAINS IS A PEBBLE. YOU STUFF IT INTO YOUR POCKET AND CLIMB BACK OUT" << endl;
                cout << endl << " o  (that's a pebble)" << endl << endl;
                pebble = true;
                break;
            default:
                // nothing
                break;
        }
        cout << "DO YOU THINK YOU HAVE ALL THE INFORMATION YOU NEED? PICK A PLANET TO HEAD TO NEXT." << endl;
        cout << "1) Go to the Pizza Planet!" << endl << "2) Go to the Palm Beach Planet" << endl << "3) Go to the Red Sands Planet" << endl;
        cout << "4) Go to the Master's Planet of Great Ideas" << endl << "5) Keep searching" << endl;
        string pc;
        cin >> pc;
        if(pc == "1")
        {
            cout << "TO PIZZA PLANET IT IS!" << endl;
            // to pizza
            next = 6;
            return;
        }
        else if(pc == "2")
        {
            //print palm beach 
            cout << "YOU LAND ON THE BEAUTIFUL PINK SAND BEACHES OF PALM BEACH PLANET. WOW. THIS IS REALLY NICE. YOU COULD STAY FOR A BIT, DRINKING MARGARITAS" << endl;
            cout << "AND RELAXING UNDER THE PINK PALM TREES. BEFORE YOU KNOW IT, THAT IS EXACTLY WHAT YOU ARE DOING. YOU'LL STAY FOR JUST FIVE MORE MINUTES";
            cout << endl;
            cin >> ah;
            cout << "THREE YEARS HAVE PASSED. oops. YOU THINK. YOU HEAD BACK TO YOUR SHIP AND TAKE OFF, ";
            cout << "DREAMING OF YOUR RETURN AND THAT LONG LOST SHAKER OF SALT ALL THE WHILE." << endl;
            cin >> ah;
        }
        else if(pc == "3")
        {
            cout << "YOU HEAD OUT FOR THE RED SANDS PLANET, SURE THAT THERE YOU WILL MEET THE MAN WHO STOLE YOUR PLANET'S CRYSTAL!" << endl;
            // you done did it
            next = 7;
            return;
        }
        else if(pc == "4")
        {
            cout << "YOU HEAD TOWARDS THE SOCIAL MEDIA PLANET. AS YOU PULL YOURSELF INTO ORBIT, YOU REALIZE YOU CAN ALREADY HEAR THE TIKTOK SONGS RADIATING";
            cout << " FROM THE SKIN OF THE PLANET." << endl << "YOU MAKE CONTACT ON YOUR RADIO, AND YOU ARE CONNECT WITH NONE OTHER THAN PAUL." << endl;
            cin >> ah;
            cout << "JAKE OR LOGAN? YOU'LL NEVER KNOW. "<<KRED<<"\"you are not welcome here,\" "<<KNRM<<"PAUL SAYS, "<<KRED<<"\"if you cannot influence, you cannot land\"" << KNRM<<endl;
            cin >> ah;
            cout << "I GUESS THAT'S THAT. YOU TURN AROUND AND BLAST BACK OFF. EAT MY ROCKET TRAIL, INFLUENCERS!" << endl;
            cin >> ah;
            // social media planet
        }
    }
}
void Game::sneak()
{
    string ah;
    cout << "LOOKS LIKE YOU'VE LANDED ON THE PLANET EVILOLI. YOU'VE STUDIED THESE GUYS -- BIG SURPRISE -- THEY'RE EVIL." << endl;
    cin >> ah;
    cout << "THIS ONE MAY BE DANGEROUS, YOU SUGGEST TO YOUR NEW FRIEND THAT THEY STAY IN THE SHIP. THEY AGREE, THIS PLANET SEEMS SPOOKY." << endl;
    cin >> ah;
    cout << "FIGHTING, YOU'VE DECIDED, WOULD NOT BE IDEAL. IF YOUR STUDIES AT PURPLE PEOPLE ACADEMY TAUGHT YOU ANYTHING, IT'S THAT EVILOLIS ARE NOTORIOUSLY" << endl;
    cin >> ah;
    cout << "HARD TO BEAT. HEAD SHOTS ARE USELESS, CROTCH SHOTS ARE MINIMALLY HELPFUL AT BEST. no -- YOU DECIDE -- this one is going to take some super" << endl;
    cout << "special sneaking skills! YOU SNEAK OFF THE SHIP AND INTO TOWN. AS YOU ROUND A CORNER, YOU COME FACE TO FACE WITH AN EVILOLI! WHAT DO YOU DO?" << endl;
    cout << "1) Scream! That was scary!" << endl << "2) Stay Quiet -- That's sneaking 101" << endl;
    // planet intro 
    // sneak?
    // yell or stay quiet
    string yell;
    cin >> yell;
    bool battle = false;
    if(yell == "1")
    { 
        cout << "YOU SCREAM AND HE PUNCHES YOU IN THE FACE. THE BATTLE HAS BEGUN!" << endl;
        battle = true;
    }
    else if(yell == "2")
    {
        cout << "YOU SAY NOTHING AND SULK PAST SNEAKILY. HE BARELY EVEN NOTICED YOU." << endl;
        cin >> ah;
        cout << "YOU SEE ANOTHER EVILOLI APPROACHING AND THIS ONE MAKES EYE CONTACT. YOU'VE GOTTA DO SOMETHING FAST, OR THIS IS GOING TO GET AWKWARD." << endl;
        cout << "1) Say heyo daddy-o" << endl << "2) Just tip your hat and smile; sneakily of course" << endl;
        // say hi or tip hat
        string greet;
        cin >> greet;
        if(greet == "1")
        {
            cout << "UH OH, MAYBE DADDY-O WASN'T THE RIGHT CALL ON THAT ONE. HE COMES AT YOU, LASER BLASTER READY FOR A FIGHT!" << endl;
            battle = true;
        }
        else if(greet == "2")
        {
            cout << "THE EVILOLI SEES YOU TIP YOUR HAT, AND CALLS OUT A GREETING" << endl;
            cin >> ah;
            cout << KGRN<<"\"Oh hey Kyle!\" HE CALLS POLITELY. OH SHOOT, NOW YOU GOTTA KNOW HIS NAME OR ELSE YOU'RE A BAD FRIEND!" <<KNRM<< endl;
            cout << "1) Oh hey Jerry!" << endl << "Oh hey Richard!" << endl;

            // jerry or richard
            string call;
            cin >> call;
            if(call == "1")
            {
                cout << "HE BLINKS AND LOOK AT YOU." << endl << KGRN<<"\"Hey,\" "<<KNRM<<"HE SAYS, "<<KGRN<<"\"you're not Kyle. How'd you know my name was Jerry?\"" << KNRM<<endl;
                cin >> ah;
                cout << "YOU FLOUNDER FOR A MOMENT. "<<KMAG<< "\"You just... radiate Jerry\" "<<KNRM<<"YOU DECIDE TO SAY. SEEMS LIKE THAT WAS THE RIGHT THING." << endl;
                cin >> ah;
                cout <<KGRN<< "\"You know what,\" "<<KNRM<<"HE SAYS, "<<KGRN<<"\"I do radiate Jerry. thanks for noticing. You know what? Galaxatron never knows my name.\"" << KNRM<<endl;
                cin >> ah;
                cout << KMAG<<"\"Galaxatron?\" "<<KNRM<<"YOU ASK, "<<KMAG<<"\"Who's that?\"" << KNRM<<endl;
                cin >> ah;
                cout << KGRN<<"\"Our manager,\" "<<KNRM<<"HE REPLIES, "<<KGRN<<"\"The king of the universe or whatever it is he's calling himself. he told us, he said, you just take over this";
                cout << endl << "planet real quick, and I'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
                cin >> ah;
                cout << "But you know what?\" "<<KNRM<<"HE SAID, "<<KGRN<<"\"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" << KNRM<<endl;
                cin >> ah;
                cout <<KMAG<< "\"I can help you fix that,\" "<<KNRM<<"YOU SAY, "<<KNRM<<"\"You know where this Galaxatron is right now?\"" << KNRM<<endl;
                cin >> ah;
                cout << KGRN<<"\"Oh yeah,\" "<<KNRM<<"HE RESPONDS, "<<KGRN<<"\"You got a ship?\"" << endl << KMAG<<"\"Oh,\" "<<KNRM<<"YOU REPLY, "<<KMAG<<"\"I sure do.\"" << KNRM<<endl;
                cin >> ah;
                cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
                next = 7;
                // sneak good + firend
                friends[1] = "alein 2";
                return; 
            }
            else if(call == "2")
            {
                cout << "THAT MADE HIM ANGRY. I DON'T THINK RICHARD WAS HIS NAME. HE REALLY JUST SEEMED LIKE A DICK." << endl;
                cout << "HE COMES AT YOU, PULLING HIS LASER GUN FROM HIS BELT. IT'S TIME TO FIGHT." << endl;
                battle = true;
            }
            else 
            {
                cout << "YOUR LACK OF RESPONSE MADE HIM ANGRY. FIGURES; THESE DAYS YOU DON'T REMEMBER A NAME AND SUDDENLY GUNS ARE BLAZING." << endl;
                cout << "HE COMES AT YOU, PULLING HIS LASER FROM HIS BELT. IT'S TIME TO FIGHT." << endl;
                battle = true;
        
            }
        }
        else
        {
            cout << "HE APPROACHES YOU, ALREADY REACHING FOR HIS LASER. YOU'RE DEAD MEAT." << endl;
            battle = true;
        }
    }
    else
    {
        cout << "YOU ATTEMPT TO YELL, BUT CHOKE ON IT AND DOUBLE OVER. THE ALIEN COMES OVER TO HELP." << endl;
        cout << KGRN<<"\"Great Galaxatron,\" "<<KNRM<<"he says, "<<KGRN<<"\"Are you alright?\"" <<KNRM<< endl;
        cout << KMAG<<"\"Galaxatron?\" "<<KNRM<<"YOU ASK, "<<KMAG<<"\"Who's that?\"" <<KNRM<< endl;
        cin >> ah;
        cout << KGRN<<"\"Our manager,\" "<<KNRM<<"HE REPLIES, "<<KGRN<<"\"The king of the universe or whatever it is he's calling himself. he told us, he said, you just take over this";
        cout << endl << "planet real quick, and I'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
        cin >> ah;
        cout << "But you know what?\" "<<KNRM<<"HE SAID, "<<KGRN<<"\"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" <<KNRM<< endl;
        cin >> ah;
        cout << "YOU STAND UP AGAIN. "<<KMAG<<"\"I can help you fix that,\" YOU SAY, \"You know where this Galaxatron is right now?\"" <<KNRM<< endl;
        cin >> ah;
        cout <<KGRN<< "\"Oh yeah,\" "<<KNRM<<"HE RESPONDS, "<<KGRN<<"\"You got a ship?\"" << endl<<KMAG << "\"Oh,\" "<<KNRM<<"YOU REPLY, "<<KMAG<<"\"I sure do.\"" << KNRM<<endl;
        cin >> ah;
        cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
        next = 7;
        // sneak good + firend
        friends[1] = "alein 2";
        return; 
    }

    if(battle == true)
    {
        bool gottem = false;
        bool nF = false;
        int hits = 0;
        int rounds = 0;

        cout << "YOU'VE FAILED YOUR SNEAKY MISSION! AN EVILOLI SPOTS YOU AND COMES AT YOU! YOU HAVE TO THINK FAST!" << endl;
        while(gottem == false && rounds <= 3)
        {
            cout << "WHERE WILL YOU HIT HIM?" << endl << "1) Go for a headshot" << endl << "2) Hit his oncoming hand" << "3) Stab him in the heart" << endl;
            cout << "4) Gut punch that sucker" << endl << "5) Kick him in the groin" << endl << "6) Stomp on his right foot" << endl << " 7) Stub that left pinkie toe";
            cout << endl;
            // will you hit 
            // 1. head
            // 2. hand
            // 3. heart
            // 4. gut 
            // 5. groin
            // 6. right foot 
            // 7. left toe

            string choice;
            int ic;
            cin >> choice;
            if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7")
            {
                cout << "WAY TO WIFF IT BRO" << endl;
                cout << "HE CLOCKS YOU IN THE FACE WITH HIS LASER GUN. VERY CINEMATIC BUT SEEMS A LITTLE IRONIC." << endl;
                cin >> ah;
                cout << "IF I'M BEING TOTALLY HONEST I CAN'T DEFINE IRONIC, BUT LET'S JUST BOTH PRETEND THAT WAS THE RIGHT USE." << endl;
                ic = 8;
            }
            else
            {
                ic = stoi(choice);
            }
            switch(ic)
            {
                case 1: 
                    hits = hits + 1;
                    cout << "HE DOESN'T EVEN FLINCH; DID YOU FORGET TO READ UP ON THE EVILOLIS? THEIR BRAINS AREN'T IN THEIR HEADS!" << endl;
                    cin >> ah;
                    cout << "HE GOES TO KICK YOU IN THE FACE WITH A ROUNDHOUSE KICK, BUT LOOKS LIKE HE MISJUDGED HOW SHORT HE WAS AND HIT YOU IN THE CROTCH INSTEAD.";
                    cout << " OUCH." << endl;
                    // print thats not the brain bit
                    break;
                case 2: 
                    hits = hits + 5;
                    cout << "YOU SLAP HIS HAND WITH YOUR HAND. WOW. NOW THAT WAS A SOLID HIGH FIVE RIGHT THERE. ALL OF THE RAGE AND AGRESSION SEEMS TO MELT OUT OF HIM";
                    cout << endl;
                    cin >> ah;
                    cout << "YOU'VE MADE YOURSELF A FRIEND!" << endl;
                    nF = true;
                    // print high five!
                    break;
                case 3: 
                    hits = hits + 3;
                    cout << "YOU SPIT SOME SICK BARS AT THAT GUY. WOAH, LOOKS LIKE THOSE INSULTS HIT HIM HARD. RIGHT IN THE HEART!" << endl;
                    cin >> ah;
                    // you insult him
                    cout << "HE BEGINS TO CRY. OH MAN. YOU FEEL BAD NOW. WAY TO GO." << endl;
                    break;
                case 4: 
                    hits = hits + 2;
                    cout << "YOU HIT HIM IN THE STOMACH AND HE DOUBLES OVER. GOOD HIT!" << endl;
                    cin >> ah;
                    cout << "HE RECOVERS AND PUNCHES YOU BACK IN THE GUT. AN EYE FOR AN EYE I GUESS." << endl;
                    break;
                case 5: 
                    hits = hits + 1;
                    cout << "YOU NAIL HIM IN THE GROIN. HE DOESN'T SEEM HURT AT ALL. JUST OFFENDED." << endl;
                    cin >> ah;
                    cout << "HE THROWS HANDS. YOU'RE NOT DOING SO HOT AFTER THAT WHOLE EVENT." << endl;
                    // he seems unfased 
                    break;
                case 6: 
                    hits = hits + 3;
                    cout << "YOU STOMP ON HIS FOOT."<<KGRN<<" \"Ouch!\" "<<KNRM<<"NICE HIT!" << endl;
                    cin >> ah;
                    cout << "HE RECOVERS QUICKLY AND USES HIS MIND POWERS TO MAKE YOU PUNCH YOURSELF IN THE FOOT. weird, YOU THINK, but okay." << endl;
                    // you stomp on his foot, ouch that hurt! nice hit!
                    break;
                case 7: 
                    hits = hits + 5;
                    cout << "YOU STUB HIS LEFT PINKIE TOE AND HE COLLAPSES IN PAIN. NOW THAT'S WHAT I CALL A CRITICAL HIT." << endl;
                    cin >> ah;
                    // now that's a crit hit!
                    break;
                default:
                    cout << "WAY TO WIFF IT BRO" << endl;
                    cout << "HE CLOCKS YOU IN THE FACE WITH HIS LASER GUN. VERY CINEMATIC BUT SEEMS A LITTLE IRONIC." << endl;
                    cin >> ah;
                    cout << "IF I'M BEING TOTALLY HONEST I CAN'T DEFINE IRONIC, BUT LET'S JUST BOTH PRETEND THAT WAS THE RIGHT USE." << endl;
                    break;
            }
            rounds++;
            if(hits >= 5)
            {
                gottem = true;
            }
        }
        if(gottem == false)
        {
            cout << "YOU FALL TO THE GROUND IN DEFEAT. HE RAISES HIS LASER BLASTER. THE LAST THING YOU SEE IS THE MOUTH OF THAT GUN STARING BACK AT YOU." << endl;
            return;
            lost = true;
        }
        else if(nF == false)
        {
            cout << "HE FALLS TO THE GROUND IN DEFEAT. YOU PICK UP HIS LASER GUN AND PUT IT TO HIS HEAD. DO YOU PULL THE TRIGGER?" << endl;
            cout << "1) Yes" << endl << "2) No" << endl;
            string shoot;
            cin >> shoot;
            if(shoot == "1")
            {
                cout << "YOU PULL THE TRIGGER. ALL OF THE OTHER EVILOLIS SURROUND YOU. THE LAST THING YOU SEE IS THE LIGHT OF A HUNDRED LASERS." << endl;
                lost = true;
            }
            else if(shoot == "2")
            {
                cout << "HE PEEKS AN EYE OPEN. "<<KGRN<<"\"You're not going to shoot me?\" "<<KNRM<<"HE ASKS. IN THAT INSTANT HE LOOKS SO HUMAN. "<<KMAG<<"\"No,\" "<<KNRM<<"YOU RESPOND," << endl;
                cout <<KMAG<< " \"You seem like a pretty cool dude.\" " <<KNRM<< endl;
                cin >> ah;
                cout <<KGRN<< "\"You know what,\" "<<KNRM<<"HE SAYS, "<<KGRN<<"\"I am a pretty cool dude. Thanks for noticing. You know what? Galaxatron never called me cool.\"" << KNRM<<endl;
                cin >> ah;
                cout << KMAG<<"\"Galaxatron?\" "<<KNRM<<"YOU ASK, "<<KMAG<<"\"Who's that?\"" << KNRM<<endl;
                cin >> ah;
                cout << KGRN<<"\"Our manager,\" " << KNRM<<"HE REPLIES, "<<KGRN<<"\"The king of the universe or whatever it is he's calling himself. He told us, he said, you just take over this";
                cout << endl << "planet real quick, and I'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
                cin >> ah;
                cout << "But you know what?\" " << KNRM<<"HE SAID, "<<KGRN<<"\"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" << KNRM<<endl;
                cin >> ah;
                cout << "YOU LOWER THE PISTOL FROM HIS HEAD. "<<KMAG<<"\"You know where this Galaxatron is right now?\"" <<KNRM<< endl;
                cin >> ah;
                cout <<KGRN<< "\"Oh yeah,\" "<<KNRM<<"HE RESPONDS, "<<KGRN<<"\"You got a ship?\"" << KMAG<<endl << "\"Oh,\" "<<KNRM<<"YOU REPLY, "<<KMAG<<"\"I sure do.\"" <<KNRM<< endl;
                cin >> ah;
                cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
                next = 7;
                friends[1] = "alien";
                return;
            }
            else
            {
                cout << "YOU REALIZE YOU DON'T EVEN KNOW WHERE THE TRIGGER IS ON THIS GUN. TIME TO PRETEND YOU NEVER INTENDED TO SHOOT HIM." << endl;
                cout << "HE PEEKS AN EYE OPEN. "<<KGRN<<"\"You're not going to shoot me?\" "<<KNRM<<"HE ASKS. IN THAT INSTANT HE LOOKS SO HUMAN. "<<KMAG<<"\"No,\" "<<KNRM<<"YOU RESPOND," << endl;
                cout <<KMAG<< " \"You seem like a pretty cool dude.\" " << KNRM<<endl;
                cin >> ah;
                cout <<KGRN<< "\"You know what,\" "<<KNRM<<"HE SAYS, "<<KGRN<<"\"I am a pretty cool dude. Thanks for noticing. You know what? Galaxatron never called me cool.\"" <<KNRM<< endl;
                cin >> ah;
                cout << KMAG<<"\"Galaxatron?\" "<<KNRM<<"YOU ASK, "<<KMAG<<"\"who's that?\"" <<KNRM<< endl;
                cin >> ah;
                cout << KGRN<<"\"Our manager,\"" << KNRM<<"HE REPLIES, "<<KGRN<<"\"the king of the universe or whatever it is he's calling himself. He told us, he said, you just take over this";
                cout << endl << "planet real quick, and I'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
                cin >> ah;
                cout << "But you know what?\" "<<KNRM<<"HE SAID, "<<KGRN<<"\"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" << KNRM<<endl;
                cin >> ah;
                cout << "YOU LOWER THE PISTOL FROM HIS HEAD. "<<KMAG<<"\"You know where this Galaxatron is right now?\"" <<KNRM<< endl;
                cin >> ah;
                cout <<KGRN<< "\"Oh yeah,\" "<<KNRM<<"HE RESPONDS, "<<KGRN<<"\"You got a ship?\"" <<KMAG<< endl << "\"Oh,\" "<<KNRM<<"YOU REPLY, "<<KMAG<<"\"I sure do.\"" << KNRM<<endl;
                cin >> ah;
                cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
                friends[1] = "alien";
                next = 7;
                return;
            }
        }
        else
        {
            cout << KGRN<<"\"Wow!\" "<<KNRM<<"HE SAYS, "<<KGRN<<"\"You sure are one cool guy. I don't get why Galaxatron hates my high fives!" <<KNRM<< endl;
            cin >> ah;
            cout << KMAG<<"\"Galaxatron?\" "<<KNRM<<"YOU ASK, "<<KMAG<<"\"Who's that?\"" <<KNRM<< endl;
            cin >> ah;
            cout <<KGRN<< "\"Our manager,\" "<<KNRM<<"HE REPLIES, "<<KGRN<<"\"The king of the universe or whatever it is he's calling himself. He told us, he said, you just take over this";
            cout << endl << "planet real quick, and I'll grab myself the most powerful crystal in existence to get you all a bonus!" << endl;
            cin >> ah;
            cout << "But you know what?\" "<<KNRM<<"HE SAID, "<<KGRN<<"\"All of our bonuses have just been pizza with sub-par toppings! I'm sick of subpar pizza!\"" << KNRM<<endl;
            cin >> ah;
            cout << "YOU LOWER THE PISTOL FROM HIS HEAD. "<<KMAG<<"\"You know where this Galaxatron is right now?\"" <<KNRM<< endl;
            cin >> ah;
            cout <<KGRN<< "\"Oh yeah,\" "<<KNRM<<"HE RESPONDS, "<<KGRN<<"\"You got a ship?\"" << KMAG<<endl << "\"Oh,\" "<<KNRM<<"YOU REPLY, "<<KMAG<<"\"I sure do.\"" <<KNRM<< endl;
            cin >> ah;
            cout << "THE TWO OF YOU HEAD FOR THE SHIP AND BLAST OFF TOWARD THE RED SANDS PLANET." << endl;
            friends[1] = "alien";
            next = 7;
            return;
        }
    }
    return;
}
void Game::pp()
{
    bool perf1=false;
    bool perf2=false;
    bool perf3=false;
    bool perf4=false;
    bool perf5=false;
    bool valid =false;
    bool finished=false;
    int numToppings=0;
    string choice;
    int ic;
    string ah;
    cout<<"YOU APPROACH A PLANET THAT HAS A GIANT WEDGE IN THE MIDDLE OF IT. IT LOOKS STRANGELY LIKE A PIECE OF PIZZA."<<endl;
    cin>>ah;
    cout << KYEL<< "   ,= ”``” =." << endl;
    cout << "  / =======  \\ " << endl;
    cout << " |\\  \\ o /  /c| " << endl;
    cout <<  "  \\=  \\*/  ==/" << endl;
    cout << "    ‘=.V.=’" << KNRM<< endl;
    cout<<endl;
    cin>>ah;
    cout<<"YOUR SHIP LANDS AND YOU DECIDE TO WALK AROUND AND SEE WHERE YOU ARE. AFTER WALKING FOR A FEW MINUTES, "<<endl;
    cout<<"A GIANT PIECE OF PIZZA WALKS UP TO YOU."<<endl;
    cin>>ah;
    cout <<KYEL<< "   =========== " << endl;
    cout << "   \\(o) ^ (o)/" << endl;
    cout << "    \\ ----- / " << endl;
    cout << "   / \\     / \\ " << endl;
    cout << "  /   \\   /   \\" << endl;
    cout << "      |\\ /|" << endl;
    cout << "     _| V |_" << KNRM<<endl << endl;
    cout<<"PIZZA: "<<KYEL<<"Hi! My name is Crusty Carl! I've lived on this here planet for as long as I can remember."<<endl;
    cout<<"Most people who visit like to make a pizza. Speaking of which, you sure do look hungry. Follow me!"<<KNRM<<endl;
    cin>>ah;
    cout<<"A LONG WALK THROUGH PIZZA FOREST LATER, YOU ARRIVE AT A PIZZA MAKING STATION."<<endl;
    cin>>ah;
    cout <<KYEL<< "   =========== " << endl;
    cout << "   \\(o) ^ (o)/" << endl;
    cout << "    \\ ----- / " << endl;
    cout << "   / \\     / \\ " << endl;
    cout << "  /   \\   /   \\" << endl;
    cout << "      |\\ /|" << endl;
    cout << "     _| V |_" << KNRM<<endl << endl;
    cout<<"CRUSTY CARL: "<<KYEL<<"Here ya go! If you look to your right, you'll see a list of all the possible topics. Make sure to choose wisely"<<endl;
    cout<<"because you can only choose 5 total toppings."<<KNRM<<endl;
    cin>>ah;
    while (finished == false)
    {
        valid=false;
        cout<<KYEL<<"Time to select your topping! Pick the number of the topping you want."<<KNRM<<endl;
        cout<<"HERE ARE THE POSSIBLE TOPPINGS:"<<endl;
        cout<<"1. Pepperoni"<<endl;
        cout<<"2. Sausage"<<endl;
        cout<<"3. Cream Cheese"<<endl;
        cout<<"4. Bell Peppers"<<endl;
        cout<<"5. Chicken"<<endl;
        cout<<"6. Bacon"<<endl;
        cout<<"7. Onions"<<endl;
        cout<<"8. Olives"<<endl;
        cout<<"9. Mozzarella"<<endl;
        cout<<"10. Garlic"<<endl;
        cout<<"11. Gouda cheese"<<endl;
        cout<<"12. Pineapple"<<endl;
        cout<<"13. Ham"<<endl;
        cout<<"14. Mushrooms"<<endl;
        cout<<"15. Spinach"<<endl;
        cout<<"16. Meatballs"<<endl;
        cout<<"17. Pesto"<<endl;
        cout <<"18. Anchovy"<<endl;
        cout<<"19. Tomatoes"<<endl;
        cout<<"20. Chorizo"<<endl;
        cin>>choice;
        if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7" && choice != "8" && choice != "9" && choice != "10" && choice != "11" && choice != "12" && choice != "13" && choice != "14" && choice != "15" && choice != "16" && choice != "17" && choice != "18" && choice != "19" && choice != "20" )
        {
            ic = 0;
        }
        else
        {
            ic = stoi(choice);
        }
        if (ic>0 && ic<21)
        {
            valid = true;
        }
        while (valid==false)
        {
            cout<<KYEL<<"Woah there. We only have so many toppings. Please pick one of the toppings we have on the list."<<endl;
            cout<<"They're pretty delicious, if I do say so myself."<<KNRM<<endl;
            cin>>choice;
            if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7" && choice != "8" && choice != "9" && choice != "10" && choice != "11" && choice != "12" && choice != "13" && choice != "14" && choice != "15" && choice != "16" && choice != "17" && choice != "18" && choice != "19" && choice != "20" )
            {
                ic = 0;
            }
            else
            {
                ic = stoi(choice);
            }
            if (ic>0 && ic<21)
            {
                valid = true;
            }
        }
        if ( ic==1)
        {
            cout<<KYEL<<"Good choice! Going with a classic!"<<KNRM<<endl;
            perf1=true;
        }
        else if (ic==2)
        {
            cout<<KYEL<<"Yum! You can never go wrong with sausage!"<<KNRM<<endl;
        }
        else if (ic==3)
        {
            cout<<KYEL<<"What a great choice! Cream cheese is one of the hidden gems of pizza"<<KNRM<<endl;
        }
        else if (ic==4)
        {
            cout<<KYEL<<"Nice! Bell peppers always seem to add a fun twist to a pizza"<<KNRM<<endl;
        }
        else if (ic==5)
        {
            cout<<KYEL<<"Only a chicken would pick that as a topping. HAHAHA chicken! Get it?!"<<KNRM<<endl;
        }
        else if (ic==6)
        {
            cout<<KYEL<<"Oooh, bacon. Now THAT is a truly incredible choice."<<KNRM<<endl;
            perf2=true;
        }
        else if (ic==7)
        {
            cout<<KYEL<<"Honestly, not my favorite. But you do you I guess."<<KNRM<<endl;
        }
        else if (ic==8)
        {
            cout<<KYEL<<"Mmmmmmm. Olives and pizza are just meant to be together."<<KNRM<<endl;
            perf3=true;
        }
        else if (ic==9)
        {
            cout<<KYEL<<"There's no such thing as too much cheese! I mean... unless you're lactose intolerant..."<<KNRM<<endl;
        }
        else if (ic==10)
        {
            cout<<KYEL<<"Garlic adds something so nice to the taste of a good 'ole pizza pie."<<KNRM<<endl;
        }
        else if (ic==11)
        {
            cout<<KYEL<<"What a Gouda choice! This is sure to bring this pizza up a notch."<<KNRM<<endl;
            perf4=true;
        }
        else if (ic==12)
        {
            cout<<KYEL<<"Pineapple? On pizza? Alright then... (heathen)"<<KNRM<<endl;
        }
        else if (ic==13)
        {
            cout<<KYEL<<"Ah, ham. The inferior Canadian Bacon."<<KNRM<<endl;        
        }
        else if (ic==14)
        {
            cout<<KYEL<<"Mushroom on pizza? You must be a fungi!"<<KNRM<<endl;
            perf5=true;
        }
        else if (ic==15)
        {
            cout<<KYEL<<"Wow, you must be healthy, putting spinach on pizza."<<KNRM<<endl;
        }
        else if (ic==16)
        {
            cout<<KYEL<<"What a fun mix of Italian cuisine!"<<KNRM<<endl;
        }
        else if (ic==17)
        {
            cout<<KYEL<<"Oooh you must have a mature flavor palate."<<KNRM<<endl;
        }   
        else if (ic==18)
        {
            cout<<KYEL<<"Fish and pizza don't mix."<<KNRM<<endl;
        }
        else if (ic==19)
        {
            cout<<KYEL<<"The sauce already has tomatoes but I like your dedication to the vegetable... Fruit... Vegetruit?"<<KNRM<<endl;
        }
        else if (ic==20)
        {
            cout<<KYEL<<"Oh boy! Chorizo is made to be on pizzas."<<KNRM<<endl;
        }
        numToppings++;
        if (numToppings<4)
        {
            cout<<KYEL<<"You have space for "<<5-numToppings<<" more toppings."<<endl;
            cout<<"Do you want to add another topping?"<<KNRM<<endl;
            cout<<"1. Yes"<<endl<<"2. No"<<endl;
            cin>>choice;
            if(choice != "1" && choice != "2")
            {
                ic = 0;
            }
            else
            {
                ic = stoi(choice);
            }
            if (ic==2)
            {
                finished=true;
                cout<<KYEL<<"Quitting while you're ahead. I commend your confidence in your pizza-making abilities."<<KNRM<<endl;
            }
        }
        if (numToppings==4)
        {
            cout<<KYEL<<"Oh boy! Your pizza is getting pretty full. There isn't MUSHROOM for more toppings. In fact,"<<endl; 
            cout<<"it looks like there is only space for one more!"<<endl;
            cout<<"Do you want to add another topping?"<<KNRM<<endl;
            cout<<"1. Yes"<<endl<<"2. No"<<endl;
            cin>>choice;
            if(choice != "1" && choice != "2")
            {
                ic = 0;
            }
            else
            {
                ic = stoi(choice);
            }
            if (ic==2)
            {
                finished=true;
                cout<<KYEL<<"Quitting while you're ahead. I commend your confidence in your pizza-making abilities."<<KNRM<<endl;
            }
        }
        if (numToppings==5)
        {
            finished=true;
        }
    }
    if (perf1==true && perf2==true && perf3==true && perf4==true && perf5==true)
    {
        
        cout <<KYEL<< "   =========== " << endl;
        cout << "   \\(o) ^ (o)/" << endl;
        cout << "    \\ ----- / " << endl;
        cout << "   / \\     / \\ " << endl;
        cout << "  /   \\   /   \\" << endl;
        cout << "      |\\ /|" << endl;
        cout << "     _| V |_" << KNRM<<endl << endl;
        cout<<"CRUSTY CARL LOOKS AT YOU WITH PURE ADMIRATION. TEARS BEGIN TO FORM IN HIS EYES."<<endl;
        cout<<"CRUSTY CARL: "<<KYEL<<"Now THAT is quite possibly... the most beautiful pizza I've ever seen."<<endl;
        cout<<"I would go as far to say that is the PERFECT pizza. A Pizza made in God's own image."<<endl;
        cout<<"I can't belive I've seen such beauty with my own eyes."<<KNRM<<endl;
    }
    cout<<"CRUSTY CARL LOOKS AT YOU FOR A FEW SECONDS BEFORE SPEAKING."<<endl;
    cin>>ah;
    cout <<KYEL<< "   =========== " << endl;
    cout << "   \\(o) ^ (o)/" << endl;
    cout << "    \\ ----- / " << endl;
    cout << "   / \\     / \\ " << endl;
    cout << "  /   \\   /   \\" << endl;
    cout << "      |\\ /|" << endl;
    cout << "     _| V |_" << KNRM<<endl << endl;
    cout<<"CRUISTY CARL: "<<KYEL<<"Say, you're a pretty good pizza maker and, well, I've had a lot of fun hanging out with you today."<<endl;
    cout<<"Look, I love Pizza Planet, but my dream is to travel the galaxy, go on adventures, ya know?"<<KNRM<<endl;
    cin>>ah;
    cout<<"LOOKING AT CRUSTY CARL'S FACE, IT'S CLEAR WHAT SHOULD BE DONE. YOU REPLY, "<<KMAG<<"\"Come along with me Carl, I always have room for one more.\""<<KNRM<<endl;
    cin>>ah;
    cout<<"CRUSTY CARL: "<<KYEL<<"Really?! Gee whiz, that's amazing! Thanks pal!"<<KNRM<<endl;
    cout<<"THE TWO OF YOU BOARD THE SHIP AND BLAST OFF TOWARD THE CRYSTAL, ONE STEP CLOSER TO RETURNING POWER TO YOUR HOME."<<endl;
    friends[1]="carl";
    next = 7;
}
void Game::boss()
{
    int random=0;
    bool fight=false;
    bool gameOver=false;
    string ah;
    string choice;
    int ic;
    cout<<"YOU APPROACH A LARGE PLANET WITH MANY SURROUNDING MOONS. THE SHEER SIZE OF THE PLANET IS OVERWHELMING."<<endl;
    cout <<KRED<< endl << "   ,= ”``” =." << endl;
    cout << "  /~~~~~~~~~~\\ " << endl;
    cout <<  " |~~~~~~~~~~~~| " << endl;
    cout << "  \\~~~~~~~~~~/" << endl;
    cout << "    ‘=.__.=’" << KNRM<<endl<<endl;
    cin>>ah;
    cout<<"AS YOU GET CLOSER TO THE SURFACE, YOU SEE AN ENTRANCE TO WHAT LOOKS LIKE A CAVE. YOU LAND YOUR SHIP AND, ALONGSIDE YOUR FRIENDS, WALK INSIDE"<<endl;
    cin>>ah;
    cout<<"AS SOON AS YOU ENTER, IT BECOMES CLEAR THE OUTSIDE WAS A FACADE. YOU LOOK AROUND AND SEE THE MOST INTRICATELY DESIGNED PALACE."<<endl;
    cout<<"AFTER FOLLOWING A LONG HALLWAY, YOU FIND YOURSELF IN A THRONE ROOM. RIGHT IN FRONT OF YOU ARE THE PURPLE CRYSTALS! YOU RUN FORWARD "<<endl;
    cout<<"TO GRAB THEM BEFORE REALIZING THAT A MAN IS SITTING IN THE THRONE, WATCHING YOU. YOU STOP AND LOOK BACK AT HIM."<<endl;
    cout << endl <<KRED<< "            ______ " << endl;
    cout << "           |      |" << endl;
    cout << "        ___|______|___" << endl;
    cout << "       /              \\" << endl;     
    cout << "      |   (o)  ^  (O)  | " << endl;
    cout << "      |       ____     | " << endl;
    cout << "       \\       ;;     /" << endl;
    cout << "/\\     /              \\     /\\" << endl;
    cout << "\\ \\   /                \\   / /" << endl;
    cout << " \\ \\_/                  \\_/ /" << endl;
    cout << "  \\___/|              |\\___/" << endl;
    cout << "       |              |" << endl;
    cout << "       |              |" << KNRM<<endl;
    cin>>ah;
    cout<<"MAN: "<<KRED<<"Now who are you and what are you doing in my palace?"<<KNRM<<endl;
    cout<<"1. TO FIGHT! 2. TO TALK."<<endl;
    cin >> choice;
    if(choice != "1" && choice != "2")
    {
        ic = 0;
    }
    else
    {
        ic = stoi(choice);
    }
    if (ic==1)
    {
        cout<<"YOU RESPOND: "<<KMAG<<"\"My name is "<<name<<" and I'm here to fight. Give me back the purple crystals! \""<<KNRM<<endl;
        fight=true;
    }
    else if (ic==2)
    {
        cout<<"YOU RESPOND: "<<KMAG<<"\"My name is "<<name<<" and I'm here to talk. Who are you? \""<<KNRM<<endl;
        fight=false;
    }
    else
    {
        cout<<"YOU RESPOND: "<<KMAG<<"\"My name is "<<name<<" and... well... \""<<KNRM<<endl;
        cin>>ah;
        cout<<"YOU THINK ABOUT WHY YOU'RE THERE, AND BECOME A BIT EXISTENTIAL. IN FACT, YOU GET A BIT TOO EXISTENTIAL AND FORGET TO ANSWER."<<endl;
        cout<<"THE MAN LAUGHS AT YOU AND SAYS:"<<KRED<<" silly kid, stay a while and talk why don't you."<<KNRM<<endl;
        cin>>ah;
        fight =false;
    }
    if (fight==true)
    {
        //program the battle function first lol
        battle(1);
    }
    else if (fight==false)
    {
        cout<<"MAN: "<<KRED<<"My name is Galaxatron and I am the King of the Universe. As such, I take what I want when I want it. I wanted your"<<endl;
        cout<<"Planet's purple crystals, so I took them. Easy as that. Now, it is customary to bring kings gifts. What have you brought me?"<<KNRM<<endl<<endl;
        cout<<"WHAT DO YOU GIVE THE KING?"<<endl;
        cout<<"1. CRUSTY CARL"<<endl;
        cout<<"2. NOTHING"<<endl;
        if (pebble==true)
        {
            cout<<"3. YOUR PEBBLE"<<endl;
        }
        cin>>choice;
        if(choice != "1" && choice != "2" && choice != "3")
        {
            ic = 0;
        }
        else
        {
            ic = stoi(choice);
        }
        switch (ic)
        {
            case 1:
                if (friends[1]!="carl")
                {
                    cout<<"YOU LOOK AROUND AND MAKE SOMETHING UP OFF THE TOP OF YOUR HEAD. YOU SAY:"<<KMAG<<" \"Here! take Crusty Carl!\""<<KNRM<<endl;
                    cin>>ah;
                    cout<<"GALAXATRON: "<<KRED<<"... What? That doesn't make any sense. Who is Carl in the first place?"<<KNRM<<endl;
                    cout<<"YOU THINK FOR A SECOND AND REALIZE YOU HAVE NO EXPLANATION. "<<KMAG<<"\"Umm... you know, Carl?\" "<<KNRM<<endl;
                    cout<<"GALAXATRON: "<<KRED<<"No, I don't know a Carl. You're wasting too much of my time, so now I'm gonna make you leave!"<<KNRM<<endl;
                    battle(1);
                }
                else
                {
                    cout<<"YOU LOOK AROUND AND NOTICE CRUSTY CARL SITTING AROUND, OBLIVIOUS TO YOUR CONVERSATION. YOU SAY:"<<endl;
                    cout<<KMAG<<"\"My gift to you is this piece of pizza. Not only does he taste good, he can tell jokes too!\""<<KNRM<< " YOU PICK UP"<<endl;
                    cout<<"CRUSTY CARL AND HAND HIM TO GALAXATRON."<<endl;
                    cin>>ah;
                    cout<<"CRUSTY CARL: "<<KYEL<<"Wh- what are you doing? P- put me d- down! Please don't eat me! Please! PLEASE!"<<KNRM<<endl;
                    cin>>ah;
                    cout<<"YOU LOOK AWAY AS GALAXATRON EATS CRUSTY CARL IN ONE BITE, BUT YOU CAN STILL HEAR HIS SOBS AS HE IS DEVOURED."<<endl;
                    cout<<"GALAXATRON: "<<KRED<<"Thank you, kind citizen. In return, I will consider giving you a shard of your crystals back.... kid.. are you alright?"<<KNRM<<endl;
                    cin>>ah;
                    cout<<"YOU HAVE FALLEN ON THE GROUND, RACKED WITH GUILT. NO ONE EVER TOLD YOU THAT GUILT WAS DEADLY, BUT IT'S PRETTY CLEAR THAT"<<endl;
                    cout<<"GIVING AWAY CRUSTY CARL WAS THE FINAL STRAW FOR YOUR FRAGILE HEART. YOU STOP BREATHING, AND THE WORLD GOES BLACK."<<endl;
                    cin>>ah;
                    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                    cout<<"YOU DIED FROM: GUILT"<<endl;
                    gameOver=true;
                    return;
                }
                break;
            case 2:
                cout<<"YOU LOOK AROUND AND REALIZE YOU HAVE NOTHING WORTH GIVING TO THE KING. YOU REPLY:"<<endl;
                cout<<KMAG<<"\"I would have a gift for you, Galaxitron, but I didn't know you would be here, so I wasn't prepared. Please forgive me.\""<<KNRM<<endl;
                cin>>ah;
                cout<<"GALAXATRON: "<<KRED<<"You stupid child. Obviously, you should ALWAYS have a gift for me in case our paths ever cross."<<endl;
                cout<<"However, because I am so kind, I'll look past your silly mistake this time."<<KNRM<<endl;
                break;
            case 3:
                cout<<"YOU DIG IN YOUR POCKETS FOR ANYTHING TO GIVE. RIGHT AS YOU BEGIN TO THINK ALL IS LOST, YOU FEEL A SMALL LUMP. YOU PULL OUT"<<endl;
                cout<<"A PEBBLE! YOU RUSH OVER TO GALAXATRON AND HAND HIM THE PEBBLE."<<endl;
                cin>>ah;
                cout<<"GALAXATRON: "<<KRED<<"What is this? A rock?..."<<KNRM<<endl;
                cout<<"GALAXATRON THINKS FOR A FEW SECONDS."<<endl;
                cout<<"GALAXATRON: "<<KRED<<"BAHAHAHAHAHAHAHA! THIS IS THE FUNNIEST AND NICEST THING ANYONE HAS EVER GOTTEN ME!!"<<KNRM<<endl;
                cin>>ah;
                cout<<"YOU REPLY: "<<KMAG<<"\"... Oh uh... ya I put a lot of thought into it? Ummm just out of curiousity... why do you"<<endl;
                cout<<"like it so much? Just to make sure I got the perfect gift for you. \""<<KNRM<<endl;
                cin>>ah;
                cout<<"GALAXATRON: "<<KRED<<"Well obviously because by giving me the rock, you were telling me that I ROCK!"<<KNRM<<endl;
                cout<<"ONCE AGAIN, GALAXITIRON GETS CAUGHT IN A LAUGHING FIT, TEARS OF JOY STREAMING DOWN HIS FACE."<<endl;
                cin>>ah;
                cout<<"GALAXATRON: "<<KRED<<"As a token of my appreciation, you can have some of your purple power crystals back. Take what you need, but"<<endl;
                cout<<"leave me some. They're absolutely gorgeous!"<<KNRM<<endl;
                cin>>ah;
                cout<<"YOU TAKE SOME POWER CRYSTALS AND RETURN TO YOUR HOME PLANET. ALTHOUGH THE ENERGY LEVELS ARE LOWER THAN BEFORE, YOUR TOWN"<<endl;
                cout<<"IS ABLE TO RETURN TO SOME LEVEL OF NORMALCY. AS AN AVERAGE JOE, YOU MANAGED TO DO A (VERY SLIGHTLY) ABOVE AVERAGE JOB SAVING"<<endl;
                cout<<"YOUR PLANET. CONGRATS."<<endl;
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                gameOver=true;
                cout<<"CONGRATS! YOU WON WITH A PEBBLE."<<endl;
                return;
                break;
        }
        cout<<"GALAXATRON: "<<KRED<<"So why should I even take time out of my day to listen to you? You seem rather like a waste of my time."<<endl;
        cout<<"DO YOU 1. INTIMIDATE GALAXATRON OR 2. SING A SONG ABOUT LOVE AND PEACE?"<<KNRM<<endl;
        cin >> choice;
        if(choice != "1" && choice != "2")
        {
            ic = 0;
        }
        else
        {
            ic = stoi(choice);
        }
        if (ic==2)
        {
            cout<<"YOU REPLY CONFIDENTLY: "<<KMAG<<"\"I'm here to sing you a song.\""<<KNRM<<endl;
            cout<<"GALAXATRON LAUGHS AND SAYS: "<<KRED<<"Ok, child, let's hear it. But make it quick. I don't have time for nursery rhymes... heh"<<endl;
            cout<<"that rhymed. I'm a genius."<<KNRM<<endl;
            cin>>ah;
            cout<<"YOU CLEAR YOUR THROAT AND BEGIN:"<<endl<<endl;
            cin>>ah;
            cout<<KMAG<<"Be excellent to eachother, and party on dudes"<<endl;
            cout<<"Be excellent to eachother, and party on dudes"<<endl;
            cout<<"Be excellent to eachother, and party on dudes"<<endl;
            cout<<"Because otherwise, you're being kinda rudes"<<KNRM<<endl;
            cin>>ah;
            cout<<"GALAXATRON STARES IN AWE AT YOU."<<endl;
            cout<<"GALAXATRON: "<<KRED<<"..."<<KNRM<<endl;
            cin>>ah;
            cout<<"GALAXATRON: "<<KRED<<"I.. I have no words. That was beautiful. I feel like I finally understand the meaning of life. Here, "<<endl;
            cout<<"take this."<<KNRM<<endl;
            cout<<"GALAXATRON HANDS OVER HIS CROWN."<<endl;
            cout<<"GALAXATRON: "<<KRED<<"I am enlightened now. Ruling over others is below me. You are now King of the Universe. Use the power well."<<endl;
            cout<<"Thank you, dude. I will forever remember you."<<KNRM<<endl;
            cout<<"GALAXATRON WALKS OUT SINGING YOUR SONG, BUT MISSING UP ABOUT HALF THE WORDS."<<endl;
            cin>>ah;
            cout<<"WITH THE HELP OF YOUR FRIENDS, YOU MANAGE TO PICK UP ALL OF THE PURPLE POWER CRYSTALS AND BRING THEM TO YOUR SHIP."<<endl;
            cout<<"AFTER A LONG JOURNEY BACK HOME, YOU RETURN THE CRYSTALS AS YOUR FELLOW CITIZENS CHEER YOU ON!"<<endl;
            cin>>ah;
            cout<<"... I MEAN AT LEAST YOUR MOM WAS CHEERING YOU ON..."<<endl;
            cin>>ah;
            cout<<"THE REST OF YOUR PLANET WENT ON LIVING LIFE THE WAY THEY DID BEORE, BUT YOU BECAME AN INTERGALACTIC HERO, SOLVING PROBLEMS WITH"<<endl;
            cout<<"YOUR NEW FRIENDS."<<endl;
            cin>>ah;
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"CONGRATS! YOU WON WITH A SONG!"<<endl;
            return;
        }
        else if (ic==1)
        {
            cout<<"YOU PUFF UP YOUR CHEST AND SAY: "<<KMAG<<"\"You better watch out! It may not look like it, but I am one of the most powerful creatures"<<endl;
            cout<<"in the universe.\""<<KNRM<<endl;
        }
        else 
        {
            cout<<"YOU LOOK AT GALAXATRON AND AFTER THINKING ABOUT IT, SHRUG AT HIM AND SAY: "<<KMAG<<"\"I don't know dude. I think I'm important"<<endl;
            cout<<"enough for you to give me your time.\""<<KNRM<<endl;
        }
        if (ic!=2)
        {
            random=rand() %2;
            if (random==0)
            {
                cout<<"GALAXATRON: "<<KRED<<"You fool! I tried to be patient, but now you will feel my wrath!"<<KNRM<<endl;
                battle(1);
            }
            else
            {
                cout<<"GALAXATRON: "<<KRED<<"Well, if you're so powerful, prove it. What are your credentials anyway?"<<KNRM<<endl;
            }
            
        }
        cout<<"DO YOU SAY YOU ARE 1. A SOCIAL MEDIA INFLUENCER 2. KING OF CHEESE OR 3. LORD OF PIZZA?"<<endl;
        cin>>choice;
        if(choice != "1" && choice != "2")
        {
            ic = 0;
        }
        else
        {
            ic = stoi(choice);
        }
        if (ic==1)
        {
            cout<<"YOU LAUGH AND SAY: "<<KMAG<<"\"I have the most important power: Social power, for I am a social media influencer!\""<<KNRM<<endl;
            cin>>ah;
            cout<<"GALAXATRON LOOKS AT YOU AND LAUGHS. HE SAYS: "<<KRED<<"Oh please! Everyone knows that influencers have no real power!"<<endl;
            cout<<"Fighting you will be the easiest thing I've done all day!"<<KNRM<<endl;
            battle(1);
        }
        else if(ic==2)
        {
            cout<<"YOU PROUDLY SAY: "<<KMAG<<"\"I am a leader, just like yourself. But unlike you, I am not not JUST a gouda leader, I am "<<endl;
            cout<<"cheddar than the rest. I know it sounds cheesy, but as the King of all Cheese, I make sure that everything in my kingdom is doing grate."<<KNRM<<endl;
            cin>>ah;
            cout<<"GALAXATRON: "<<KRED<<"Interesting... The King of Cheese is truly powerful, but I need to make sure you're not lying, so here's a question only"<<endl;
            cout<<"the TRUE King of Cheese would know: Which type of cheese is better: Craft singles cheddar cheese, or gouda?"<<KNRM<<endl;
            cin>>ah;
            cout<<"DO YOU PICK 1. CRAFT SINGLES OR 2. CHEDDAR CHEESE?"<<endl;
            cin>>choice;
            if(choice != "1" && choice != "2")
            {
                ic = 0;
            }
            else
            {
                ic = stoi(choice);
            }

            if (ic==1)
            {
                cout<<"GALAXATRON: "<<KRED<<"Craft Singles? You mean the single use plastic of the cheese world?! You disgust me, and you are most definitely NOT"<<endl;
                cout<<"the King of Cheese. For your lies, you must fight me now!"<<KNRM<<endl;
                battle(0);
            }
            else if (ic==2)
            {
                cout<<"GALAXATRON: "<<KRED<<"...I don't believe it... THE King of Cheese right in fron tof my eyes. I've heard stories of my leadership, but "<<endl;
                cout<<"if I'm being honest I didn't know if they were true. My lord, take my position as King of the Universe. You are the "<<endl;
                cout<<"rightful owner of the crown. I will get out of your way."<<KNRM<<endl;
                cin>>ah;
                cout<<"GALAXATRON PLACES HIS CROWN ON YOUR HEAD, AND LEAVES THE BUILDING. YOU AND YOUR NEW FRIENDS CHEER! AFTER LUGGING THE POWER CRYSTALS"<<endl;
                cout<<"BACK TO THE SHIP, YOU RETURN HOME. ONCE THERE, YOU PLACE THE POWER CRYSTALS IN THEIR RIGHTFUL PLACE."<<endl;
                cin>>ah;
                cout<<"AS RECOGNITION OF YOUR HELP, THE RULER OF YOUR PLANET GIVES YOU A MEDAL OF BRAVERY."<<endl;
                cout<<"AFTER CATCHING UP ON ALL OF YOUR FAVORITE TLC SHOWS, YOU TRAVEL BACK INTO SPACE TO HELP OTHER PLANETS IN NEED. YOU WILL FOREVER"<<endl;
                cout<<"BE KNOWN AS THE ONLY TRUE RULER IN THE UNIVERSE. CONGRATULATIONS, "<<name<<"."<<endl;
                return;
            }
            else 
            {
                cout<<"GALAXATRON: "<<KRED<<"Obviously you aren't the true King of Cheese, or else you would know that the only correct answer is gouda cheese!"<<endl;
                cout<<"No one comes into my home and lies right to my face!"<<KNRM<<endl;
                battle(0);
            }
        }
        else if(ic==3)
        {
            if (friends[0]=="carl")
            {
                cout<<"YOU THINK BACK TO PIZZA PLANET AND SAY: "<<KMAG<<"\"I am the Lord of Pizza. I bring the beauty of the world into each pizza I make.\""<<KNRM<<endl;
                cin>>ah;
                cout<<"GALAXATRON LOOKS SKEPTICALLY AT YOU AND SAYS: "<<KRED<<"How am I supposed to believe YOU? Only a Pizza Planet native can identify truly perfect"<<endl;
                cout<<"pizzas, for they can not lie about their beauty."<<KNRM<<endl;
                cin>>ah;
                if (pizza==true)
                {
                    cout<<"AT THAT MOMENT, CRUSTY CARL RAN UP TO GALAXATRON, JUMPING WITH JOY."<<endl;
                    cout<<"CRUSTY CARL: "<<KYEL<<"But sir, I am a native from Pizza Planet and I saw firsthand the creation of THE perfect pizza."<<endl;
                    cout<<"The perfect mix of artistry and food, it was truly a work of art that only the Lord of Pizza could do!"<<KNRM<<endl;
                    cin>>ah;
                    cout<<"GALAXATRON: "<<KRED<<"Really? Why, I'm in shock. I didn't relize that I was standing with royalty. Here, take my crown. You are far more worthy"<<endl;
                    cout<<"than me. WITH THAT, GALAXATRON GAVE YOU HIS CROWN AND LEFT FOR PIZZA PLANET, ON HIS QUEST TO LEARN THE SECRET TO MAKING THE PERFECT PIZZA."<<KNRM<<endl;
                    cin>>ah;
                    cout<<"YOU TURN TOWARDS CRUSTY CARL AND SAY: "<<KMAG<<"\"Thanks Crusty Carl! If it weren't for you, I don't think I would've made it out alive. I owe you one.\""<<endl;
                    cout<<"CRUSTY CARL GIVES YOU A HUG AND REPLIES: Oh, don't worry about it pal. We're friends, and that's what matters!"<<KNRM<<endl;
                    cin>>ah;
                    cout<<"WITH YOUR FRIENDS, YOU LUG THE PURPLE POWER CRYSTALS BACK TO YOUR HOME PLANET. AS YOUR FRIENDS RECEIVED THE PUBLIC'S UNDYING LOVE"<<endl;
                    cout<<"AND SUPPORT FOR SAVING THE PLANET, YOU STAYED INSIDE WATCHING SAY YES TO THE DRESS, THE SAME WAY YOU ALWAYS DID ON FRIDAY EVENINGS."<<endl;
                    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                    cout<<"CONGRATS! YOU WON WITH THE PERFECT PIZZA!"<<endl;
                    return;
                }
            }
            else
            {
                cout<<"BOLDY, YOU SAY: "<<KMAG<<"\"I am the Lord of Pizza.\""<<KNRM<<endl;
                cin>>ah;
                cout<<"GALAXATRON: "<<KRED<<"Oh ya? Have you ever even been to Pizza Planet?"<<KNRM<<endl;
                cout<<"YOU LOOK AT GALXITRON CONFUSED AND REPLY: "<<KMAG<<"\"Pizza Planet? What is that?\""<<KNRM<<endl;
                cin>>ah;
                cout<<"GALAXATRON: "<<KRED<<"You silly child! Don't pretend like you know the first thing about pizza if you haven't even visited their origin! Your"<<endl;
                cout<<"ignorance disgusts me!"<<KNRM<<endl;
                battle(0);
            }
        }
        else
        {
            cout<<"YOU LOOK AT CRUSTY CARL, HOPING HE WILL TELL GALAXATRON ABOUT YOUR PIZZA MAKING ABILITIES, BUT HE JUST SHAKES HIS HEAD."<<endl;
            cout<<"CRUSTY CARL: "<<KYEL<<"I'm sorry. I can't lie about the perfect pizza. It's part of the honor code that's ingrained in my sauce and cheese."<<KNRM<<endl;
            cin>>ah;
            cout<<"GALAXATRON: "<<KRED<<"You thought you could fool me! I'm smarter, more powerful, and more beautiful than you will ever be! Feel my wrath!"<<KNRM<<endl;
            battle(1);
        }
        
    }
}
void Game::battle(int e)
{
    string ah;
    cin >> ah;
    bool gottem = false;
    int hits = 0;
    int rounds = 0;

    while(gottem == false && rounds <= (5 + e))
    {
        cout << "WHERE WILL YOU HIT HIM?" << endl << "1) go for a headshot" << endl << "2) hit his oncoming hand" << endl << "3) stab him in the heart" << endl;
        cout << "4) gut punch that sucker" << endl << "5) kick him in the groin" << endl << "6) stomp on his right foot" << endl << "7) stub that left pinkie toe";
        cout << endl;
        // will you hit 
        // 1. head
        // 2. hand
        // 3. heart
        // 4. gut 
        // 5. groin
        // 6. right foot 
        // 7. left toe

        string choice;
        int ichoice;
        cin >> choice;
        if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7")
        {
            cout << "THAT'S A NO FROM ME DOG" << endl;
            ichoice = 8;
        }
        else 
        {
            ichoice = stoi(choice);
        }
        switch(ichoice)
        {
            case 1: 
                hits = hits + 5;
                cout << KRED<<"\"ouch!\""<<KNRM<<" HE YELLS "<<KRED<<"\"you got me right in the goatee!\"" << KNRM<<endl;
                cin >> ah;
                cout << "HE GOES TO KICK YOU IN THE FACE WITH A ROUNDHOUSE KICK AND LANDS IT BRILLIANTLY. THAT WAS A ROUGH ONE." << endl;
                cin >> ah;
                break;
            case 2: 
                hits = hits + 1;
                cout << "YOU SLAP HIS HAND WITH YOUR HAND. WOW. NOW THAT WAS A SOLID HIGH FIVE RIGHT THERE. HE SEEMS UNAMUSED." << endl;
                cout << endl;
                cin >> ah;
                cout << "HE SLAPS YOUR HAND BACK HARDER. THAT ONE WILL LEAVE A MARK." << endl;
                cin >> ah;
                break;
            case 3: 
                hits = hits + 3;
                cout << "YOU SPIT SOME SICK BARS AT THAT GUY. WOAH, LOOKS LIKE THOSE INSULTS HIT HIM HARD. RIGHT IN THE HEART!" << endl;
                cin >> ah;
                
                cout << "HE HITS YOU BACK BY INSULTING YOUR SHOES. THEY ARE THE SAME SHOES HE IS WEARING. HE DOES NOT SEEM TO UNDERSTAND THAT." << endl;
                cin >> ah;
                break;
            case 4: 
                hits = hits + 1;
                cout << "YOU HIT HIM IN THE STOMACH BUT HE'S GOT SOME ROCK HARD ABS, YOUR POOR HAND!" << endl;
                cin >> ah;
                break;
            case 5: 
                hits = hits + 5;
                cout << "YOU NAIL HIM IN THE GROIN. THAT ONE REALLY GOT HIM." << endl;
                cin >> ah;
                cout << "HE'S INCAPACITATED, HIT HIM AGAIN!" << endl;
                cin >> ah;
                
                break;
            case 6: 
                hits = hits + 2;
                cout << "YOU STOMP ON HIS FOOT. "<<KRED<<"\"ouch!\" NICE HIT!" << KNRM<<endl;
                cin >> ah;
                cout << "HE BOUNCES AROUND ON HIS UNHURT FOOT AND MANAGES TO STEP ON YOUR FOOT IN THE PROCESS. NOW YOU ARE BOTH HOPPING." << endl;
                cin >> ah;
                
                break;
            case 7: 
                hits = hits + 2;
                cout << "YOU STUB HIS LEFT PINKIE TOE. HE GRIMACES AND PUNCHES YOU IN THE THROAT. OOF." << endl;
                cin >> ah;
                
                break;
            default:
                cout << "WAY TO WIFF IT BRO" << endl;
                cout << "HE CLOCKS YOU IN THE FACE." << endl;
                cin >> ah;
                break;
        }
        rounds++;
        if(hits >= 20)
        {
            gottem = true;
        }
    }
    if(gottem == false)
    {
        cout << "YOU FALL TO THE GROUND IN DEFEAT. THE LAST THING YOU SEE IS THAT GLORIOUS GOATEE." << endl;
        return;
        lost = true;
    }
    else
    {
        cout << "HE FALLS TO THE GROUND IN DEFEAT. "<<KRED<<"\"curse you!!\" "<<KNRM<<"HE YELLS AS YOU RUN AWAY WITH THE CRYSTALS." << endl;
        cin >> ah;
        cout << "YOU RETURN HOME WITH THE CRYSTAL TO THE ENTIRE PURPLE PLANET'S REJOICE. "<<KMAG<<"\"you're a hero!\" THEY CALL. YES YOU ARE." <<KNRM<< endl;
        cin >> ah;
        cout << "YOU LIVE HAPPILY EVER AFTER, WATCHING SAY YES TO THE DRESS ON YOUR MOM'S COUCH WITH YOUR NEW KING'S CROWN AND PURPLE CRYSTAL SCEPTER." << endl;
        cin >> ah;
        cout << "HUZZAH!" << endl;
        cin >> ah;
        cout << "THE END." << endl;
    }
    return;
}

