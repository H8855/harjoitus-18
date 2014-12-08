
#include <iostream>
using namespace std;
struct KOIRATIEDOT { int ika; char nimi[20]; };

void main()
{
	const int MAX_KOIRA = 5;
	KOIRATIEDOT koira[MAX_KOIRA];
	int ind, i, j;

	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Anna " << ind + 1 << ":n koiran nimi ja ika: ";
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	cout << "Koirien tiedot" << endl;
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << ind + 1 << ":n koiran nimi ja ika: " << koira[ind].nimi << " " << koira[ind].ika << endl;
	}

	cout << "sortataan ..." << endl;
	for (i = 0; i < MAX_KOIRA - 1; i++)
	{
		for (j = i + 1; j < MAX_KOIRA; j++)
		{
			if (strcmp(koira[i].nimi, koira[j].nimi) > 0)
			{
				KOIRATIEDOT tmp = koira[j];
				koira[j] = koira[i];
				koira[i] = tmp;
			}
		}
	}
	cout << "Koirien sortatut tiedot" << endl;
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << ind + 1 << ":n koiran nimi ja ika: " << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
}

/*
// VAIHTOLAJITTELU
#include <iostream>
using namespace std;

void main()
{
	const int MAX_TAULU = 4;
	int taulu[MAX_TAULU] = { 2, 7, 1, 3 };

	int i;
	int j;
	int ind;

	cout << "Taulukko ennen jarjestamista" << endl;
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << " ";
	}
	cout << endl;
	cout << "sortataan ..." << endl;
	for (i = 0; i < MAX_TAULU-1; i++)
	{
		for (j = i+1; j < MAX_TAULU; j++)
		{
			if (taulu[i] > taulu[j])
			{
				int tmp = taulu[j];
				taulu[j] = taulu[i];
				taulu[i] = tmp;
			}
		}
	}
	cout << endl;
	cout << "Taulukko jarjestamisen jalkeen" << endl;
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << " ";
	}
}
*/
