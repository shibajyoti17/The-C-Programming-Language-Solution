#include<stdio.h>

int main(){
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;    // lower limit of temperature scale
    upper = 300; // upper limit of temperature scale
    step = 20;  // step size
    
    // Building the header for the output
    printf("*************************************\n");
    printf("Celcius \t Fahrenheit\n");
    printf("*************************************\n");

// Prints the celcius-fahrenheit table in descending order
    for(celcius = upper; celcius >= lower; celcius -= step)
    {
        fahr = ((9.0/5.0) * celcius) + 32.0;
        printf("%6.1f \t\t %3.0f\n", celcius, fahr);
    }
    
    return 0;
}