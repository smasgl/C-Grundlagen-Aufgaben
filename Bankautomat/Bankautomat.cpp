#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int konten[] = { 0,0,0,0,0,0,0,0,0,0 };
	while (true)
	{
		int kontoIndex = -1;
		while (kontoIndex == -1)
		{
			printf("Bank---------------------------------------------\n\r");
			kontoIndex = -1;
			printf("Auf welches der Konten wollen Sie zugreifen?\n\r");
			printf("[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]\n\r");
			printf("Konto Nummer: ");
			if (scanf("%1i", &kontoIndex) != 1)
			{
				while ((getchar()) != '\n');		// Abwarten und Clearen
				printf("Fehlerhafte Eingabe!\n\r");
				continue;
			}
			// Fehler Überprüfung
			if (kontoIndex < 0 || kontoIndex > 9)
			{
				printf("Fehlerhafte Eingabe!\n\r");
				continue;
			}
			while ((getchar()) != '\n');		// Abwarten und Clearen
		}
		while (true)
		{
			printf("Konto--------------------------------------------\n\r");
			unsigned char kommand = 0;
			printf("Ausgewaehltes Konto: %i\n\r", kontoIndex);
			printf("Kontostand: %i Euro\n\r", konten[kontoIndex]);
			printf("Aufladen: U\n\r");
			printf("Abheben: D\n\r");
			printf("Zurueck: Z\n\r");
			printf("Warte auf Befehl...: ");
			if (scanf("%c", &kommand) != 1)
			{
				while ((getchar()) != '\n');		// Abwarten und Clearen
				printf("Fehlerhafte Eingabe!\n\r");
				continue;
			}
			while ((getchar()) != '\n');		// Abwarten und Clearen

			if (kommand == 'U')
			{
				int summe = 0;
				while (true)
				{
					printf("Wieviel Geld willst du aufladen?: ");
					if (scanf("%i", &summe) != 1)
					{
						while ((getchar()) != '\n');		// Abwarten und Clearen
						printf("Fehlerhafte Eingabe!\n\r");
						continue;
					}
					while ((getchar()) != '\n');		// Abwarten und Clearen
					break;
				}

				konten[kontoIndex] += summe;
			}
			else if (kommand == 'D')
			{
				int summe = 0;
				while (true)
				{
					printf("Wieviel Geld willst du abheben?: ");
					if (scanf("%i", &summe) != 1)
					{
						while ((getchar()) != '\n');		// Abwarten und Clearen
						printf("Fehlerhafte Eingabe!\n\r");
						continue;
					}
					while ((getchar()) != '\n');		// Abwarten und Clearen
					break;
				}

				konten[kontoIndex] -= summe;
			}
			else if (kommand == 'Z')
				break;
			else
			{
				printf("Fehlerhafte Eingabe!\n\r");
				continue;
			}
		}
	}
}