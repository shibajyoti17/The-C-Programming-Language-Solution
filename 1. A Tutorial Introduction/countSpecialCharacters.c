#include<stdio.h>

int main(){
    int input;
    int spaceCount, tabCount, lineCount;
    spaceCount = tabCount = lineCount = 0;

    printf("Start Typing.... \n");

    while ((input = getchar()) != EOF)
    {
        if (input == '\n')
        {
            lineCount++;
        }
        else if (input == '\t')
        {
            tabCount++;
        }
        else if (input == ' ')
        {
            spaceCount++;
        }
    }

    printf("Total number of spaces: %d\n", spaceCount);
    printf("Total number of lines: %d\n", lineCount);
    printf("Total number of tabs: %d\n", tabCount);
    
    return 0;
}