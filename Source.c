//a program that asks user a positive integer number  u.The program prints all integer numbers  −5…u  separated by space.
#include <stdio.h>
int main() {
	int u;
	printf("Enter an integer: ");
	scanf_s("%d", &u);
	if (u > 0) {
		for (int i = -5; i < u; i++)

			printf("%d", i);
	}
	return 0;
}