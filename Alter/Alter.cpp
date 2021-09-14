#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main()
{
	unsigned int geburtsjahr;
	unsigned int alter;
	printf("Bitte geburtsjahr eingeben: ");
	scanf("%u", &geburtsjahr);

	time_t now = time(0);
	alter = 1900 + localtime(&now)->tm_year - geburtsjahr;
	if (alter >= 21)
		printf("Du bist erwachsen in Oesterreich und Amerika!");
	else if (alter >= 18)
		printf("Du bist erwachsen in Oesterreich!");
	else
		printf("Du bist nirgeswo erwachsen!");

	printf("\n\rGeburts-Alter in Sternchen:\n\r[");
	for (unsigned char i = 0; i < alter; i++)
		printf("*");
	printf("] %u\n\n\r", alter);
}