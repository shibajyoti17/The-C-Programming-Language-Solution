#include<stdio.h>

int main(){
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;    // lower limit of temperature scale
    upper = 300; // upper limit of temperature scale
    step = 20;  // step size
    
    fahr = lower;

    // Building the header for the output
    printf("*************************************\n");
    printf("Farenheit \t Celcius\n");
    printf("*************************************\n");

    while (fahr <= upper)
    {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t\t %6.1f\n", fahr, celcius);
        fahr += step;
    }
    
    return 0;
}