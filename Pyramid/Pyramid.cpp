#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int length;
	while (true)
	{
		printf("Bitte eine laenge fuer die Pyramide eingeben: ");
		if (scanf("%i", &length) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		if (length < 1 || length > 100)
		{
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}

		break;
	}

	for (unsigned int i = 1; i < length * 2; i += 2)
	{
		for (unsigned int k = 0; k < length * 2; k++)
		{
			if (k < length - (i / 2) || k > length + (i / 2))
				printf(" ");
			else
				printf("#");
		}

		printf("\n\r");
	}
}