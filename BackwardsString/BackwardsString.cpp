#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Einlesen
	printf("Geben Sie das Wort ein: ");
	unsigned char word[100] = { 0 };
	unsigned char length = 0;
	while (true)
	{
		if (scanf("%s", word) != 1)
		{
			while ((getchar()) != '\n');		// Abwarten und Clearen
			printf("Fehlerhafte Eingabe!\n\r");
			continue;
		}
		while ((getchar()) != '\n');		// Abwarten und Clearen
		break;
	}

	while (word[length] != '\0')	// Die länge des Wortes herausfinden
		length++;

	unsigned char backwardsWord[100] = { 0 };
	for (unsigned char i = length; i > 0; i--)	// Auf ein neues array rückwerts schreiben
		backwardsWord[length - i] = word[i-1];

	printf("Rueckwerts: \n\r");
	printf("%s", backwardsWord);
	printf("\n\rRueckwerts gleich: \n\r");

	// Überprüfen ob das wort rückwerts gleich ist
	unsigned char flag = 1;
	for (unsigned char i = 0; i < length; i++)
		if (word[i] != backwardsWord[i])
			flag = 0;

	if (flag)
		printf("TRUE\n\r");
	else
		printf("FALSE\n\r");
}