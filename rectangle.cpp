#include<stdio.h>

int main() {
    float length, width;
    printf("Enter the length of the rectangle\n");
    scanf_s("%f", &length);

    printf("Enter the width of the rectangle\n");
    scanf_s("%f", &width);

    printf("The area if your rectangle is %f", length * width);
}