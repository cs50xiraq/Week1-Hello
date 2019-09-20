#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n"); //Enter name
    printf("hello, %s\n", name); //print Hello word
    return 0;
}
