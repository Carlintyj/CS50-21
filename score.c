#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you score? ");
    const int MINE = 2; //you cannot change mine = 2 regardless of what

    if (points < MINE)
    {
        printf("You scored less point than me\n");
    }
    else if (points > MINE)
    {
        printf("You scored more point than me\n");
    }
    else
    {
        printf("You scored the same point than me\n");
    }
}