#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int eintraege[10];
	int alleEintraege = 0;
	int min = INT_MAX;
	int max = INT_MIN;

	printf("Durchschnitts-Berechnung:\n\r");
	for (unsigned char i = 0; i < 10; i++)
	{
		printf("Eintrag [%u]: ", i);
		scanf("%i", &eintraege[i]);
		alleEintraege += eintraege[i];

		if (eintraege[i] < min)
			min = eintraege[i];
		if (eintraege[i] > max)
			max = eintraege[i];
	}

	double durchschnitt = alleEintraege / 10.0;
	printf("Durchschnitt: %lf\n\r", durchschnitt);
	printf("Min: %i\n\r", min);
	printf("Max: %i\n\r", max);
}