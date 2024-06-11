#include<stdio.h>

float fahrenheitToCelcius(float celcius);

int main(){

    float fahrenheit, celcius;

    int lower = 0;
    int upper = 300;
    int step = 20;

    celcius = lower;

    printf("*************************************\n");
    printf("Celcius \t Fahrenheit\n");
    printf("*************************************\n");

    while (celcius <= upper)
    {
        fahrenheit = fahrenheitToCelcius(celcius);
        printf("%3.0f \t\t %6.2f\n", celcius, fahrenheit);
        celcius += step;
    }

    return 0;
       
}

float fahrenheitToCelcius(float celcius){

    float fahrenheit;

    fahrenheit = ((9.0/5.0) * celcius) + 32.0;

    return fahrenheit;
}