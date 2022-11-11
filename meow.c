#include <cs50.h>
#include <stdio.h>

void meow(int n)
{
    for (int i = 0; i < 3; i++) //for loop
    {
        printf("meow\n");
    }
}

int main(void)
{
    int counter = 0;
    while (counter<3) //while loop
    {
        printf("meow\n");
        counter++;
    }
    meow(3);

}