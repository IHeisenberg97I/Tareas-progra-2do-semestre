#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

int main()
{
    int user_Choice = 0;

    int Numero_secreto = rand() % 9 + 1;

    cout << "Welcome to the Mistery Number guesser \n Insert a number \n";

    while (user_Choice != Numero_secreto)
    {
        cin >> user_Choice;

        if (user_Choice == Numero_secreto)
        {
            cout << "The number is the same...bye";
        }

        else if (user_Choice < Numero_secreto)
        {
            cout << "The secret number is higher, try again \n";
        }

        else if (user_Choice > Numero_secreto)
        {
            cout << "The secret number is lower try again \n";
        }

    }
}