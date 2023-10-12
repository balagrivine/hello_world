#include <stdio.h>
#include <string.h>

int main(void)
{
	float temp;
	char unit[20];
	float value;

	printf("Enter the unit you wish to convert to: ");
	scanf("%s", unit);
	printf("Enter your temperature: ");
	scanf("%f", &temp);

	if (strcmp(unit, "Farenheit") == 0)
	{
		while (temp < 100)
		{
			value = (temp * 9/5) + 32;
			printf("%.2f in degrees = %.2f in farenheit\n", temp, value);
			temp = temp + 10;
		}
	}
	if (strcmp(unit, "Celcius") == 0)
	{
		while (temp < 1000)
		{
			value = (temp * 5/9) - 32;
			printf("%.2f in farenheit = %.2f in celcius\n", temp, value);
			temp += 100;
		}
	}
	return (0);
}
