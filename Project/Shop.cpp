#include <iostream>

using namespace std;
typedef std::string str;

int main(){
    str yourchoice;

    cout << "Welcome to Estera's shop!!" << '\n';
    cout << "We have variety items that you need!!!" << '\n';
    cout << "1. Weapons?" << '\n';
    cout << "2. Armors?" << '\n';
    cout << "3. Potions?" << '\n';
    cout << "4. Accessories?" << '\n';
    cout << "What are you looking for? " << '\n';
    cin >> yourchoice;
    cin.ignore();

    if (yourchoice == "Weapons" || yourchoice == "Weapon" || yourchoice == "weapons" || yourchoice == "weapon" || yourchoice == "weap" || yourchoice == "Weap" || yourchoice == "1") {
        str choice;
        cout <<"Great!!! We have some weapons that maybe fit you!!" << '\n';
        cout <<"First, what are are your specializations? " << '\n';
        cout <<"1. Assasin?" << '\n';
        cout <<"2. Knight?" << '\n';
        cout <<"3. Archer?" << '\n';
        cout <<"4. Magician?" << '\n';
        getline(cin, choice);

        if (choice == "Assasin" || choice == "assasin" || choice == "1") {
            cout << "We have some nice daggers for you!!" << '\n';
            cout << "1. Silent steps" << '\n';
            cout << "2. Justification" << '\n';
            cout << "3. Shadow's edge" << '\n';
            cout << "4. Moon Lake's" << '\n';
            cout << "What do you think? just pick whatever you like!!" <<'\n';
            str buyw;
            str buy;
            getline(cin, buyw);
            if (buyw == "1" || buyw == "Silent steps" || buyw == "silent steps") {
                cout << "What an assasin you are, the price was 150 golds, do you want to buy it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Thank you!!, see you next time traveler~" << '\n';
                } else {
                    cout << "No problems, take your time to choose the best one for you" << '\n';
                }
            } else if (buyw == "2" || buyw == "Justification" || buyw == "justification") {
                cout << "Justice huh?, th price just 210 golds, would you like to buy?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Thank you!, see you next time traveler~" <<'\n';              
                } else {
                    cout << "Well, everyone have their own perspective about justice didnt't they? try another options" << '\n';
                }
            } else if (buyw == "3" || buyw == "Shadow's edge" || buyw == "shadow's edge") {
                cout << "This dagger have massive damage in the dark place, the price is high tho, 390 golds, wanna buy it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes" ) {
                    cout << "Wonderful, see you next time traveler~" << '\n';
                } else {
                    cout << "The dagger is not for everyone, but you can try some other options" << '\n';
                }
            }  else if (buyw == "4" || buyw == "Moon Lake's" || buyw == "moon lake's") {
                cout << "Try this, it increase your agility and speed in the night, the price is 275 golds, you want to buy it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Nice choice, see you next time traveler, -may the moon guide you-" << '\n';
                } else {
                    cout << "This dagger is only useful in night time though, try another options if you hunt in the day time" << '\n';
                }
            }
        } else if (choice == "Knight" || choice == "knight" || choice == "2") {
            cout << "Great!! what a fighter~, here our recommencomendations" << '\n';
            cout << "1. Red days" << '\n';
            cout << "2. Redemption" << '\n';
            cout << "3. Turtle's shell" << '\n';
            str buyw;
            str buy;
            cout << "Already make a choice? Let me know it" << '\n';
            getline(cin, buyw);
            if (buyw == "1" || buyw == "Red days" || buyw == "red days") {
                cout << "It can give bleeding effect to your enemy, the price is just 170 golds, do you interested?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Great, let me pack it for you, have a nice journey traveler~" << '\n';
                } else {
                    cout << "Want to take look at other options? sure" << '\n';
                }
            } else if (buyw == "2" || buyw == "Redemption" || buyw == "redemption") {
                cout << "This sword might gift you the shield of purity, the price is not that expensive, juast 130 golds, wnna buy it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Thank you!!, have a safe journey traveler~" << '\n';
                } else {
                    cout << "Eh? i though you wanna buy it because its cheap, but its okay, try looking at some other options" << '\n';
                }
            } else if (buyw == "3" || buyw == "Turtle's shell" || buyw == "turtle's shell" || buyw == "Turtle shell" || buyw == "turtle shell") {
                cout << "Your durability will surely increase, and the price is 250 golds, interested?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Great, i will pack it for you, have a nice journey traveler~" << '\n';
                } else  {
                    cout << "Ah, it's okay, maybe other weapon is more fits on you" << '\n';
                }
            }
        } else if (choice == "Archer" || choice == "archer" || choice == "3") {
            cout << "Nice one!! you must have a sharp eyes, here are some options for you" << '\n';
            cout << "1. Sharp winds" << '\n';
            cout << "2. Eagle's eye" << '\n';
            cout << "3. Forest whisper" << '\n';
            str buyw;
            str buy;
            cout << "Tell me, what will you pick?" << '\n';
            getline(cin, buyw);
            if (buyw == "1" || buyw == "Sharp winds" || buyw == "sharp winds") {
                cout << "It boost your agility and stamina for sure, 230 golds, wanna take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Nice, hope you won't get sliced by it haha... i mean, it's just a joke!!" << '\n';
                } else {
                    cout << "It's okay though, it will troublesome tho if you aren't speed type archer" << '\n';
                }
            } else if (buyw == "2" || buyw == "Eagle's eye" || buyw == "eagle's eye" || buyw == "Eagle eye" || buyw == "eagle eye") {
                cout << "Really have sharp eyes huh? 230 golds, want to take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Okay... give me a second" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Ah, just looking around? it's okay" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            } else if (buyw == "3" || buyw == "Forest whisper" || buyw == "forest whisper") {
                cout << "Your agility got increased when you on nature, 500 golds, pricey eh? but its worth, take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "I didnt expect that you will buy it haha, trust me, its really worth it" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Its okay haha, try other bows" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            }
        } else if (choice == "Magician" || choice == "magician" || choice == "4") {
            cout << "Wow!! you must have a great knowledge about magic, here are some options for you" << '\n';
            cout << "1. Arcane blast" << '\n';
            cout << "2. Mystic staff" << '\n';
            cout << "3. Elemental fury" << '\n';
            str buyw;
            str buy;
            cout << "What can i get for you? mage?" << '\n';
            getline(cin, buyw);
            if (buyw == "1" || buyw == "Arcane blast" || buyw == "arcane blast") {
                cout << "This was fire specialize wand, just 285 golds, want it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Perfect, I already smell the destruction you cause~ haha" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Not a fire type mage eh? Don't worry, we still have other wands" << '\n';
                } else {
                    cout << "huh?" << '\n';
                }
            } else if (buyw == "2" || buyw == "Mystic staff" || buyw == "mystic staff") {
                cout << "This is our best recommendation!!, this staff is flexible with any elements!! the cost was 700 golds, interested?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Excellent choice, a staff worthy of a great mage!" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Perhaps you prefer something else?" << '\n';
                } else {
                    cout << "huh" << '\n';
                }
            } else if (buyw == "3" || buyw == "Elemental fury" || buyw == "elemental fury") {
                cout << "This is basically higher grade mystic staff, the cost was 1500 golds, still want to take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" ||  buy == "yes") {
                    cout << "Wow, you really buy it.... I mean sure!! you will be strong mage!!" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Logically, i won't buy this staff too i were you, haha" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            }
        } else {
            cout << "Sorry, I didn't recognize that specialization." << '\n';
        } 
    } else if (yourchoice == "Armors" || yourchoice == "Armor" || yourchoice == "armors" || yourchoice == "armor" || yourchoice == "armo" || yourchoice == "Armo" || yourchoice == "2") {
        cout << "So you are a tank, eh? let me show the perfect armor for you!!" << '\n';
        cout << "In the hall one, we have some light armors" << '\n';
        cout << "1. Feather grace" << '\n';
        cout << "2. Shadow veil" << '\n';
        cout << "3. Moonlight embrace" << '\n';
        str buyw;
        str buy;
        str decision;
        cout << "Already make choice? " << '\n';
        getline(cin, decision);
        if (decision == "Yes" || decision == "yes") {
            cout << "So... what it could be?" << '\n';
            getline(cin, buyw);
        if (buyw == "1" || buyw == "Feather grace" || buyw == "feather grace") {
            cout << "This surely will be very good if you are archer type fighter, want to buy it? just 200 golds" << '\n';
            getline(cin, buy);
            if (buy == "Yes" || buy == "yes") {
                cout << "Wonderfull, give me a second to pack it" << '\n';            
            } else if (buy == "No" || buy == "no") {
                cout << "Its okay, not everyone have incredibly speed on battle" << '\n';
            } else {
                cout << "Huh?" << '\n';
            }
        } else if (buyw == "2" || buyw == "Shadow veil" || buyw == "shadow veil") {
            cout << "Its really light, and most useful when you have stealth ability, just 285 golds, want to take it?" << '\n';
            getline(cin, buy);
            if (buy == "Yes" || buy == "yes") {
                cout << "Perfect, let me pack it for you" << '\n';
            } else if (buy == "No" || buy == "no") {
                cout << "Its okay, it kinda have specific requirement to use it though" << '\n';
            } else {
                cout << "Huh?" << '\n';
            }
        } else if (buyw == "3" || buyw == "Moonlight embrace" || buyw == "moonlight embrace") {
            cout << "Nice one, it reduce damage signifantly when the full moon raise, just 455 golds if you want tp buy it" << '\n';
            getline(cin, buy);
            if (buy == "Yes" || buy == "yes") {
                cout << "Perfect, give mme one sec" << '\n';
            } else if (buy == "No" || buy == "no") {
                cout << "I can understand, its troublesome if we need wait untul full moon" << '\n';
            } else {
                cout << "Huh?" << '\n';
            }
        } 
    } else if (decision == "No" || decision == "no") {
        cout << "Shall we continue to the next hall?" << '\n';
        str yc;
        getline(cin, yc);
        if (yc == "Next" || yc == "next" || yc == "Continue" || yc == "continue" || yc == "Yes" || yc == "yes") {
            cout << "In the hall two, we have medium armors, like: " << '\n';
            cout << "1. Ironclad" << '\n';
            cout << "2. Stonewall" << '\n';
            cout << "3. Guardian embrace" << '\n';
            cout << "Have something catch your interest?" << '\n';
            str buyw;
            str buy;
            str decision;
            getline(cin, decision);
            if (decision == "Yes" || decision == "yes") {
                cout << "Nice!, what would you pick?" << '\n';
                getline(cin, buyw);
                if (buyw == "1" || buyw == "Ironclad" || buyw == "ironclad") {
                    cout << "Do you know? if you were a beast type fighter, this armor will make you incredibly durable, the cost was 360 golds, wanna take it?" << '\n';
                    getline(cin, buy);
                    if (buy == "Yes" || buy == "yes") {
                        cout << "Great, let me pack it for you, traveler" << '\n';                 
                    } else if (buy == "No" || buy == "no") {
                        cout << "It wasn't too powerful if you weren't beast though, i understand" << '\n';
                    } else {
                        cout << "Huh?" << '\n';
                    }
                } else if (buyw == "2" || buyw == "Stonewall" || buyw == "stonewall") {
                    cout << "Its boost your durable significantly but your agilty will decrease a little, its just 200 golds, interested? " << '\n';
                    getline(cin, buy);
                    if (buy == "Yes" || buy == "yes") {
                        cout << "Nice, just don't use it if you need agility in battle" << '\n';
                    } else if (buy == "No" || buy == "no") {
                        cout << "I see, want to look for another armors?" << '\n';
                    } else {
                        cout << "Huh?" << '\n';
                    }
                } else if (buyw == "3" || buyw == "Guardian embrace" || buyw == "guardian embrace") {
                    cout << "This is one of my recommendations, it will give strong shields for 30 seconds for you an your allys, 400 golds if you want to take it, want it?" << '\n';
                    getline(cin, buy);
                    if (buy == "Yes" || buy == "yes") {
                        cout << "Great, have a safe journey traveler" << '\n';
                    } else if (buy == "No" || buy == "no") {
                        cout << "Sometimes, we don't need a shield don't we?" << '\n';
                    } else {
                        cout << "Huh?";
                    }
                }
            }
            cout << "Shall we continue to the last hall?" << '\n';
            getline(cin, yc);
            if (yc == "Next" || yc == "next" || yc == "Continue" || yc == "continue" || yc == "Yes" || yc == "yes") {
                cout << "In the hall three, we have some heavy armors, like: " << '\n';
                cout << "1. Dragon scale" << '\n';
                cout << "2. Titan grip" << '\n';
                cout << "3. Colossus embrace" << '\n';
                cout << "This was the last hall we have, anything catch your interest? " << '\n';
                getline(cin, buyw);
                if (buyw == "1" || buyw == "Dragon scale" || buyw == "dragon scale") {
                    cout << "It give you solid fire resistance and defense, with the dragon scale, the cost is 500 golds, want to take it with you?" << '\n';
                    getline(cin, buy);
                    if (buy == "Yes" || buy =="yes") {
                        cout << "Perfect, give me a minute" << '\n';
                    } else if (buy == "No" || buy == "no") {
                        cout << "I assume you don't always go on battle with high temperature? i understand" << '\n';
                    } else {
                        cout << "huh" << '\n';
                    }
                } else if (buyw == "2" || buyw == "Titan grip" || buyw == "titan grip") {
                    cout << "What a nice choice, beside increase defense, it increase your damage on on rock type monster, the cost was 450 golds, buy it?" << '\n';
                    getline(cin, buy);
                    if (buy == "Yes" || buy == "yes") {
                        cout << "Nice, it will kinda heavy but i kno you can" << '\n';
                    } else if (buy == "No" || buy == "no") {
                        cout << "Understandable, you get trouble if carry such heavy armor" <<'\n';
                    } else {
                        cout << "Huh?" << '\n';
                    }
                } else if (buyw == "3" || buyw == "Colossus embrace" || buyw == "colossus embrace") {
                    cout << "This was the most heavy armor we have, but it signifantly increase damage, defense, and durability, the cost was 700 golds, buy it?" << '\n';
                    getline(cin, buy);
                    if (buy == "Yes" || buy =="yes") {
                        cout << "NICE ONE!!!, oh sorry, i mean... you will be really tanky with this" << '\n';
                    } else if (buy == "No" || buy == "no") {
                        cout << "Its kinda...understandable i guess " << '\n';
                    } else {
                        cout << "Huh?" << '\n';
                    }
                }
            }
        }
    } else if (yourchoice == "Potions" || yourchoice == "Potion" || yourchoice == "potions" || yourchoice == "potion" || yourchoice == "pot" || yourchoice == "pots" || yourchoice == "Pot" || yourchoice == "Pots" || yourchoice == "3" ) {
        cout << "Wonderfull!! but before that, let me ask you, what type of potions are you interested in?" << '\n';
        cout << "1. Support potions?" << '\n';
        cout << "2. Attack potions?" << '\n';
        cout << "3. Defense potions?" << '\n';
        str lr;
        getline(cin, lr);
        if (lr == "Support" || lr == "support" || lr == "supports" || lr == "Supports" || lr == "1") {
            cout << "Great, here my recommendations: " << '\n';
            cout << "1. Elixir of vitality" << '\n';
            cout << "2. Potion of resilience" << '\n';
            cout << "3. Elixir of rejuvenation" << '\n';
            cout << "Something catch your eye?" << '\n';
            str buyw;
            str buy;
            getline(cin, buyw);
            if (buyw == "1" || buyw == "Elixir of vitality" || buyw == "elixir of vitality") {
                cout << "The effect will be 5 minutes long, and the price was 350 golds, buy it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Wonderfull, let me pack it ~" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Alright, it's okay traveler" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            } else if (buyw == "2" || buyw == "Potion of resilience" || buyw == "potion of resilience") {
                cout << "Surely you can adapt faster than usual, 5 minutes of effect, and the price was 300 golds, want to take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Give me a second to pack it" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "I see, i assume you could already have fast adapt ability eh?" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            } else if (buyw == "3" || buyw == " Elixir of rejuvenation" || buyw == "elixir of rejuvenation") {
                cout << "This one can reduce pain and heal your wounds for about 3 minutes, the price is 350 golds, would you take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Give me a second then" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "I assume you are rarely got injured type, eh?" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            }
        } else if (lr == "Attack" || lr == "attack" || lr == "attacks" || lr == "Attacks" || lr == "2") {
            cout << "Nice, These potions sure will be boost your attack: " << '\n';
            cout << "1. Elixir of fury" << '\n';
            cout << "2. Potion of might " << '\n';
            cout << "3. Elixir of berserk" << '\n';
            cout << "Something catch your eye?" << '\n';
            str buyw;
            str buy;
            getline(cin, buyw);
            if (buyw == "1" || buyw == "Elixir of fury" || buyw == "elixir of fury") {
                cout << "Your might be lose a little bit of control, but it increase your damage, the effect will last for 3 minutes, 350 golds and you can take it, want it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes " || buy == "yes") {
                    cout << "Great, just don't use it too much" << '\n';
                } else if (buy == "No " || buy == "no" ) {
                    cout << "Mmm, i don't really recommend it though" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            } else if (buyw == "2" || buyw == "Potion of might" || buyw == "potion of might") {
                cout << "You will be more focused and your durability will increase as well, th effect will last for 2 minutes, 200 golds and you can have it, want it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Nice, give me a minute" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Just looking around? haha, take your time" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            } else if (buyw == "3" || buyw == " Elixir of berserk" || buyw == "elixir of berserk") {
                cout << "This is very risky, you could lose sanity although it increase your damage, speed, and agility signifocantly, it cost 450 golds, i fon't recommend it, butw did you really want to take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Eh...?, just be careful and just use it when the situation really bad, okay?" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "What a relief, that a wise choice from ya" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            }
        } else if (lr == "Defense" || lr == "defense" || lr == "defenses" || lr == "Defenses" || lr == "3") {
            cout << "Great, here my recommendations: " << '\n';
            cout << "1. Elixir of protection" << '\n';
            cout << "2. Potion of fortitude" << '\n';
            cout << "3. Elixir of resilience" << '\n';
            str buyw;
            str buy;
            cout << "Tank type? we have some nice potions for you here~" << '\n';
            getline(cin, buyw);
            if (buyw == "1" || buyw == "Elixir of protection" || buyw == "elixir of protection") {
                cout << "It give you shield for 30 seconds, and increaase durability for 3 minutes, the price is 300 golds, interested?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Give me a second to pack it" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "I see, you already have shield skill eh?" << '\n';
                } else {
                    cout << "Huh?" << '\n';
                }
            } else if (buyw == "2" || buyw == "Potion of fortitude" || buyw == "potion of fortitude") {
                cout << "Your durability and resistance will got increase for 5 minutes, this potion cost 350 golds, want to take it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Great, have a safe journey traveler" << '\n';
                } else if (buy == "No" || buy == "no") {
                    cout << "Just lookibg around? take your time" << '\n';
                } else {
                    cout << "huh?" << '\n'
;                }
            } else if (buyw == "3" || buyw == "Elixir of resilience" || buyw == "elixir of resilience") {
                cout << "Your resistance will increase signifcantly for 5 minutes, the price is 390 golds, want to buy it?" << '\n';
                getline(cin, buy);
                if (buy == "Yes" || buy == "yes") {
                    cout << "Nice, give me a second"<<'\n';               
                } else if (buy == "No" || buy == "no") {
                    cout << "Already have high resistance? cool" << '\n';
                } else {
                    cout << "Huh?" <<'\n';
                }
            }
        }
        } else {
            cout << "Sorry, we didnt have any type of potions like that!!" << '\n';
        }
    } else if (yourchoice == "Accessories" || yourchoice == "Accessory" || yourchoice == "accessories" || yourchoice == "accessory" || yourchoice == "acce" || yourchoice == "Acce" || yourchoice == "Acc" || yourchoice == "acc" || yourchoice == "3") {
        cout << "Sorry, i might be a little bit late to update our accessories, so i dont have much accessories for you, but here are some accessories that i have: " << '\n';
        cout << "1. Ring of power" << '\n';
        cout << "2. Amulet of wisdom" << '\n';
        cout << "3. Bracelet of agility" << '\n';
        str buyw;
        str buy;
        cout << "what will you pick?" << '\n';
        getline(cin, buyw);
        if (buyw == "1" || buyw == "Ring of power" || buyw == "ring of power") {
            cout << "This ring will increase your damage and strength a little, this ring cost 150 golds, want it?" << '\n';
            getline(cin, buy);
            if (buy == "Yes" || buy == "yes") {
                cout << "Alright, as you wish" << '\n';
            } else if (buy == "No" || buy == "no") {
                cout << "Try other accessories" << '\n';
            } else {
                cout << "Huh?" << '\n';
            }
        } else if (buyw == "2" || buyw == "Amulet of wisdom" || buyw == "amulet of wisdom") {
            cout << "This amulet give you quite much boost on knowledge and small amount of calmness, the price is 300 golds, interested?" << '\n';
            getline(cin, buy);
            if (buy == "Yes" ||  buy == "yes") {
                cout << "Great, it surely will be useful for you"<< '\n';
            } else if (buy == "No" || buy == "no") {
                cout << "Not into knowledge type? alright~" << '\n';
            } else {
                cout << "Huh?" << '\n';
            }
        } else if (buyw == "3" || buyw == "Bracelet of agility" || buyw == "bracelet of agility") {
            cout << "Like its name, it mainly boost your agility significantly, the price was 270 golds, want it?" << '\n';
            getline(cin, buy);
            if (buy == "Yes" || buy == "yes") {
                cout << "Perfect, give me a second" << '\n';
            } else if (buy == "No" || buy == "no") {
                cout << "I see, aren't speed type fighter eh?" << '\n';            
            } else {
                cout << "Huh?" << '\n';
            }
        }
    } else {
        cout << "Sorry!!! i dont sell other items besides those!!" << '\n';
    }
    return 0;
    
}
