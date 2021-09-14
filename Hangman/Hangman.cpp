#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Geben Sie zu ratende Wort ein: ");
	unsigned char wort[100] = {0};
	unsigned char hangMan = 0;
	while (true)
	{
		if (scanf("%s", wort) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		while ((getchar()) != '\n');		// Abwarten und Clearen
		break;
	}
	printf("\033[2J\033[1;1H");
	unsigned char length = 0;
	for (unsigned char i = 0; i < 100; i++)
	{
		if (wort[i] == 0)
			break;
		length++;
	}
	unsigned char raten[100];
	for (unsigned char i = 0; i < length; i++)
		raten[i] = '_';
	while (true)
	{
		unsigned char buchstabe;
		printf("\033[2J\033[1;1H");
		switch (hangMan)
		{
		case 0:
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("**********************\n\r");
			break;
		case 1:
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 2:
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 3:
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 4:
			printf("\n\r");
			printf("\n\r");
			printf("\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 5:
			printf("\n\r");
			printf("\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 6:
			printf("\n\r");
			printf("         +---+\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 7:
			printf("\n\r");
			printf("         +---+\n\r");
			printf("         *   |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 8:
			printf("\n\r");
			printf("         +---+\n\r");
			printf("         *   |\n\r");
			printf("       \\|/   |\n\r");
			printf("             |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 9:
			printf("\n\r");
			printf("         +---+\n\r");
			printf("         *   |\n\r");
			printf("       \\|/   |\n\r");
			printf("       / \\   |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		case 10:
			printf("\n\r");
			printf("         +---+\n\r");
			printf("        O*   |\n\r");
			printf("       \\|/   |\n\r");
			printf("       / \\   |\n\r");
			printf("             |\n\r");
			printf("            / \\\n\r");
			printf("**********************\n\r");
			break;
		}
		if (hangMan == 10)
		{
			printf("Verloren! Das Wort war [%s]!", wort);
			scanf("%c", &buchstabe);
			break;
		}
		printf("[");
		for (unsigned char i = 0; i < length; i++)
			printf("%c", raten[i]);
		printf("]\n\r");
		printf("Rate einen Buchstaben [Versuche: %u]: ", 10-hangMan);
		if (scanf("%c", &buchstabe) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		while ((getchar()) != '\n');		// Abwarten und Clearen
		if (buchstabe < 97 || buchstabe > 122)
		{
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		int flag = 0;
		for (unsigned char i = 0; i < length; i++)
		{
			if (wort[i] == buchstabe && raten[i] != buchstabe)
			{
				raten[i] = wort[i];
				flag = 1;
			}
		}
		if (!flag)
			hangMan++;
		flag = 0;
		for (unsigned char i = 0; i < length; i++)
		{
			if (raten[i] != wort[i])
				flag = 1;
		}
		if (!flag)
		{
			printf("Gewonnen! Das Wort war [%s]!", wort);
			scanf("%c", &buchstabe);
			break;
		}
	}
}