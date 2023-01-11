#include <iostream>

bool game()
{

    int mynum = ((rand() % 100) + 1);

    int trys = 0;

    std::cout << "----------Number Guessing Game----------" << '\n';
    std::cout << "Type 0 at any time to quit!" << '\n';
    std::cout << "----------------------------------------" << '\n';

    while (true)
    {

        std::string innumstr;
        int innum;

        std::cout << "Enter a number (1-100): ";

        std::getline(std::cin, innumstr);

        innum = std::stoi(innumstr);

        if (innum == mynum)
        {

            std::cout << "You win!" << '\n';
            std::cout << "It took you " << trys << " trys!" << '\n';

            return true;
        }
        else if (innum == 0)
        {

            std::cout << "The number was " << mynum << '\n';
            std::cout << "You had " << trys << " trys!" << '\n';

            return false;

        }
        else
        {

            if (innum > mynum)
            {

                std::cout << "Lower!" << '\n';
            }
            else if (innum < mynum)
            {

                std::cout << "Higher!" << '\n';
            }
        }

        trys += 1;
    }
}

int main()
{

    srand(time(NULL));

    while (game())
    {

        std::string dostop;

        std::cout << "Do you want to play again? (y or n): ";

        std::getline(std::cin, dostop);

        if (dostop == "n")
        {

            break;
        }
    }

    std::cout << "Goodbye!" << '\n';

    return 0;
}
