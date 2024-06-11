#include<stdio.h>

int main(){
    int characterCount[256] = {0};
    
    int input;

    while ((input = getchar()) != EOF)
    {
        characterCount[input]++;
    }

    for (int i = 0; i < 255; i++)
    {
        if (characterCount[i] > 0)
        {
            putchar(i);
            for (int j = 0; j < characterCount[i]; j++)
            {
                putchar('|');
            }
            putchar('\n');
        }
    }
    
    return 0;
    
}