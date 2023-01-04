//a program that asks user a positive integer number u and prints all integer numbers  1…u  that are divisible by 3
#include <stdio.h>
int main()
{
		int u;
		printf("Enter an integer: ");
		scanf_s("%d", &u);
		if (u > 0) {
			for (int i = 1; i <= u; i++) {
				if (i % 3 == 0) {
					printf("%d ", i);

				}

			}

		}
		
		return 0;
	}