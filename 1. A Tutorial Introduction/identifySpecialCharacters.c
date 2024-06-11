#include<stdio.h>

int main(){
    int input;
    
    while ((input = getchar()) != EOF)
    {
        if (input == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (input == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (input == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(input);
        }
    }

    return 0;
    
}