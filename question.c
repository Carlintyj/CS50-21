#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char answer = get_char("Yes or No? ");
    if (answer == 'y' || answer =='Y')
    {
        printf("yes\n");
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("no\n");
    }
    else
    {
        printf("invalid input");
    }
}