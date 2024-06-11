#include<stdio.h>

int main(){

    int input;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ')
        {
            putchar('\n');
            continue;
        }

        putchar(input);
        
    }

    return 0;
    
}