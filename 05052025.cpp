#include <iostream>

int main() {

    /* text-adventure project includes 3 choices and sub-choices, plus user input.
    1) Story line - choosing your career path while finishing the school. Choices are 1) Programming Engineer. 2) Baker. 3) Sportsman. */

    std::cout << "\n\n"; // Adds a blank line
    std::cout << "  Your future is a blank canvas. Your choices will shape it. Every path has challenges, but passion and perseverance turn dreams into reality.\n\n";
    std::cout << "  Which journey calls to you?\n\n";
    std::cout << "  FIRST CHOICE (Enter 1) Programming Engineer - Build the future with code, solve problems, and innovate the world of technology.\n\n";
    std::cout << "  SECOND CHOICE (Enter 2) Baker - Craft delicious creations, master flavors, and bring joy through the art of baking.\n\n";
    std::cout << "  THIRD CHOICE (Enter 3) Sportsman - Push your limits, train with dedication, and inspire others through athletic excellence.\n\n";
    std::cout << "  Choose your path, commit to growth, and chase your dreams!\n\n";

    // making arrows in ASCII. As if going straight and making turns.

    std::cout << "Left Turn is for Programming Engineer (press - 1) - Straight is for Baker (press - 2) -  Right Turn is for Sportsman (press - 3)\n";

    std::cout << "                                       <<<                      ^^^                         >>>\n";
    std::cout << "                                         |                       |                          |\n";
    std::cout << "                                         |                       |                          |\n";
    std::cout << "                                         |                       |                          |\n";

    std::cout << "\n\n";
    std::cout << "  Choose your career path wisely, for it will shape your future.\n\n";
    std::cout << "  Remember, every choice is a step towards your destiny.\n\n";

    std::cout << "  Let's begin your journey!\n\n";

    int careerChoice; // Stores the user's career selection

    std::cout << "\nChoose your career path:\n\n";
    std::cout << "1 - Programmer\n\n";
    std::cout << "2 - Baker\n\n";
    std::cout << "3 - Sportsman\n\n";
    std::cout << "Enter your choice (1/2/3): - ";
    std::cin >> careerChoice;

    if (careerChoice == 1) { // Programmer and info
        char programmerChoice;
        bool valid = false;
        for (int i = 0; i < 3 && !valid; ++i) {
            std::cout << "\n!!!  You chose **Programming Engineer**  !!!\n\n";
            std::cout << "!!!   **Career Consequences:**  !!!\n";
            std::cout << "   - High demand in the tech industry.\n";
            std::cout << "   - Requires continuous learning as technology evolves.\n";
            std::cout << "   - Potential for remote work and flexibility.\n";
            std::cout << "   - Can be highly lucrative but requires strong problem-solving skills.\n\n";
            std::cout << "Now choose your learning path:\n\n";

            std::cout << "A - Self-study while in school\n";
            std::cout << "B - Enter IT courses after high school\n";
            std::cout << "C - Right after school enter University for computer science\n";
            std::cout << "D - All the above for maximum knowledge\n\n";
            std::cout << "Enter your choice (A/B/C/D): - ";
            std::cin >> programmerChoice;

            switch (programmerChoice) {
                case 'A': 
                    std::cout << "\nGreat choice! Self-study builds independence and problem-solving skills.\n";
                    std::cout << "It offers the opportunity to become a sef-made specialist with countless ways to explore how things work in IT industry.\n";
                    std::cout << "It's also the longest and the hardest way to become the one.\n";
                    std::cout << "And it will give you the most freedom and flexibility in your career.\n";
                    std::cout << "It will show all benefits of that path when you meet like-minded people in the future.\n\n";
                    valid = true;
                    break;
                case 'B':
                    std::cout << "\nGood choice\n";
                    std::cout << "IT courses provide structured learning and networking opportunities.\n";
                    std::cout << "Choosing that path, you will concentarate on your studies and grades in High School.\n";
                    std::cout << "And right after, with a good diploma, you can enter IT courses to discover a new career in your life.\n";
                    valid = true;
                    break;
                case 'C':
                    std::cout <<"\nNot bad, not bad.\n";
                    std::cout << "You will enter University for Computer Science studies after summertime vacation.\n";
                    std::cout << "There, at University, you will learn the fundamentals of programming and computer science.\n";
                    std::cout << "University offers deep theoretical knowledge and research opportunities.\n";
                    valid = true;
                    break;
                case 'D':
                    std::cout << "\nBest Choice!\n";
                    std::cout << "First of all, you made your choice while being in High School and started digging into the Information Technology field in advance and on your own accord.\n";
                    std::cout << "Second of all, after High School, you'll enter IT courses or Boot camps to gain practical skills and have your answers from specialist.\n";
                    std::cout << "You're aiming for greatness! Combining all paths maximizes your expertise.\n";
                    valid = true;
                    break;
                default:
                    std::cout << "\nInvalid choice. Please try again.\n";
            }
            if (valid) break;
            if (i == 2 && !valid) {
                std::cout << "Too many invalid attempts. Exiting program.\n";
                return 0;
            }
        }
    } else if (careerChoice == 2) { // Baker path and info
        char bakerChoice;
        bool valid = false;
        for (int i = 0; i < 3 && !valid; ++i) {
            std::cout << "\n!!!  You chose **Baker**  !!!\n\n";
            std::cout << "!!!  **Career Consequences:**  !!!\n";
            std::cout << "   - Creativity and hands-on work every day.\n";
            std::cout << "   - Requires waking up early and working in a fast-paced environment.\n";
            std::cout << "   - Business opportunities (owning a bakery).\n";
            std::cout << "   - Physical work with standing for long hours.\n\n";
            std::cout << "Select your baking career development:\n\n";
                
            std::cout << "A - Early start in childhood, when you learn from your close relative basics of baking.\n";
            std::cout << "B - Culinary school for formal education\n";
            std::cout << "C - Start your own bakery and learn hands-on\n\n";
            std::cout << "Enter your choice (A/B/C): - ";
            std::cin >> bakerChoice;

            switch (bakerChoice) {
                case 'A':
                    std::cout << "Learning from an relative as Granma gives you valuable hands-on experience and setting up your mind for baking art in the future\n";
                    valid = true;
                    break;
                case 'B':
                    std::cout << "Culinary school provides structured learning and certification.\n";
                    std::cout << "With diploma and experience you have more chances to find a job as a baker or being a pastry chef in a restaurant.\n";
                    valid = true;
                    break;
                case 'C':
                    std::cout << "Starting your own bakery is challenging but rewarding.\n";
                    valid = true;
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
            }
            if (valid) break;
            if (i == 2 && !valid) {
                std::cout << "Too many invalid attempts. Exiting program.\n";
                return 0;
            }
        }
    } else if (careerChoice == 3) { // Sportsman path and info
        char sportsChoice;
        bool valid = false;
        for (int i = 0; i < 3 && !valid; ++i) {
            std::cout << "\n!!!  You chose **Sportsman**  !!!\n\n";
            std::cout << "!!!  **Career Consequences:**  !!!\n";
            std::cout << "   - Requires intense dedication and training.\n";
            std::cout << "   - Competitive industry—success depends on skill & perseverance.\n";
            std::cout << "   - Opportunities in coaching, sponsorships, and media.\n";
            std::cout << "   - Physical wear and risk of injuries over time.\n\n";

            std::cout << "\nYou chose Sportsman! Select your training path:\n";
            std::cout << "A - Enter some training while being a child. As an example to start playing basketball in school team.\n";
            std::cout << "B - Compete locally and build skills gradually.\n";
            std::cout << "C - Work with a personal coach for focused training\n\n";
            std::cout << "Enter your choice (A/B/C): - ";
            std::cin >> sportsChoice;

            switch (sportsChoice) {
                case 'A':
                    std::cout << "A sports in school involves you from early age in sport activities. Also, school coaching and exposure to competitions will help to become a successful athlete.\n";
                    valid = true;
                    break;
                case 'B':
                    std::cout << "Competing locally helps build confidence and experience.\n";
                    valid = true;
                    break;
                case 'C':
                    std::cout << "A personal coach helps refine techniques and accelerate growth.\n";
                    valid = true;
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
            }
            if (valid) break;
            if (i == 2 && !valid) {
                std::cout << "Too many invalid attempts. Exiting program.\n";
                return 0;
            }
        }
    } else {
        std::cout << "Invalid career choice. Please restart the program and try again.\n";
        return 0;
    }

    return 0;
}











