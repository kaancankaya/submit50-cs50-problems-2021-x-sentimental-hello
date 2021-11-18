#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //asks he/she's name from user
    string name = get_string("What is your name?\n");
    //writes user's name to the screen
    printf("hello, %s\n", name);
}