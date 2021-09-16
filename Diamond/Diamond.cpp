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
	printf("\033[2J\033[1;1H");
	printf("2 Loops: \n\r");
	for (unsigned int i = 1; i < length * 2+2; i += 2)
	{
		if (i == length + 1)
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
				if(k < ((i-length) / 2) || k > (length-((i-length)/2)-length%2))
					printf(" ");
				else
					printf("#");
			}
		}
		printf("\n\r");
	}
	
	printf("1 Loop: \n\r");
	for (unsigned int i = 0; i < length*length+length; i++)
	{
		if ((i / length + i / length + 1) == length + 1)
			i += length*2;
		if (i<length*length/2)
		{
			if ((i % length) < (length / 2) - ((i/length + i/length + 1) / 2) || (i % length) > (length / 2) + ((i/length + i/length + 1) / 2))
				printf(" ");
			else
				printf("#");
		}
		else
		{
			if ((i % length) < ((i / length + i / length + 1)-length)/2 || (i % length) > length-(((i / length + i / length + 1)-length)/2) - length % 2)
				printf(" ");
			else
				printf("#");
		}
		if(((i+1) % length) == 0)
			printf("\n\r");
	}
}