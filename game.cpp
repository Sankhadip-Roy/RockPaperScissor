#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int rockPaperScissor(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Non-draw conditions
    // rr && pp && ss
    // Cases covered:
    // rp
    // pr
    // ps
    // sp
    // rs
    // sr

    if (you == comp && you == 'r')
    {
        cout << "You and computer both chose rock." << endl;
        cout << "Game draw!" << endl;
        return 0;
    }
    if (you == comp && you == 'p')
    {
        cout << "You and computer both chose paper." << endl;
        cout << "Game draw!" << endl;
        return 0;
    }
    if (you == comp && you == 's')
    {
        cout << "You and computer both chose scissor." << endl;
        cout << "Game draw!" << endl;
        return 0;
    }

    if (you == 'r' && comp == 'p')
    {
        cout << "You chose rock and computer chose paper." << endl;
        cout << "You Lose!" << endl;
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        cout << "You chose paper and computer chose rock." << endl;
        cout << "You win!" << endl;
        return 1;
    }

    if (you == 's' && comp == 'p')
    {
        cout << "You chose scissor and computer chose paper." << endl;
        cout << "You win!" << endl;
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        cout << "You chose paper and computer chose scissor." << endl;
        cout << "You Lose!" << endl;
        return -1;
    }

    if (you == 's' && comp == 'r')
    {
        cout << "You chose scissor and computer chose rock." << endl;
        cout << "You Lose!" << endl;
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        cout << "You chose rock and computer chose scissor." << endl;
        cout << "You win!" << endl;
        return 1;
    }
}
int main()
{
    char you, comp;
    int number, result;
    srand(time(0));
    while (1)
    {
        number = rand() % 100 + 1;

        if (number <= 33)
            comp = 'r';
        else if (number > 33 && number <= 66)
            comp = 'p';
        else
            comp = 's';

        cout << endl
             << "rock    -> 'r'" << endl
             << "paper   -> 'p'" << endl
             << "scissor -> 's'" << endl
             << "exit    -> 'e'" << endl;
        fflush(stdin);
        cin >> you;
        if (you == 'e')
            break;
        result = rockPaperScissor(you, comp);
    }
    return 0;
}