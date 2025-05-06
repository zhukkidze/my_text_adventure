#include <iostream>

int main()
{
    /* text-adventure project includes two choices and user input.
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

    int careerChoice = 0; // Variable to store the user's career choice
    std::cout << "Enter 1, 2, or 3 to choose your career:    ";// Prompt the user for input
    std::cin >> careerChoice; // Read the user's input

    if (careerChoice == 1)
    {
        std::cout << "\nYou pressed 1 and You chose Programming Engineer.\n\n";
    }
    else if (careerChoice == 2)
    {
        std::cout << "\nYou pressed 2 and You chose Baker.\n\n";
    }
    else if (careerChoice == 3)
    {
        std::cout << "\nYou pressed 3 and You chose Sportsman.\n\n";
    }
    else
    {
        std::cout << "\nInvalid choice. Please restart the program and try again.\n\n";
        return 0; // Exit the program if the input is invalid
    }

    /*3) Splitting each career in 3-4 ways to provide more choices.
    - Programming engineer has 3 ways to become:
        1) Enter A - Start self-study while in school.
        2) Enter B - Enter IT courses right after finishing High-School.
        3) Enter C - Enter University for computer science study after High-School.
        4) Enter D - for all the above choices to become a real self-made genius with good knowledge and practice.*/

    char choice1 = '0'; // Tracks the user's career path choice

    for (int i = 0; i < 4 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C' && choice1 != 'D'; i++)
    {
        std::cout << "Enter A - if you want to start learning Informational Technology while being in High-School on your own.\n";
        std::cout << "Enter B - if you want to enter IT courses right after High-School.\n";
        std::cout << "Enter C - if you want to enter University for Computer Science study after finishing High-School.\n";
        std::cout << "Enter D - if you want to do all the above choices to become a real self-made genius with good knowledge and practice.\n";
        std::cout << "\n\n";
        std::cin >> choice1;
    }

    if (choice1 == 'A')
    {
        std::cout << "One of the best choices.\n";
        std::cout << "It offers the opportunity to become a self-made specialist with countless ways to explore how everything works—not only in life but also in the field of IT.\n";
        std::cout << "It's also the longest and the hardest way to be the one. It will show all benefits of that way when you meet like-minded people in the future.\n";
    }
    else if (choice1 == 'B')
    {
        std::cout << "Good choice.\n";
        std::cout << "YOU did it!' screams the Queen of Hearts. With that choice, you can concentrate on general studies in your high school and make sure that you have good grades.\n";
        std::cout << "And right after, with a good diploma in overall studies, you enter IT courses to discover a new career in your life. Most of all, you might like it.\n";
    }
    else if (choice1 == 'C')
    {
        std::cout << "Great choice.\n";
        std::cout << "You can enter University for Computer Science study after finishing High-School.\n";
        std::cout << "Also you'll have a good grade high-school diploma which will be helpful for university admission.\n";
        std::cout << "There, at University you'll have classic studies, classic teachers, labs, practice, and new friends.\n";
    }
    else if (choice1 == 'D')
    {
        std::cout << "Best choice.\n";
        std::cout << "First of all, you made your choice while being in high school and started digging into the Information Technology field in advance and on your own.\n";
        std::cout << "Second of all, after high school, you enter IT courses or Boot-Camp where you polish your skills, having your questions answered by specialists.\n";
        std::cout << "And the top thing during your long way of studying is that you enter University for Computer Science study. Where all come together and you'll get noticed by a future employer.\n";
        std::cout << "You probably picture yourself as a successful IT specialist, right?\n";
    }
    else
    {
        std::cout << "Invalid choice. Please restart the program and try again.\n";
    }

    return 0;
}
