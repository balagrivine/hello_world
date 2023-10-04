#include <stdio.h>

int main(void)
{
	int num1, num2, num3, sum;

	printf("Enter the first unmber: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("Enter the third number: ");
	scanf("%d", &num3);
	sum = num1 + num2 + num3;

	printf("The sum for your input is: %d\n ", sum);
}
