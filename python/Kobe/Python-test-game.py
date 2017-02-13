"""Trial run from a simulated python version of my part of of C++ game"""
import random
def direction(choice):
    FC = ["Passing out of the trees, you enter a small clearing. In front of you is what seems to be a hut. Hoping whoever lives here may have seen you before, you walk up and knock on the door. To your surprise a lovely young lady answers the door and after looking you up and down invites you inside. Stepping in she invites you to sit down and you do so promptly. Turning her back to you she picks up a cup and then turns to give it to you as you question her about the forest, temple and yourself. "
          ,"Down the path, humming to yourself you hear what sounds like to children arguing. Jogging up the path, you finally see what the commotion is, two dwarves arguing in front of a broken wagon. Laughing to yourself, you head over and ask about the problem. They tell you that a wheel on their wagon is broken and neither of them is large enough to hold it up. You begin to laugh again looking at the wagon which comes up to about shoulder height. Looking at you the two dwarves ask if you would be so kind as to lift the wagon. "
          ,"You are basically a wanderer, your mind is telling you, as you continue to walk down the path. Your stomach growls, food would be your top concern if you could remember what you liked. Deciding that it is in your best interest to eat however you begin to look around for berries to eat. Seeing a bush, of what you think are strawberries, you reach down to pluck one of the berries. As you go to pull it, it screams in pain. Bewildered you jump back, as from the bush a group of pixies rise furious. Noticing magic bubbling on their fingers you draw your sword. "
          ]
    FR = ["Yes, you take a sip of the tea, it has a weird tangy taste. Suddenly your eyes start to blur and you feel sick to your stomach. You can hear a distant scream, which you identify as your own. Your own breath feels corrosive against your tongue all the while the woman watches you, smiling. In the end, everything fades to black the last sound you hear is a slight chuckle underneath your own screams. "
          ,"No, placing the tea on the table next to you, you continue with your line of enquiry. The young lady, answers your questions willingly. Standing up you thank her for her help and head back outside. Her words offered no help as to your identity, but they do give you a direction, she suggested you take the RIGHT path from here towards the city."
          ,"Yes, you reach down and lift up the wagon. It’s so light you can do it with one arm. The dwarves then get to work switching out the wheel with a spare. After what seems like an age they give you the ok to put it down. Turning to you they express great joy at your help, so much so that they rush to the back of the cart and pull out a bag of gold and hand it to you. Tying it to your waste, you walk off, a laughing as you here the steady stream of insults start again (Gold + 10)."
          ,"No, looking at the cart you decide it is too heavy to lift, you tell the dwarves you won’t do it. Trying to appeal to your better nature, they plead with you to help them. Still refusing you walk off down the path, the two half-men cursing you as you go."
          ,"  

          
          ]
    route = input("Will you go left, right or staright forward: ")
    if choice == 1:
        if route == "Left" or route == "left":
            print(FC[0])
            answer = input(print("Do you drink the tea? Answer 'Y' or 'N': "))
            if answer == "Y":
                print(FR[0])
                print("GAME OVER")
            elif answer == "N":
                return(print(FR[1]))
        if route == "Right" or route == "right":
            print(FC[1])
            answer = input(print("Do you lift the wagon? Answer 'Y' or 'N': "))
            if answer == "Y":
               # money = 10
               # newGold = gold(money)
                return(print(FR[2],"\n"))# newGold))
            elif answer == "N":
                return(print(FR[3]))
        if route == "Forward" or route == "forward" or route == "straight forward" or route == "Straight forward":
            print(FC[2])
            answer = input(print("Do you fight? Answer 'Y' or 'N': "))
            if answer == "Y":
                enemy = pixie
                #fight(enemy)
            elif answer == "N":
                luck = random.randint(0,100)
                if luck >= 75:
                    return(print(FR[6]))
                elif luck < 75:
                    return(print(FR[5]))
        else:
           raise NameError("answer needs to be left, right, or forward")
    else:
        print("tbc")
"""def inventory(item):
    invent = []
    if item in invent:
        print("Item already in inventory")
    else:
        invent.append(item)
    return(print("Inventory = ", invent))
def gold(money):
    gold = 0
    gold = gold + money
    return "Gold =", gold"""
#def fight(enemy):
    
def begin():
    
    print("The light of the sun glints off a piece of glass next to your head causing "
          "you too squint. A sudden pain rushes through your body causing you to jolt "
          "upright. You look around you, where are you. You search your memories to "
          "find some semblance of reality, but nothing comes to mind. Looking down you "
          "find a sword at your feet, old and chipped you feel as if it may break at any "
          "moment but as it is all you have you pick it up. Giving it a few practice "
          "swings and adjusting to its weight, you head out into the light.Emerging into "
          "the light, you note the sun rising over the derelict temple you stumbled out "
          "of. Deciding not to focus on the temple, you look forward and see three "
          "directions to choose from all leading into the forest…")
    item = "Sword"
    #bag = inventory(item)
    choice = 1
    direct = direction(choice)
    print("Wondering about what you just experienced you continue on on into the forest")
    
start = input(print("Game start, Y or N: "))
if start == "N":
    print("OK")
elif start == "Y":
    begin()
else:
    raise NameError("Input Either 'Y' or 'N'")


