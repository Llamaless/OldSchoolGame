#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int direction(int choice)
{
    string route;
    string answer;
    cout <<"Will you go left, right or forward"<< endl;
    cin >> route;
    if (choice == 1)
    {
        if(route == "left")
        {
            cout <<"Information for choice 1 left"<< endl;
            cout <<"Do you drink the tea? Answer 'Y' or 'N':"<< endl;
            cin >> answer;
            if(answer == "Y")
            {
                cout <<"Witch bad ending"<< endl;
                cout <<"Game Over"<< endl;
            }
            else if(answer == "Y")
            {
                cout <<"Witch good"<< endl;
            }
        }
        else if(route == "right")
        {
            cout <<"Information for choice 1 right"<< endl;
            cout <<"Do you lift the wagon? Answer 'Y' or 'N':"<< endl;
            cin >> answer;
            if(answer == "Y")
            {
                cout <<"Wagon good ending"<< endl;
            }
            else if(answer == "Y")
            {
                cout <<"Wagon neutral"<< endl;
            }
        }
        else if(route == "forward")
        {
            cout <<"Information for choice 1 forward"<< endl;
            cout <<"Do you fight? Answer 'Y' or 'N':"<< endl;
            cin >> answer;
            if(answer == "Y")
            {
                string enemy = "pixie";
            }
            else if(answer == "N")
            {
                srand(time(NULL));
                int luck = rand() % 10;
                if(luck >= 7)
                {
                    cout <<"You live"<< endl;
                }
                else if(luck < 7)
                {
                    cout <<"You die"<< endl;
                }
            }
        }
    }
    else()
    {
        throw runtime_error("Answer needs to be left, right or forward");
    }
}
int main()
{
    cout <<"The light of the sun glints off a piece of glass next to your head causing"
            "you too squint. A sudden pain rushes through your body causing you to jolt"
            "upright. You look around you, where are you. You search your memories to"
            "find some semblance of reality, but nothing comes to mind. Looking down you"
            "find a sword at your feet, old and chipped you feel as if it may break at any"
            "moment but as it is all you have you pick it up. Giving it a few practice"
            "swings and adjusting to its weight, you head out into the light.Emerging into"
            "the light, you note the sun rising over the derelict temple you stumbled out"
            "of. Deciding not to focus on the temple, you look forward and see three"
            "directions to choose from all leading into the forest…"<< endl;
    int choice = 1;
    direction(choice);
    return 0;
}