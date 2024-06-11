#include<stdio.h>
#define MAXLENGTH 1000

int getline(char string[],int limit);
void reverseString(char string[],int length);
void printLine(char string[],int length);

int main(){

    int length;
    char string[MAXLENGTH];

    while ((length = getline(string,MAXLENGTH)) > 0)
    {
        reverseString(string,length);
        printLine(string,length);
    }
    
    return 0;
}

int getline(char string[], int limit){

    int i, input;

    for (i = 0; i < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++i)
    {
        string[i] = input;
    }
    if (input == '\n')
    {
        string[i] = '\n';
        i++;
    }
    
    string[i] = '\0';
    
    return i;
}

void reverseString(char string[],int length){

    int low = 0, high = length - 2;

    while (low <= high)
    {
        char temp = string[low];
        string[low] = string[high];
        string[high] = temp;
        low++;
        high--;
    }
    
}

void printLine(char string[], int newLength){

    for (int i = 0; i <= newLength; i++)
    {
        putchar(string[i]);
    }

2