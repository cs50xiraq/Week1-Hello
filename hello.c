//the library of input and output function
#include <stdio.h>
#include<cs50.h>

int main(void)
{
    
    string name = get_string("what is your name?\n");
    printf("hello, %s", name);
}
