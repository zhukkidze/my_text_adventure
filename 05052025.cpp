#include <iostream>

int main() {
    /* text-adventure project includes two choices and user input. 
    1) Story line - choosing your career path while finishing the school. Choices are 1) Programming Engineer. 2) Baker. 3) Sportsman. */

    std::cout << "\n\n";  // Adds a blank line
    std::cout << "  Your future is a blank canvas—your choices will shape it. Every path has challenges, but passion and perseverance turn dreams into reality.\n\n";
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

    /*3) Splitting each career in 3-4 ways to provide more choices.
	- Programming engineer has 3 ways to become:
		1) Enter A - Start self-study while in school.
		2) Enter B - Enter IT courses right after finishing High-School.
		3) Enter C - Enter University for computer science study after High-School.
		4) Enter D - for all the above choices to become a real self-made genius with good knowledge and practice.*/

    char choice1 = '0'; // Tracks the user's career path choice

     for (int i = 0; i < 4 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C' && choice1 != 'D'; i++) {

        std::cout << "Enter A - if you want to start learning Informational Technology while being in High-School on your own.\n";
        std::cout << "Enter B - if you want to enter IT courses right after High-SChool.\n";
        std::cout << "Enter C - if you want to enter University for Computer Science study after finishing High-School.\n";
        std::cout << "Enter D - if you want to do all the above choices to become a real self-made genius with good knowledge and practice.\n";
        std::cout << "\n\n";
        std::cin >> choice1;

    }


    return 0;
}
