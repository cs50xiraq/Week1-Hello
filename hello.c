#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //taking input from the user and save it into "string" variable.
    string name = get_string("What's your name?\n"); 
    printf("Hello, %s\n", name);
}
