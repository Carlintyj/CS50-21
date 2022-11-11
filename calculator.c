#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%li\n",x+y); //long integer for more than 2^32 due to 32 bits

    if (x<y)
    {
        printf("x is less than y");
    }
    else if (x == y)
    {
    printf("x is equal to y");
    }
    else
    {
        printf("x is not less than y");
    }
}
