#include <math.h>
#include <stdio.h>

int main() {
    double number,square, squareRoot;

    printf("Enter a number: ");
    scanf_s("%lf", &number);
    squareRoot = sqrt(number);
    {
        printf("Square root of %lf =  %lf\n", number, squareRoot);
        printf("Square of %lf =  %lfn", number, number * number);
    }
    if (number<0)
    {
        printf("ERROR");
    }

}