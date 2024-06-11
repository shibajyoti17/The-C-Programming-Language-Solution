#include<stdio.h>

int main(){
    
    int input, wordLength = 0;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ' || input == '\n')
        {
            for (int i = 0; i < wordLength; i++)
            {
                putchar('|');
            }
            
            wordLength = 0;
            putchar('\n');
        }
        else
        {
            wordLength++;
        }
        
    }

    return 0;
    
}