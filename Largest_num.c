#include <stdio.h>
void main(void)
{
    int a = 0, b = 0;
    printf("Type the first number : \n");
    scanf_s("%d", &a);
    printf("Type the second number : \n");
    scanf_s("%d", &b);
    {
        if (a > b)
        {
            printf("The number %d is bigger\n", a);
        }
        else printf("The number %d is bigger\n", b);
    }
}