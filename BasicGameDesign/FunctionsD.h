 #include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "libsqlite.hpp"
#include "OSG2.db"
using namespace std; 


int main()
{
    system("cls");

    // Start of the forest section of the game
    int choiceTwo_Path;
    std::cout << "\n!!!----------------------Chapter One: The Briarheart Forest----------------------!!!" << std::endl;
    std::cout << "As you head towards the forest you notice 2 paths, Which path will you take?." << std::endl;
    std::cout << "Where do you choose to go?" << std::endl;
    std::cout << "\t >> Enter '1' to go West" << std::endl;
    std::cout << "\t >> Enter '2' to go East" << std::endl;
    std::cout << "\nEnter your choice: " << std::endl;
    std::cin >> choiceTwo_Path;

    if (choiceTwo_Path == 1)
    {
        //Witch route
        std::cout << "Taking the west path you come across a cabin" << std::endl;
        std::cout << "Knocking on the door a beautiful woman answers, with a smile she invites you in." << std::endl;
        std::cout << "You sit down in a chair, you begin to talk and she offers you a cup of tea." << std::endl;
        std::cout << "\ >> Enter '1' to drink the tea" << std::endl;
        std::cout << "\ >> Enter '2' to leave the tea" << std::endl;
        int route1;
        std::cin >> route1;
        if (route1 == 1)
        {
            std::cout << "Shortly after ingesting the tea your throat start to burn." << std::endl;
            std::cout << "Grasping your throat, vomiting and wrechting you realise you have been poisoned..." << std::endl;
            string sqliteFile = "OSG2.db";
            try
            {
                sqlite::sqlite db(sqliteFile); //connect to the database
                auto cur = db.get_statement();  //create query
                cur->set_sql("select scenarioText from ForestDialogue");
                cur->prepare(); //run query

                while (cur->step())// loop over results
                {
                    string stress = cur->get_int(0);

                }
            }
            catch (sqlite::exception e)      // catch all sql issues
            {
                std::cerr << e.what() << std::endl; // print errors
            }
            break;
            system("cls");
            goto retry;
        }
        else if (route1 == 2)
        {
            std::cout << "Finishing your conversation you move to go on your way." << std::endl;
            std::cout << "The woman, waves you on your journey an unsual grimace on her face" << std::endl;
            int route2;
            std::cout << "Now there is a path to the North and one too the East." << std::endl;
            std::cout << "Where do you choose to go?" << std::endl;
            std::cout << "\t >> Enter '1' to go North" << std::endl;
            std::cout << "\t >> Enter '2' to go East" << std::endl;
            std::cout << "\nEnter your choice: " << std::endl;
            std::cin >> route2;
            if (route2 == 1)
            {
                //Well route
                std::cout << "Taking the North path, you come across a well" << std::endl;
                std::cout << "Thirsty you pull the bucket out expecting some water." << std::endl;
                std::cout << "To your surprise though, the bucket comes out full of gold." << std::endl;
                std::cout << "Glee lights your face as you drop a coin down and hit a distinct metallic clink at the bottom." << std::endl;
                std::cout << "\ >> Enter '1' to climb the rope down the well to get the gold" << std::endl;
                std::cout << "\ >> Enter '2' to take what is in the bucket and get out of dodge" << std::endl;
                int route;
                std::cin >> route;
                if (route == 2)
                {
                    std::cout << "Thinking about it you decide the gold in the bucket is more than enough." << std::endl;
                    std::cout << "You cut the bucket loose and continue on your journey." << std::endl;
                    int route3;
                    std::cout << "Now there is a path to the North and one too the West." << std::endl;
                    std::cout << "Where do you choose to go?" << std::endl;
                    std::cout << "\t >> Enter '1' to go North" << std::endl;
                    std::cout << "\t >> Enter '2' to go West" << std::endl;
                    std::cout << "\nEnter your choice: " << std::endl;
                    std::cin >> route3;
                    if (route3 == 2)
                    {
                        //Ent route
                        std::cout << "Taking the West path, you encounter a grove of massive oak trees." << std::endl;
                        std::cout << "Thinking to yourself 'I could do with nap' you settle down to sleep. " << std::endl;
                        std::cout << "Suddenly you feel the ground shaking." << std::endl;
                        std::cout << "Looking up you see  huge tree looming over you, with a very annoyed face." << std::endl;
                        std::cout << "Picking you up, it tears you in half with roar, splattering your entrails everywhere..." << std::endl;
                        std::cout << "If you haven't worked it out yet, the narator hates you." << std::endl;
                        string sqliteFile = "OSG2.db";
                        try
                        {
                            sqlite::sqlite db(sqliteFile); //connect to the database
                            auto cur = db.get_statement();  //create query
                            cur->set_sql("select scenarioText from ForestDialogue");
                            cur->prepare(); //run query

                            while (cur->step())// loop over results
                            {
                                string stress = cur->get_int(0);

                            }
                        }
                        catch (sqlite::exception e)      // catch all sql issues
                        {
                            std::cerr << e.what() << std::endl; // print errors
                        }
                        break;
                        system("cls");
                        goto retry;
                    }
                    else if (route3 == 1)
                    {
                        //Soup route (changed from troll for a swifter ending)
                        std::cout << "Taking the North path, you find a bowl of soup sitting on a tree stump." << std::endl;
                        std::cout << "Hungry you pick it up and begin to eat. The taste is exquisite. " << std::endl;
                        std::cout << "However, by accident you push the spoon to far and begin to choke." << std::endl;
                        std::cout << "no matter how hard you try, you can't get it out and you slowly suffocate." << std::endl;
                        std::cout << "With your final gasps of air you drop the bowl of soup all over you..." << std::endl;
                        std::cout << "You just choked on a spoon. A FUCKING SPOON. THAT'S HOW TIRED I AM OF WRITING/CODING THIS SHIT!!!" << std::endl;
                        string sqliteFile = "OSG2.db";
                        try
                        {
                            sqlite::sqlite db(sqliteFile); //connect to the database
                            auto cur = db.get_statement();  //create query
                            cur->set_sql("select scenarioText from ForestDialogue");
                            cur->prepare(); //run query

                            while (cur->step())// loop over results
                            {
                                string stress = cur->get_int(0);

                            }
                        }
                        catch (sqlite::exception e)      // catch all sql issues
                        {
                            std::cerr << e.what() << std::endl; // print errors
                        }
                        break;
                        system("cls");
                        goto retry;
                    }

                    else if (route == 1)
                    {
                        std::cout << "The gold in the well would make you a rich man." << std::endl;
                        std::cout << "Who needs to finish a quest when they're rich." << std::endl;
                        std::cout << "This rolls around in your head as you begin to climb the rope down the well." << std::endl;
                        std::cout << "'SNAP'.. about a third of the way down the rope gives way." << std::endl;
                        std::cout << "You hear a distinctive crunch as you legs hit the ground. You are going to starve to death down there...." << std::endl;
                        string sqliteFile = "OSG2.db";
                        try
                        {
                            sqlite::sqlite db(sqliteFile); //connect to the database
                            auto cur = db.get_statement();  //create query
                            cur->set_sql("select scenarioText from ForestDialogue");
                            cur->prepare(); //run query

                            while (cur->step())// loop over results
                            {
                                string stress = cur->get_int(0);

                            }
                        }
                        catch (sqlite::exception e)      // catch all sql issues
                        {
                            std::cerr << e.what() << std::endl; // print errors
                        }
                        break;
                        system("cls");
                        goto retry;
                    }

                }
                if (route2 == 2)
                {
                    //Wasp route (changed from pixie because why not)
                    std::cout << "Taking the East path, you see a berry bush." << std::endl;
                    std::cout << "Hungry you try to pluck  berry to eat. " << std::endl;
                    std::cout << "Unfortunately that bush was the hive for a group of very angry wasps." << std::endl;
                    std::cout << "Enraged they swarm around you stinging every exposed part of your body." << std::endl;
                    std::cout << "As your throat collapses, maybe you'll learn some restraint in the next life..." << std::endl;
                    string sqliteFile = "OSG2.db";
                    try
                    {
                        sqlite::sqlite db(sqliteFile); //connect to the database
                        auto cur = db.get_statement();  //create query
                        cur->set_sql("select scenarioText from ForestDialogue");
                        cur->prepare(); //run query

                        while (cur->step())// loop over results
                        {
                            string stress = cur->get_int(0);

                        }
                    }
                    catch (sqlite::exception e)      // catch all sql issues
                    {
                        std::cerr << e.what() << std::endl; // print errors
                    }
                    break;
                    system("cls");
                    goto retry;
                }


                if (choiceTwo_Path == 2)
                {
                    //Dwarf route
                    std::cout << "Taking the East path, you bump into a pair of dwarves" << std::endl;
                    std::cout << "They appear to be arguing, It seems pretty heated." << std::endl;
                    std::cout << "You wonder whether or not you can help them." << std::endl;
                    std::cout << "\ >> Enter '1' to just leave them alone" << std::endl;
                    std::cout << "\ >> Enter '2' to talk to the dwarves" << std::endl;
                    int route;
                    std::cin >> route;
                    if (route == 2)
                    {
                        std::cout << "Walking over you start to try to get there attention, imploring them to calm down." << std::endl;
                        std::cout << "However one of the dwarves doesn't take to kindly to your message." << std::endl;
                        std::cout << "Turning around he buries his broad directly in your face before turning back to continue arguing..." << std::endl;
                        string sqliteFile = "OSG2.db";
                        try
                        {
                            sqlite::sqlite db(sqliteFile); //connect to the database
                            auto cur = db.get_statement();  //create query
                            cur->set_sql("select scenarioText from ForestDialogue");
                            cur->prepare(); //run query

                            while (cur->step())// loop over results
                            {
                                string stress = cur->get_int(0);

                            }
                        }
                        catch (sqlite::exception e)      // catch all sql issues
                        {
                            std::cerr << e.what() << std::endl; // print errors
                        }
                        break;
                        system("cls");
                        goto retry;
                    }
                    else if (route == 1)
                    {
                        //Chooses aa random number between 1-10, depending on the number determines the scenario. 
                        srand(time(NULL));
                        int luck = rand() % 10;
                        if (luck >= 7)
                        {
                            std::cout << "You walk off towards the paths too afraid to engage with them." << std::endl;
                            std::cout << "Quietly you manage to tiptoe passed them without seeing." << std::endl;
                            std::cout << "However, as you sneak away you hear a roar from behind followed by a cry." << std::endl;
                            std::cout << "You turn to see one of the clutching his throat as blood spurts through his fingers!" << std::endl;
                            std::cout << "Triumphant the other dwarf walks off." << std::endl;
                            std::cout << "You look at the dead dwarves body to see that it is resting in front of a cave." << std::endl;
                            std::cout << "You think to yourself that was easy and head towards it..." << std::endl;
                        }
                        else if (luck < 7)
                        {
                            std::cout << "You walk off towards the paths too afraid to engage with them." << std::endl;
                            std::cout << "However, as you walk off you break a stick directing both the attentions towards you." << std::endl;
                            std::cout << "Infuriated both dwarves charge at you, weapons raised before hacking you to pieces." << std::endl;
                            std::cout << "Afterwards they both seemed to have calmed down and go about their day...." << std::endl;
                            string sqliteFile = "OSG2.db";
                            try
                            {
                                sqlite::sqlite db(sqliteFile); //connect to the database
                                auto cur = db.get_statement();  //create query
                                cur->set_sql("select scenarioText from ForestDialogue");
                                cur->prepare(); //run query

                                while (cur->step())// loop over results
                                {
                                    string stress = cur->get_int(0);

                                }
                            }
                            catch (sqlite::exception e)      // catch all sql issues
                            {
                                std::cerr << e.what() << std::endl; // print errors
                            }
                            break;
                            system("cls");
                            goto retry;
                        }
                        
                    }


                }
            }
            return 0;
        }
    }
}




