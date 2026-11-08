#include <iostream>
#include <ctime>
#include <windows.h>

int main() {
    std::string input;
    std::string acc;
    std::string ch;
    std::string ps;
    srand(time(0));

    std::cout << "Morning pal" << std::endl;
    Sleep(2000);
    std::cout << "Are you already have planning for today?" << std::endl;
    std::cout << "A. Not yet \n";
    std::cout << "B. Well, yeah, i already made plans for today \n"; 
    std::cin >> input;

    if(input == "A" || input == "a") {
        std::cout << "Awh.. that's suck \n";
        Sleep(2000);
        std::cout << "Well... want to play a game with me? \n";
        std::cout << "A. For real? \n";
        std::cout << "B. Meh, i dont feel like i want to play a game now \n";
        std::cin >> acc;
           if(acc == "A" || acc =="a") {
            std::cout << "Yeah!!\n";
            Sleep(3000);
            std::cout << "Let's go to my room \n";
            Sleep(2500);
            std::cout << "Sorry if my room kinda messy hehe\n";
            std::cout << "Well, lets see what did i have now....\n";
            Sleep(1000);
            int ww = rand() % 3 + 1;
               switch(ww) {
                case 1:
                   std::cout << "I have 'It Takes Two' rn, wanna play it? \n";
                   std::cout << "A. Sure, lets play it" << std::endl;
                   std::cout << "B. hmmm, how the gameplay? \n";
                   std::cin >> ch; 
                      if(ch == "A" || ch == "a") {
                        std::cout << "Hell yeah, come closer, let me lend you my console!! \n";
                      } else if(ch == "B" || ch == "b") {
                        std::cout << "Well, its like puzzle ish game, there is two char that we can play it, May and Cody \n";
                        std::cout << "This game cant be played if solo, aka must with two player \n";
                        std::cout << "It just... this game force us to have solid teamwork \n";
                        std::cout << "But it doesnt matter, because we were close companion, right? \n";
                        Sleep(1500);
                        std::cout << "Mate~ :D\n";
                      } else {
                        std::cout << "Sorry? \n";
                      }
                    break;
                case 2:
                   std::cout << "How about... 'A Way Out'? \n";
                   std::cout << "A. I heard it before... whats that game about? \n";
                   std::cin >> ch;
                      if(ch == "A" || ch == "a"){
                        std::cout << "Well, it kinda same to It takes two, it just have different theme\n";
                        std::cout << "Uh... it have quick time event and race feature too if i wasnt wrong\n";
                        std::cout << "whatever is it, lets just play it, okay mate?\n";
                      } else {
                        std::cout << "eh.. what do you mean? did you hurt? \n";
                      }
                    break;
                case 3:
                   std::cout << "'Cuphead' is one of my favorite! \n";
                   std::cout << "A. Same here, haven't finish it yet, let's play that \n";
                   std::cout << "B. Eh..? i don't know what special about that game, i just think that the gameplay was boring \n"; 
                   std::cin >> ch;
                   if(ch == "A" || ch == "a") {
                    std::cout << "Hell yeah, go to the couch!! \n";
                   } else if (ch == "B" || ch == "b") {
                    do{
                        std::cout << "Well... its like retro game i guess? i just like it because the difficuly is hard like hell\n";
                        std::cout << "Just..try it with me okay? please?? \n";
                        std::cout << "A. Okay okay... you got me\n";
                        std::cout << "B. Uh....\n";
                        std::cin >> ps;
                    }while (ps == "B"|| ps == "b");
                    std::cout << "YESS!! YOU MY BEST HOMIESS \n";
                   }
                break;
               }
            } 
    } else if (input == "B" || input =="b") {
      std::string ch;
      std::cout << "Ah... okay... \n";
      std::cout << "Sniff*\n";
      std::cout << "A. uh... what's wrong man? \n";
      std::cout << "B. okay....? \n";
      std::cin >> ch;
        if(ch == "A" || ch == "a") {
          std::string che;
          std::cout << "No...Nothing..\n";
          std::cout << "A. Man...cmon, you can tell me you know? \n";
          std::cout << "B. Cmon... you are difficult one, whatever \n";
          std::cin >> che;
             if(che == "A" || che == "a"){
              std::cout << "well... \n";
              std::string teks = "Hesitant...\n";
              for(char c:teks){
                std::cout << c << std::flush;
                Sleep(300);
              }
              std::cout << "Its because... you abandoning ME!!!, sniff* \n";
              std::string cf;
              std::cout << "A. What??? I NEVER DO THAT MAN!!!\n";
              std::cin >> cf;
                 if(cf == "A" || cf == "a") {
                  std::cout << "YEAH YOU DO!!\n";
                  std::string tek = "sniff..\n";
                  for(char c:tek){
                    std::cout << c << std::flush;
                    Sleep(100);
                  }
                  std::string tr;
                  std::cout << "You made plan without me... you evil!! hiks*\n";
                  std::cout << "A. Cheer him up, then mock him*\n";
                  std::cout << "B. Leave him*\n";
                  std::cin >> tr;
                     if(tr == "A" || tr == "a") {
                      std::cout << "sniff...i dont need- \n";
                      std::string teks = ".....\n";
                      for(char c:teks) {
                        std::cout << c << std::flush;
                        Sleep(100);
                      }
                      std::cout << "I KNOW YOU WILL MOCK ME!!!!\n";
                     } else if(tr == "B" || tr == "b") {
                      std::cout << "Go away!!... i dont need you to!\n";
                      std::string teks = ".....\n";
                      for(char c:teks){
                        std::cout << c << std::flush;
                        Sleep(100);
                      }
                      std::cout << "Hey hey... wait, don't leave me man, i just kidding!!\n";
                     } else if (ch == "B" || ch == "b") {
                      std::cout << "ck... you really insensitive mann... not funny\n";
                     }
                 }
             }else if(che == "B" || che == "b") {
              std::cout << "...Hey!! i wasn't serious about that you know!!\n";
             }
        }
    }
    return 0;
}