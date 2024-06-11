#include<stdio.h>
#define MAXLINE 1000
#define THRESHOLD 80

int getline(char string[], int limit);
void printline(char string[], int length);

int main(){
    
    char string[MAXLINE];
    int length;

    while ((length = getline(string,MAXLINE)) > 0)
    {
        if (length >= THRESHOLD)
        {
            printline(string,length);
        }
    }

    return 0;

}

int getline(char string[], int limit){
    
    int input,i;

    for (i = 0; i < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++i)
    {
        string[i] = input;
    }
    if (input == '\n')
    {
        string[i] = input;
        i++;
    }
    string[i] = '\0';

    return i;
    
}

void printline(char string[], int length){

    for (int i = 0; i < length; i++)
    {
        putchar(string[i]);
    }
    
}