#include<stdio.h>

int main(){
    int input;
    char whitespace = ' ';
    
    while ((input = getchar()) != EOF)
    {
        if (input == whitespace)
        {
            while ((input = getchar()) == whitespace);
            putchar(' ');
        }
        putchar(input);
    }

    return 0;
}