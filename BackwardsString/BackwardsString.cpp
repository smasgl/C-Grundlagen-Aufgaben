#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	#pragma region Einlesen
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
	#pragma endregion

	// vorwertsausgabe
	printf("Vorwerts: \n\r");
	for (unsigned char i = 0; i < 100; i++)
	{
		if (word[i] == '\0')
			break;
		printf("%c", word[i]);
	}
	// rückwertsausgabe
	printf("Rueckwerts: \n\r");
	for (char i = 99; i >= 0; i--)
	{
		if (word[i] == '\0')
			continue;
		printf("%c", word[i]);
	}

	// Mit erstellen eines neuen Arrays
	/* 
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
	*/
}