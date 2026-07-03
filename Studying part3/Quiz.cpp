#include <iostream>
#include <algorithm>

int ch(int pick) {
    if(pick == 1) {
        std::cout << "While crocodiles have the strongest actual bite force in the world today, pound-for-pound, the horned dung beetle is the strongest animal on Earth. It can pull over 1,100 times its own body weight. If it had jaw mechanics scaled to human size, its relative clamping and tearing force would utterly dwarf a shark or a bear.\n";
    } else if(pick == 2) {
        std::cout << "We often think of Mammoths as prehistoric creatures from millions of years ago, but a small population survived on Wrangel Island until around 1650 BCE. By that time, a Bristlecone Pine tree named 'Methuselah' in California was already roughly 3,000 years old. That exact tree is still alive today.\n";
    } else if(pick == 3) {
        std::cout << "Titan is so cold that natural gas liquefies. Because Titan’s gravity is low (close to our Moon's) and its atmosphere is incredibly thick, the liquid methane raindrops grow much larger than drops on Earth (up to nearly an inch wide) and fall roughly six times slower—appearing like lazy, floating liquid beads.\n";
    } else if(pick == 4) {
        std::cout << "Current scientific estimates show that the human body is actually a walking ecosystem. The ratio is roughly 1:1.3, meaning about 57% of the cells in your body belong to microbes living in your gut, on your skin, and inside your organs. You are technically more microbe than you are human!\n";
    } else if(pick == 5) {
        std::cout << "Nintendo was founded in September 1889 as a handmade playing card (Hanafuda) company in Kyoto, Japan. This was less than a year after the infamous Jack the Ripper murders took place in London in late 1888, meaning the unidentified killer was actively alive when the company was born.\n";
    } else {
        std::cout << "please use 1-5\n";
    }

return pick;
}

int main() {

    std::string question[] =    {"1. If you scaled a specific animal up to human size, which of these creatures would technically have the strongest bite force relative to its body mass?",
                                 "2. There is a living organism on Earth that was already over 1,000 years old when the last Woolly Mammoth died. What is it?", 
                                 "3. If you were standing on the surface of Saturn's moon, Titan, what would the rain look like?",
                                 "4. By cell count, what percentage of the 'human' body is actually made up of foreign, non-human microbial cells (like bacteria and fungi)?", 
                                 "5. When the gaming giant Nintendo was first founded, which historical figure was still alive?"};

    std::string options[][4] = {{"A. Great white shark", "B. Hippopotamus", "C. Grizzly bear", "D. Crocodile dung beetle"},
                                {"A. A great basin bristlecone pine", "B.  A giant sequoia", "C. A coastal redwood", "D. A pando aspen clone"}, 
                                {"A. Sparkling diamnond", "B. Liquid methane dropping in slow motion", "3. Scalding sulfuric acid", "D. Red-hot liquid iron"}, 
                                {"A. About 1%", "B. Roughly 15%", "C. Over 50%", "D. Exactly 99%"},
                                {"A. Jack the riper", "B. Abraham lincoln", "C. Joan of arc", "D. Napoleon bonaparte"}};
        
    char keywords[] = {'D', 'A', 'B', 'C', 'A'};

    int totalQ = sizeof(question) / sizeof(question[0]);
    int totalO = sizeof(options[0]) / sizeof(options[0][0]);
    char answer;
    int score = 0;
    int pick;

    for(int i = 0; i < totalQ; i++) {
        std::cout << question[i] << '\n';
        std::cout << "---------------\n";
        for(int j = 0; j < totalO; j++) {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Answer: ";
        std::cin >> answer;
        answer = toupper(answer);

        if(answer == keywords[i]) {
            std::cout << "Niche, you hit the spot" << '\n';
            score++;
        } else {
            std::cout << "Wrong!!" << '\n';
            std::cout << "The correct answer is " << keywords[i] << '\n';
        }
    }

    std::cout << "----------Result----------\n";
    std::cout << "The correct answer you got is: " << score << '\n';
    std::cout << "Total question: " << totalQ << '\n';
    std::cout << "Total score: " << (score/(double)totalQ)*100 << "%" << '\n';


    std::string choice;
    std::cout << "Would you like to get an explanation (yes/no)?\n";
    std::cin >> choice;
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){
        return std::tolower(c);
    });
    
    if(choice == "yes"){
        std::cout << "we got a learner here, sure!!, what number did you want to get explained (answer with 1-5)?\n";
        std::string numb[] = {"1. Number 1", "2. Number 2", "3. Number 3", "4. Number 4", "5. Number 5"};

        for(int i = 0; i < sizeof(numb)/sizeof(numb[0]); i++){
            std::cout << numb[i] << '\n';
        }
        std::cin >> pick;
        ch(pick);
    } else {
        std::cout << "Sure thing...\n";
    }

    return 0;
}