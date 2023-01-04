//a program that prints all positive integer values 1...100 that are not divisible by 7 using continue-statement.
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i%7==0)
        {
            continue;
        }
        printf("%d ", i);
    }
}


#include <stdio.h>
#include <stdbool.h>

void printIntegers(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        printf("%d ", i);
        if ((i % 5 == 0) && (i % 7 == 0))
        {
            break;
        }
    }
    printf("\n");
}

int main(int argc, char** argv)
{
    printIntegers(1, 35);
}