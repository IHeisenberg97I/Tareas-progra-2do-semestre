#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int user_Choice = 0;

    cout << "Inserte un numero del 1 al 5000 \n";

    while (user_Choice <= 5000)
    {
        cin >> user_Choice;

        if (user_Choice <= 5000)
        {
            for (int i = user_Choice; i > 0; i--)
            {
                if (user_Choice % i == 0)
                {
                    cout << i << "\n";
                }
            }
        }

        else if (user_Choice >= 5000)
        {
            cout << "Numero mayor a 5000 bye";
        }

    }
    return 0;
}
