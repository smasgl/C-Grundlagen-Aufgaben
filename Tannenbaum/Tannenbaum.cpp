#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int gesLength;
	unsigned int stamm;
	while (true)
	{
		printf("Bitte eine laenge fuer den Tannenbaum eingeben: ");
		if (scanf("%i", &gesLength) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		if (gesLength < 1 || gesLength > 100)
		{
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}

		break;
	}

	while (true)
	{
		printf("Bitte eine laenge fuer den Stamm eingeben: ");
		if (scanf("%i", &stamm) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		if (stamm < 1 || stamm > 100)
		{
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}

		break;
	}
	unsigned int length = gesLength - stamm;
	for (unsigned int i = 1; i < length *2; i+=2)
	{
		for (unsigned int k = 0; k < length *2; k++)
		{
			if (k < length - (i/2) || k > length + (i/2))
				printf(" ");
			else
				printf("#");
		}

		printf("\n\r");
	}

	for (unsigned int i = 0; i < stamm; i++)
	{
		for (unsigned int j = 0; j < length; j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n\r");
	}
}