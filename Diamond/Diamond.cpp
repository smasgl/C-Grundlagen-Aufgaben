#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int length;
	while (true)
	{
		printf("Bitte eine laenge fuer den Diamanten eingeben: ");
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

	for (unsigned int i = 1; i < length * 2+2; i += 2)
	{
		if (i == length+1)
			i += 4;

		for (unsigned int k = 0; k < length; k++)
		{
			if (i < length)
			{
				if (k < (length/2) - (i / 2) || k > (length/2) + (i / 2))
					printf(" ");
				else
					printf("#");
			}
			else
			{
				if(k < ((i-length) / 2) || k > (length-((i-length)/2)))
					printf(" ");
				else
					printf("#");
			}
		}
		printf("\n\r");
	}
}