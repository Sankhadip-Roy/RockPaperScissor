#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        printf("You and computer both chose rock.\n");
        printf("Game draw!\n");
        return 0;
    }
    if (you == comp && you == 'p')
    {
        printf("You and computer both chose paper.\n");
        printf("Game draw!\n");
        return 0;
    }
    if (you == comp && you == 's')
    {
        printf("You and computer both chose scissor.\n");
        printf("Game draw!\n");
        return 0;
    }

    if (you == 'r' && comp == 'p')
    {
        printf("You chose rock and computer chose paper.\n");
        printf("You Lose!\n");
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        printf("You chose paper and computer chose rock.\n");
        printf("You win!\n");
        return 1;
    }

    if (you == 's' && comp == 'p')
    {
        printf("You chose scissor and computer chose paper.\n");
        printf("You win!\n");
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        printf("You chose paper and computer chose scissor.\n");
        printf("You Lose!\n");
        return -1;
    }

    if (you == 's' && comp == 'r')
    {
        printf("You chose scissor and computer chose rock.\n");
        printf("You Lose!\n");
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        printf("You chose rock and computer chose scissor.\n");
        printf("You win!\n");
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

        printf("\nrock    -> 'r'\npaper   -> 'p'\nscissor -> 's'\nexit    -> e\n");
        fflush(stdin);
        scanf("%c", &you);
        if (you == 'e')
            break;
        result = rockPaperScissor(you, comp);
    }
    return 0;
}