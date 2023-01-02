#include <stdio.h>  
#include <math.h> 

int main(void) {
	int i = 0;
	printf(" Enter a number: ");
	scanf_s ("%d", &i);

	if (i > 0) {
		printf("Greater than zero ");
	}
	else if (i < 0) {
		printf("Less than zero ");
	}
	else {
		printf("Zero ");
	}
}