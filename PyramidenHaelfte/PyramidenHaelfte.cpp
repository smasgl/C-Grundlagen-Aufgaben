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

	for (unsigned char i = 0; i < length; i++)
	{
		for (unsigned char j = 0; j <= i; j++)
		{
			printf("#");
		}
		printf("\n\r");
	}
}