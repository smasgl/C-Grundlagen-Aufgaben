#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int length;
	int values[200] = {0};
	printf("Geben sie die Laenge des zum feullenden arrays an.\n\r");
	while (true)
	{
		printf("Laenge: ");
		if (scanf("%i", &length) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			printf("\033[2J\033[1;1H");
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		if (length < 1 || length > 200)
		{
			printf("\033[2J\033[1;1H");
			printf("Fehlerhafte Eingabe! [length > 1 & length < 200]\n\r");
			continue;
		}
		while ((getchar()) != '\n');		// Abwarten und Clearen
		break;
	}

	for (unsigned int i = 0; i < length; i++)
	{
		printf("\033[2J\033[1;1H");
		printf("Unsorted array:\n\r");
		for (unsigned int j = 0; j < i; j++)
		{
			printf("Element[%i]: %i\n\r", j, values[j]);
		}
		printf("Element[%i]: ", i);
		if (scanf("%i", &values[i]) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			i--;
			continue;
		}
	}

	for (unsigned char i = 0; i < length; i++)
	{
		unsigned char nonSorted = 1;
		for (unsigned char j = 0; j < length - 1; j++)
		{
			if (values[j] > values[j + 1])
			{
				int swap = values[j];
				values[j] = values[j + 1];
				values[j + 1] = swap;
				nonSorted = 0;
			}
		}
		if (nonSorted) // optimierung von BubbleSort
			break;
	}

	printf("\n\rSorted array:\n\r");
	for (unsigned int i = 0; i < length; i++)
	{
		printf("Element[%i]: %i\n\r", i, values[i]);
	}
}