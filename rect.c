#include<stdio.h>

int main() {
    int length, width;
    printf("Enter the length of the rectangle\n");
    scanf_s("%d", &length);

    printf("Enter the width of the rectangle\n");
    scanf_s("%d", &width);

    printf("The area if your rectangle is %d", length * width);
}