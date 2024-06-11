#include<stdio.h>

#define MAXLINES 1000

int getline(char string[], int limit);
int trimLine(char string[], int length);
void printLine(char string[], int newLength);

int main(){

    char string[MAXLINES];
    int length, newLength;
    length = newLength = 0;
    
    while ((length = getline(string, MAXLINES)) > 0)
    {
        newLength = trimLine(string, length);
        printLine(string, newLength);
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

int trimLine(char string[], int length){
   
   int i;

   for (i = length - 1; i >= 0; i--)
   {
        if(string[i] != ' ' && string[i] != '\t' && string[i] != '\n'){
            string[i+1] = '\n';
            string[i+2] = '\0';
            break;
        }
   }
   
   return (i+1);
}

void printLine(char string[], int newLength){

    for (int i = 0; i <= newLength; i++)
    {
        putchar(string[i]);
    }

}