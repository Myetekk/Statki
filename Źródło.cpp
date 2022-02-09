#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int tablica[15][15]{};
int tablica1[15][15]{};
char plansza[15][15]{ 0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F };
char planszaUzytkowanika[15][15]{ 0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F };

char ³ = 0x88, Ÿ = 0xAB, ó = 0xA2, œ = 0x98, æ = 0x86, ¿ = 0xBE, ê = 0xA9, ¹ = 0xA5;
int wielkoscPlanszy = 6;
int maxDlugoscStatku = 3;

int licznik1 = 0;
int licznik2 = 0;

int podpowiedzi = 0;

int dzwieki = 1;


//  generuje statek o zadanej d³ugoœci
void generujStatek(int dlugosc)
{
	int kolumna, wiersz, kierunek{ };
	bool czyDobrze = 0;
	mt19937 generator(time(nullptr));
	uniform_int_distribution<int> pole(0, wielkoscPlanszy -1);
	uniform_int_distribution<int> kier(0, 3);

	while (czyDobrze == 0)
	{
		kolumna = pole(generator);
		wiersz = pole(generator);
		kierunek = kier(generator);
		bool czyMozna = 1;

		switch (kierunek)
		{
		case 0: // góra
		{
			for (int i = 0; i <= dlugosc - 1; i++)
			{
				if (wiersz - i < 0 || tablica[wiersz - i][kolumna] != 0)
				{
					czyMozna = 0;
					czyDobrze = 0;
				}
			}

			if (czyMozna == 1)
			{
				for (int i = wiersz - dlugosc; i <= wiersz + 1; i++)
				{
					if (i >= 0 && i <= wielkoscPlanszy - 1)
					{
						for (int j = kolumna - 1; j <= kolumna + 1; j++)
						{
							if (j >= 0 && j <= wielkoscPlanszy - 1)
							{
								tablica[i][j] = 1;
							}
						}
					}
				}
				for (int i = 0; i <= dlugosc - 1; i++)
				{
					tablica[wiersz - i][kolumna] = 8;
					plansza[wiersz - i][kolumna] = 0xFE;
					czyDobrze = 1;
				}
			}
			break;
		}
		case 1: // prawo
		{
			for (int i = 0; i <= dlugosc - 1; i++)
			{
				if (kolumna + i > wielkoscPlanszy - 1 || tablica[wiersz][kolumna + i] != 0)
				{
					czyMozna = 0;
					czyDobrze = 0;
				}
			}

			if (czyMozna == 1)
			{
				for (int i = wiersz - 1; i <= wiersz + 1; i++)
				{
					if (i >= 0 && i <= wielkoscPlanszy - 1)
					{
						for (int j = kolumna - 1; j <= kolumna + dlugosc; j++)
						{
							if (j >= 0 && j <= wielkoscPlanszy - 1)
							{
								tablica[i][j] = 1;
							}
						}
					}
				}
				for (int i = 0; i <= dlugosc - 1; i++)
				{
					tablica[wiersz][kolumna + i] = 8;
					plansza[wiersz][kolumna + i] = 0xFE;
					czyDobrze = 1;
				}
			}
			break;
		}
		case 2: // dó³
		{
			for (int i = 0; i <= dlugosc - 1; i++)
			{
				if (wiersz + i > wielkoscPlanszy - 1 || tablica[wiersz + i][kolumna] != 0)
				{
					czyMozna = 0;
					czyDobrze = 0;
				}
			}

			if (czyMozna == 1)
			{
				for (int i = wiersz - 1; i <= wiersz + dlugosc; i++)
				{
					if (i >= 0 && i <= wielkoscPlanszy - 1)
					{
						for (int j = kolumna - 1; j <= kolumna + 1; j++)
						{
							if (j >= 0 && j <= wielkoscPlanszy - 1)
							{
								tablica[i][j] = 1;
							}
						}
					}
				}
				for (int i = 0; i <= dlugosc - 1; i++)
				{
					tablica[wiersz + i][kolumna] = 8;
					plansza[wiersz + i][kolumna] = 0xFE;
					czyDobrze = 1;
				}
			}
			break;
		}
		case 3: //lewo
		{
			for (int i = 0; i <= dlugosc - 1; i++)
			{
				if (kolumna - i < 0 || tablica[wiersz][kolumna - i] != 0)
				{
					czyMozna = 0;
					czyDobrze = 0;
				}
			}

			if (czyMozna == 1)
			{
				for (int i = wiersz - 1; i <= wiersz + 1; i++)
				{
					if (i >= 0 && i <= wielkoscPlanszy - 1)
					{
						for (int j = kolumna - dlugosc; j <= kolumna + 1; j++)
						{
							if (j >= 0 && j <= wielkoscPlanszy - 1)
							{
								tablica[i][j] = 1;
							}
						}
					}
				}
				for (int i = 0; i <= dlugosc - 1; i++)
				{
					tablica[wiersz][kolumna - i] = 8;
					plansza[wiersz][kolumna - i] = 0xFE;
					czyDobrze = 1;
				}
			}
			break;
		}
		}
	}
}


//  generuje plansze z ustawionymi statkami
void generujWypelnione()
{
	for (int i = 1; i <= maxDlugoscStatku; i++)
	{
		for (int j = i; j >= 1; j--)
			generujStatek(j);
	}
}


//  wypisuje wygenerowan¹ wszeœniej plansze z ustawionymi statkami
void wypiszWypelnione()
{
	char x = 0xC4, y = 0xC5, z = 0xB3;
	cout << "    ";
	for (int i = 0; i < wielkoscPlanszy; i++)
	{
		cout.width(3);
		cout << i + 1;
	}
	cout << endl << "   " << y;
	for (int i = 1; i <= wielkoscPlanszy; i++)
		cout << x << x << x;
	cout << endl;
	for (int i = 0; i <= wielkoscPlanszy - 1; i++)
	{
		cout.width(3);
		cout << i + 1 << z;
		for (int j = 0; j <= wielkoscPlanszy - 1; j++)
		{
			cout.width(3);
			cout << plansza[i][j];
		}
		cout << endl;
	}
}


//  wypisuje plansze u¿ytkownika
void wypiszUzytkownika(char planszka[15][15])
{
	char x = 0xC4, y = 0xC5, z = 0xB3;
	cout << "    ";
	for (int i = 0; i < wielkoscPlanszy; i++)
	{
		cout.width(3);
		cout << i + 1;
	}
	cout << endl << "   " << y;
	for (int i = 1; i <= wielkoscPlanszy; i++)
		cout << x << x << x;
	cout << endl;
	for (int i = 0; i <= wielkoscPlanszy - 1; i++)
	{
		cout.width(3);
		cout << i + 1 << z;
		for (int j = 0; j <= wielkoscPlanszy - 1; j++)
		{
			cout.width(3);
			cout << planszka[i][j];
		}
		cout << endl;
	}
}


//  wyzerowanie tablic
void wyzerowywanie()
{
	for (int i = 0; i < wielkoscPlanszy; i++)
	{
		for (int j = 0; j < wielkoscPlanszy; j++)
		{
			tablica[i][j] = 0;
			plansza[i][j] = 0x6F;
			planszaUzytkowanika[i][j] = 0x6F;
		}
	}
}


//  instrukcja dla trybu 1
void instrukcja(int opcja)
{
	char o = 0x6F, hasz = 0x23, kwadracik = 0xFE, X = 0x9E;
	if (opcja == 1)
	{
		cout << "Ustaw swoje statki. " << endl;
		cout << "Schemat wprowadzania wsp" << ó << ³ << "rz" << ê << "dnych:  wiersz  ->  ENTER  ->  kolumna  ->  ENTER " << endl;
		cout << "Oznaczenia:  " << o << " -pole nieznane;  " << hasz << " -trafiony;  " << kwadracik << " -trafiony zatopiony;  " << X << " -pud" << ³ << "o" << endl << endl << endl;
		cout << endl << endl;
	}
	else if (opcja == 2)
	{
		cout << "Znajd" << Ÿ << " statki przeciwnika. " << endl;
		cout << "Schemat wprowadzania wsp" << ó << ³ << "rz" << ê << "dnych:  wiersz  ->  ENTER  ->  kolumna  ->  ENTER " << endl;
		cout << "Oznaczenia:  " << o << " -pole nieznane;  " << hasz << " -trafiony;  " << kwadracik << " -trafiony zatopiony;  " << X << " -pud" << ³ << "o" << endl << endl;
	}
}


//  PRZYPISYWANIE LOKALIZACJI STATKÓW   
void przypisywanieStatkow(int tab[15][15], char plansz[15][15])
{
	system("CLS");
	instrukcja(1);
	wypiszUzytkownika(plansz);
	int l = 1;
	for (int i = maxDlugoscStatku; i >= 1; i--)  //  statek o d³ugoœci..
	{
		for (int k = 1; k <= l; k++) // statek pierwszy, drugi..
		{
			bool czyDobrze = 0;
			do
			{
				int wierszz{}, kolumnaa{}, wiersz{}, kolumna{}, kierunek{ };

				cout << endl << endl << "Podaj wsp" << ó << ³ << "rz" << ê << "dne  " << k << "  statku, o d" << ³ << "ugo" << œ << "ci  " << i << endl;
				bool poprawneWspolrzedne;
				do
				{
					cin >> wierszz >> kolumnaa;

					poprawneWspolrzedne = 1;
					if (wierszz <= 0 || wierszz >= wielkoscPlanszy + 1 || kolumnaa <= 0 || kolumnaa >= wielkoscPlanszy + 1)
					{
						poprawneWspolrzedne = 0;
						cout << endl << "Zle wspolzedne, podaj ponownie ";
					}
				} while (poprawneWspolrzedne == 0);

				if (i != 1)
				{
					bool poprawnyKierunek;
					do
					{
						poprawnyKierunek = 1;
						cout << endl << "1. W g" << ó << "re" << endl;
						cout << "2. W prawo" << endl;
						cout << "3. W d" << ó << ³ << endl;
						cout << "4. W lewo" << endl;
						cout << "Podaj kierunek: ";
						cin >> kierunek;
						if (kierunek <= 0 || kierunek >= 5)
						{
							poprawnyKierunek = 0;
							cout << endl << "Z" << ³ << "y kierunek, podaj ponownie " << endl;
						}
					} while (poprawnyKierunek == 0);
				}
				else
					kierunek = 1;

				wiersz = wierszz - 1;
				kolumna = kolumnaa - 1;
				int kierunekk = kierunek - 1;
				int dlugosc = i;
				bool czyMozna = 1;
				switch (kierunekk)
				{
				case 0: // góra
				{
					for (int i = 0; i <= dlugosc - 1; i++)
					{
						if (wiersz - i < 0 || tab[wiersz - i][kolumna] != 0)
						{
							czyMozna = 0;
							czyDobrze = 0;
							system("CLS");
							instrukcja(1);
							wypiszUzytkownika(plansz);
							cout << endl << "Zle umieszczony statek. ";
						}
					}

					if (czyMozna == 1)
					{
						for (int i = wiersz - dlugosc; i <= wiersz + 1; i++)
						{
							if (i >= 0 && i <= wielkoscPlanszy - 1)
							{
								for (int j = kolumna - 1; j <= kolumna + 1; j++)
								{
									if (j >= 0 && j <= wielkoscPlanszy - 1)
									{
										tab[i][j] = 1;
									}
								}
							}
						}
						for (int i = 0; i <= dlugosc - 1; i++)
						{
							tab[wiersz - i][kolumna] = 8;
							plansz[wiersz - i][kolumna] = 0xFE;
							czyDobrze = 1;
						}
						system("CLS");
						instrukcja(1); 
						wypiszUzytkownika(plansz);
					}
					break;
				}
				case 1: // prawo
				{
					for (int i = 0; i <= dlugosc - 1; i++)
					{
						if (kolumna + i > wielkoscPlanszy - 1 || tab[wiersz][kolumna + i] != 0)
						{
							czyMozna = 0;
							czyDobrze = 0;
							system("CLS");
							instrukcja(1);
							wypiszUzytkownika(plansz);
							cout << endl << "Zle umieszczony statek. ";
						}
					}

					if (czyMozna == 1)
					{
						for (int i = wiersz - 1; i <= wiersz + 1; i++)
						{
							if (i >= 0 && i <= wielkoscPlanszy - 1)
							{
								for (int j = kolumna - 1; j <= kolumna + dlugosc; j++)
								{
									if (j >= 0 && j <= wielkoscPlanszy - 1)
									{
										tab[i][j] = 1;
									}
								}
							}
						}
						for (int i = 0; i <= dlugosc - 1; i++)
						{
							tab[wiersz][kolumna + i] = 8;
							plansz[wiersz][kolumna + i] = 0xFE;
							czyDobrze = 1;
						}
						system("CLS");
						instrukcja(1);
						wypiszUzytkownika(plansz);
					}
					break;
				}
				case 2: // dó³
				{
					for (int i = 0; i <= dlugosc - 1; i++)
					{
						if (wiersz + i > wielkoscPlanszy - 1 || tab[wiersz + i][kolumna] != 0)
						{
							czyMozna = 0;
							czyDobrze = 0;
							system("CLS");
							instrukcja(1);
							wypiszUzytkownika(plansz);
							cout << endl << "Zle umieszczony statek. ";
						}
					}

					if (czyMozna == 1)
					{
						for (int i = wiersz - 1; i <= wiersz + dlugosc; i++)
						{
							if (i >= 0 && i <= wielkoscPlanszy - 1)
							{
								for (int j = kolumna - 1; j <= kolumna + 1; j++)
								{
									if (j >= 0 && j <= wielkoscPlanszy - 1)
									{
										tab[i][j] = 1;
									}
								}
							}
						}
						for (int i = 0; i <= dlugosc - 1; i++)
						{
							tab[wiersz + i][kolumna] = 8;
							plansz[wiersz + i][kolumna] = 0xFE;
							czyDobrze = 1;
						}
						system("CLS");
						instrukcja(1);
						wypiszUzytkownika(plansz);
					}
					break;
				}
				case 3: //lewo
				{
					for (int i = 0; i <= dlugosc - 1; i++)
					{
						if (kolumna - i < 0 || tab[wiersz][kolumna - i] != 0)
						{
							czyMozna = 0;
							czyDobrze = 0;
							system("CLS");
							instrukcja(1);
							wypiszUzytkownika(plansz);
							cout << endl << "Zle umieszczony statek. ";
						}
					}

					if (czyMozna == 1)
					{
						for (int i = wiersz - 1; i <= wiersz + 1; i++)
						{
							if (i >= 0 && i <= wielkoscPlanszy - 1)
							{
								for (int j = kolumna - dlugosc; j <= kolumna + 1; j++)
								{
									if (j >= 0 && j <= wielkoscPlanszy - 1)
									{
										tab[i][j] = 1;
									}
								}
							}
						}
						for (int i = 0; i <= dlugosc - 1; i++)
						{
							tab[wiersz][kolumna - i] = 8;
							plansz[wiersz][kolumna - i] = 0xFE;
							czyDobrze = 1;
						}
						system("CLS");
						instrukcja(1);
						wypiszUzytkownika(plansz);
					}
					break;
				}
				}
			} while (czyDobrze == 0);
		}
		l++;
	}

}


//  STRZELANIE DO STATKÓW
void bitwaMorska(int tab[15][15], char plansz[15][15], int gracz)
{
	char o = 0x6F, hasz = 0x23, kwadracik = 0xFE, X = 0x9E;
	int licznikRuchow = 0;

	int x{}, y{};  //  wspó³rzêdne
	bool koniec = 0;

	cout << endl << endl << endl;
	do
	{
		bool poprawnoscWspolrzednych{};
		
		instrukcja(2);
		wypiszUzytkownika(plansz);
		cout << endl << endl << "Podaj wspolrzedne(1," << wielkoscPlanszy << ") " << endl;
		while (poprawnoscWspolrzednych == 0)
		{
			poprawnoscWspolrzednych = 1;
			cin >> x >> y;
			if (x <= 0 || x >= wielkoscPlanszy + 1 || y <= 0 || y >= wielkoscPlanszy + 1)
			{
				poprawnoscWspolrzednych = 0;
				cout << endl << "Zle wspolzedne, podaj ponownie(1," << wielkoscPlanszy << ") " << endl;
			}
			else if (tab[x - 1][y - 1] == 2 || tab[x - 1][y - 1] == 3)
			{
				poprawnoscWspolrzednych = 0;
				cout << endl << "Te wspolzedne byly juz podane, podaj ponownie(1," << wielkoscPlanszy << ") " << endl;
			}
		}

		licznikRuchow++;

		system("CLS");

		if (tab[x - 1][y - 1] == 8)
		{
			cout << "-------------------------------------------------- ";
			cout << endl << "Trafiony ";
			plansz[x - 1][y - 1] = 0x23;
			tab[x - 1][y - 1] = 2;
			if (tab[x - 1][y] != 8 && tab[x - 2][y - 1] != 8 && tab[x][y - 1] != 8 && tab[x - 1][y - 2] != 8)
			{
				cout << "zatopiony ";
				cout << endl << "-------------------------------------------------- " << endl;
				PlaySound(TEXT("boom2.wav"), NULL, SND_SYNC);

				for (int i = x - 5; i <= x + 3; i++)
				{
					for (int j = y - 5; j <= y + 3; j++)
					{
						if (tab[i][j] == 2)
							plansz[i][j] = 0xFE;
					}
				}
			}
			else
			{
				cout << endl << "-------------------------------------------------- " << endl;
				PlaySound(TEXT("boom.wav"), NULL, SND_SYNC);
			}
		}
		else
		{
			cout << "-------------------------------------------------- ";
			cout << endl << "Pudlo ";
			if (podpowiedzi == 1 && (tablica[x - 1][y] != 8 || tablica[x - 2][y - 1] != 8 || tablica[x][y - 1] != 8 || tablica[x - 1][y - 2] != 8))   cout << ", ale blisko ";
			cout << endl << "-------------------------------------------------- " << endl;
			PlaySound(TEXT("przelatywanie.wav"), NULL, SND_SYNC);
			plansz[x - 1][y - 1] = 0x9E;
			tab[x - 1][y - 1] = 3;
		}

		koniec = 1;
		for (int i = 0; i <= wielkoscPlanszy - 1; i++)
		{
			for (int j = 0; j <= wielkoscPlanszy - 1; j++)
			{
				if (tab[i][j] == 8)
				{
					koniec = 0;
					break;
				}
			}
		}
	} while (koniec == 0);
	wypiszUzytkownika(plansz);
	cout << endl << "Liczba ruch" << ó << "w: " << licznikRuchow << endl;
	if (gracz == 1)
		licznik1 = licznikRuchow;
	if (gracz == 2)
		licznik2 = licznikRuchow;
}


//  OPCJA 1  GRANIE DWÓCH GRACZY
void graDwochGraczy()
{
	bool koniecGry = 0;
	do
	{
		wyzerowywanie();

		//  pierwszy gracz ustawia statki
		cout << "Niech pierwszy u" << ¿ << "ytkownik przygotuje si" << ê << " do ustawienia swoich statk" << ó << "w, a drugi odejdzie. " << endl << endl;
		system("pause");
		przypisywanieStatkow(tablica, plansza);
		cout << endl << endl;
		system("pause");

		//  drugi gracz ustawia statki
		system("CLS");
		cout << "Niech drugi u" << ¿ << "ytkownik przygotuje si" << ê << " do ustawienia swoich statk" << ó << "w, a pierwszy odejdzie. " << endl << endl;
		system("pause");
		przypisywanieStatkow(tablica1, planszaUzytkowanika);
		cout << endl << endl;
		system("pause");

		// wyzerowanie wyœwietlanej planszy
		for (int i = 0; i < wielkoscPlanszy; i++)
		{
			for (int j = 0; j < wielkoscPlanszy; j++)
			{
				planszaUzytkowanika[i][j] = 0x6F;
			}
		}
		//  zgadywanie pierwszego gracza
		licznik1 = 0;
		system("CLS");
		cout << "Niech pierwszy u" << ¿ << "ytkownik przygotuje si" << ê << " do zgadywania. " << endl << endl;
		system("pause");
		system("CLS");
		bitwaMorska(tablica1, planszaUzytkowanika, 1);
		system("pause");

		// wyzerowanie wyœwietlanej planszy
		for (int i = 0; i < wielkoscPlanszy; i++)
		{
			for (int j = 0; j < wielkoscPlanszy; j++)
			{
				plansza[i][j] = 0x6F;
			}
		}
		//  zgadywanie drugiego gracza
		licznik2 = 0;
		system("CLS");
		cout << "Niech drugi u" << ¿ << "ytkownik przygotuje si" << ê << " do zgadywania. " << endl << endl;
		system("pause");
		system("CLS");
		bitwaMorska(tablica, plansza, 2);
		system("pause");

		//  wynik bitwy
		system("CLS");
		cout << "Og" << ³ << "oszenie wynik" << ó << "w! " << endl << endl;
		system("pause");

		system("CLS");
		cout << "Og" << ³ << "oszenie wynik" << ó << "w! " << endl << endl;
		if (licznik1 < licznik2)
			cout << "Wygra" << ³ << " u" << ¿ << "ytkownik  1  " << endl;
		else if (licznik1 > licznik2)
			cout << "Wygra" << ³ << " u" << ¿ << "ytkownik  2  " << endl;
		else if (licznik1 == licznik2)
			cout << "REMIS  " << endl;
		system("pause");

		koniecGry = 1;
	} while (koniecGry == 0);
}


//  OPCJA 2  GRANIE Z AI 
void graZAI()
{
	char o = 0x6F, hasz = 0x23, kwadracik = 0xFE, X = 0x9E;
	int liczbaRuchow{};
	wyzerowywanie();
	generujWypelnione();
	cout << endl << endl << endl << endl;
	int koniec = 1;
	do
	{
		int x{}, y{};  //  wspó³rzêdne
		bool poprawnoscWspolrzednych = 0;
			
		cout << "Program wygenerowa" << ³ << " plansz" << ê << ". Znajd" << Ÿ << " statki przeciwnika. " << endl;
		cout << "Schemat wprowadzania wsp" << ó << ³ << "rz" << ê << "dnych:  wiersz  ->  ENTER  ->  kolumna  ->  ENTER " << endl;
		cout << "Oznaczenia:  " << o << " -pole nieznane;  " << hasz << " -trafiony;  " << kwadracik << " -trafiony zatopiony;  " << X << " -pud" << ³ << "o" << endl;
		cout << "Liczba ruch" << ó << "w: " << liczbaRuchow << endl << endl;
		wypiszUzytkownika(planszaUzytkowanika);
		cout << endl << endl << "Podaj wsp" << ó << ³ << "rz" << ê << "dne (od 1, do " << wielkoscPlanszy << ") " << endl;
		while (poprawnoscWspolrzednych == 0)
		{
			poprawnoscWspolrzednych = 1;
			cin >> x >> y;
			if (x <= 0 || x >= wielkoscPlanszy + 1 || y <= 0 || y >= wielkoscPlanszy + 1)
			{
				poprawnoscWspolrzednych = 0;
				cout << endl << "Zle wspolrzedne, podaj ponownie (od 1, do " << wielkoscPlanszy << ") " << endl;
			}
			else if (tablica[x - 1][y - 1] == 2 || tablica[x - 1][y - 1] == 3)
			{
				poprawnoscWspolrzednych = 0;
				cout << endl << "Te wspolrzedne byly juz podane, podaj ponownie (od 1, do " << wielkoscPlanszy << ") " << endl;
			}
		}

		system("CLS");

		if (tablica[x - 1][y - 1] == 8)
		{
			cout << "-------------------------------------------------- ";
			cout << endl << "Trafiony ";
			planszaUzytkowanika[x - 1][y - 1] = 0x23;
			tablica[x - 1][y - 1] = 2;
			if (tablica[x - 1][y] != 8 && tablica[x - 2][y - 1] != 8 && tablica[x][y - 1] != 8 && tablica[x - 1][y - 2] != 8)
			{
				cout << "zatopiony ";
				cout << endl << "-------------------------------------------------- " << endl << endl;
				PlaySound(TEXT("boom2.wav"), NULL, SND_SYNC);
					
				for (int i = x - 5; i <= x + 3; i++)
				{
					for (int j = y - 5; j <= y + 3; j++)
					{
						if (tablica[i][j] == 2)
							planszaUzytkowanika[i][j] = 0xFE;
					}
				}
			}
			else
			{
				cout << endl << "-------------------------------------------------- " << endl << endl;
				PlaySound(TEXT("boom.wav"), NULL, SND_SYNC);
			}
		}
		else
		{
			cout << "-------------------------------------------------- ";
			cout << endl << "Pudlo ";
			if (podpowiedzi == 1 && (tablica[x - 1][y] != 8 || tablica[x - 2][y - 1] != 8 || tablica[x][y - 1] != 8 || tablica[x - 1][y - 2] != 8) )   cout << ", ale blisko ";
			cout << endl << "-------------------------------------------------- " << endl << endl;
			PlaySound(TEXT("przelatywanie.wav"), NULL, SND_SYNC);
			planszaUzytkowanika[x - 1][y - 1] = 0x9E;
			tablica[x - 1][y - 1] = 3;
		}

		liczbaRuchow++;

		koniec = 1;
		for (int i = 0; i <= wielkoscPlanszy - 1; i++)
		{
			for (int j = 0; j <= wielkoscPlanszy - 1; j++)
			{
				if (tablica[i][j] == 8)
				{
					koniec = 0;
					break;
				}
			}
		}
	} while (koniec == 0);

	system("CLS");
	cout << "Liczba ruch" << ó << "w: " << liczbaRuchow << endl << endl;
	wypiszUzytkownika(planszaUzytkowanika);
	cout << endl << endl << "-------------------------------------------------- " << endl << "BRAWO udalo ci sie wygrac " << endl << "-------------------------------------------------- " << endl << endl;
	cout << "Liczba ruch" << ó << "w: " << liczbaRuchow << endl << endl;
	PlaySound(TEXT("panTomek.wav"), NULL, SND_SYNC);
	system("pause");
}


//  ustawienia gry
void ustawienia()
{
	int wybor;
	bool dobrze = 1, dobrzeUstawienia = 0;
	do
	{
		cout << "USTAWIENIA" << endl << endl;
		cout << "1.  Wielko" << œ << æ << " planszy (" << wielkoscPlanszy << ") " << endl << endl;
		cout << " 2. D" << ³ << "ugo" << œ << æ << " najd" << ³ << "u" << ¿ << "szego statku (" << maxDlugoscStatku << ") " << endl << endl;
		cout << "3.  D" << Ÿ << "wi" << ê << "ki (";   if (dzwieki == 0)cout << "wy" << ³ << ¹ << "czone) ";   if (dzwieki == 1)cout << "w" << ³ << ¹ << "czone) ";   cout << endl << endl;
		cout << " 4. Podpowiedzi (";   if (podpowiedzi == 0)cout << "wy" << ³ << ¹ << "czone) ";   if (podpowiedzi == 1)cout << "w" << ³ << ¹ << "czone) ";   cout << endl << endl;
		cout << "5.  Powr" << ó << "t do menu " << endl << endl << endl;
		do
		{
			dobrzeUstawienia = 0;
			dobrze = 1;
			cout << endl << "Tw" << ó << "j wyb" << ó << "r: ";
			cin >> wybor;

			if (wybor == 1)
			{
				system("CLS");
				bool dobraWielkosc;
				cout << "Info: " << endl;
				cout << " -Podana wielko" << œ << æ << " oznacza, " << ¿ << "e plansza b" << ê << "dzie mia" << ³ << "a boki o takim wymiarze, np. 6x6, 10x10..." << endl << endl;
				cout << " -Dla planszy o wielko" << œ << "ci  od 6 do 7  mo" << ¿ << "na ustawi" << æ << " maksymalnie statek o d" << ³ << "ugo" << œ << "ci 3. " << endl;
				cout << " -Dla planszy o wielko" << œ << "ci  od 8 do 10  mo" << ¿ << "na ustawi" << æ << " maksymalnie statek o d" << ³ << "ugo" << œ << "ci 4. " << endl;
				cout << " -Dla planszy o wielko" << œ << "ci  od 11 do 13  mo" << ¿ << "na ustawi" << æ << " maksymalnie statek o d" << ³ << "ugo" << œ << "ci 5. " << endl;
				cout << " -Dla planszy o wielko" << œ << "ci  14 lub 15  mo" << ¿ << "na ustawi" << æ << " maksymalnie statek o d" << ³ << "ugo" << œ << "ci 6. " << endl;
				cout << endl << endl << endl;
				do
				{
					dobraWielkosc = 1;
					int bufor = wielkoscPlanszy;
					cout << "Podaj Wielko" << œ << æ << " planszy (od 6 do 15, aktualnie " << wielkoscPlanszy << "): ";
					cin >> wielkoscPlanszy;
					if (wielkoscPlanszy < 6 || wielkoscPlanszy > 15)
					{
						dobraWielkosc = 0;
						cout << endl << "Nieprawid" << ³ << "owa warto" << œ << æ << ", podaj ponownie" << endl;
						wielkoscPlanszy = bufor;
					}
					else
						bufor = wielkoscPlanszy;
					if (wielkoscPlanszy <= 7 && maxDlugoscStatku > 3)
						maxDlugoscStatku = 3;
					if (wielkoscPlanszy >= 8 && wielkoscPlanszy <= 10 && maxDlugoscStatku > 4)
						maxDlugoscStatku = 4;
					if (wielkoscPlanszy >= 11 && wielkoscPlanszy <= 13 && maxDlugoscStatku > 5)
						maxDlugoscStatku = 5;
					if (wielkoscPlanszy >= 14 && wielkoscPlanszy <= 15 && maxDlugoscStatku > 6)
						maxDlugoscStatku = 6;
				} while (dobraWielkosc == 0);
				system("CLS");
			}
			else if (wybor == 2)
			{
				system("CLS");
				bool dobraDlugoscStatku;
				cout << "Info: " << endl;
				cout << " -Na planszy umieszcza si" << ê << " jeden statek o podanej d" << ³ << "ugo" << œ << "ci, dwa o 1 kr" << ó << "tsze, trzy o 2 kr" << ó << "tsze..." << endl << endl;
				cout << " -Dla statku o d" << ³ << "ugo" << œ << "ci  3  nale" << ¿ << "y ustawi" << æ << " plansze conajmniej 6. " << endl;
				cout << " -Dla statku o d" << ³ << "ugo" << œ << "ci  4  nale" << ¿ << "y ustawi" << æ << " plansze conajmniej 8. " << endl;
				cout << " -Dla statku o d" << ³ << "ugo" << œ << "ci  5  nale" << ¿ << "y ustawi" << æ << " plansze conajmniej 11. " << endl;
				cout << " -Dla statku o d" << ³ << "ugo" << œ << "ci  6  nale" << ¿ << "y ustawi" << æ << " plansze conajmniej 14. " << endl;
				do
				{
					dobraDlugoscStatku = 1;
					int bufor = maxDlugoscStatku;
					cout << endl << "Wybierz d" << ³ << "ugo" << œ << æ << " najd" << ³ << "u" << ¿ << "szego statku (od 1 do 6, aktualnie " << maxDlugoscStatku << "): ";
					cin >> maxDlugoscStatku;
					if (maxDlugoscStatku < 1 || maxDlugoscStatku > 6)
					{
						dobraDlugoscStatku = 0;
						cout << endl << "Nieprawid" << ³ << "owa warto" << œ << æ << ", podaj ponownie";
						maxDlugoscStatku = bufor;
					}
					else
						bufor = maxDlugoscStatku;
					if (maxDlugoscStatku == 3 && wielkoscPlanszy < 6)
						wielkoscPlanszy = 6;
					if (maxDlugoscStatku == 4 && wielkoscPlanszy < 8)
						wielkoscPlanszy = 8;
					if (maxDlugoscStatku == 5 && wielkoscPlanszy < 11)
						wielkoscPlanszy = 11;
					if (maxDlugoscStatku == 6 && wielkoscPlanszy < 14)
						wielkoscPlanszy = 14;
				} while (dobraDlugoscStatku == 0);
				system("CLS");
			}
			else if (wybor == 3)
			{
				system("CLS");
				bool dobreDzwieki = 0;
				cout << "W" << ³ << ¹ << "czenie podpowiedzi informuje o strzale obok niezatopionego statku. " << endl;
				cout << endl << endl;
				do
				{
					dobreDzwieki = 1;

					cout << "Czy chcesz w" << ³ << ¹ << "czy" << æ << " d" << Ÿ << "wi" << ê << "ki? (1 - tak, 0 - nie) : ";
					cin >> dzwieki;

					if (podpowiedzi == 0 || podpowiedzi == 1)
					{
						system("CLS");
					}
					else
					{
						cout << endl << "Nieprawid" << ³ << "owa liczba, podaj ponownie. " << endl;
						dobreDzwieki = 0;
					}

				} while (dobreDzwieki == 0);
				system("CLS");
			}
			else if (wybor == 4)
			{
				system("CLS");
				bool dobrePodpowiedzi;
				cout << "W" << ³ << ¹ << "czenie podpowiedzi informuje o strzale obok niezatopionego statku. " << endl;
				cout << endl << endl;
				do
				{
					dobrePodpowiedzi = 1;
					
					cout << "Czy chcesz w" << ³ << ¹ << "czy" << æ << " podpowiedzi? (1 -tak, 0 -nie): ";
					cin >> podpowiedzi;

					if (podpowiedzi == 0 || podpowiedzi == 1)
					{
						system("CLS");
					}
					else
					{
						cout << endl << "Nieprawid" << ³ << "owa liczba, podaj ponownie. " << endl;
						dobrePodpowiedzi = 0;
					}

				} while (dobrePodpowiedzi == 0);
			}
			else if (wybor == 5)
			{
				system("CLS");
				dobrzeUstawienia = 1;
			}
			else
			{
				cout << endl << "Nieprawid" << ³ << "owa liczba, podaj ponownie. ";
				dobrze = 0;
			}
		} while (dobrze == 0);
	} while (dobrzeUstawienia == 0);
}


//  MENU GRY
void Menu()
{
	bool koniecMenu = 0;
	do
	{
		//  LOGO
		char a = 0xC9, b = 0xCD, c = 0xBB, d = 0xBA, e = 0xC8, f = 0xBC;
		int wyborMenu;
		bool dobrze = 1;

		system("CLS");
		/* LOGO */cout << endl << "     " << a << b << b << b << b << b << b << c << endl << "     " << d << "STATKI" << d << endl << "     " << e << b << b << b << b << b << b << f << endl << endl << endl;
		cout << " 1. Gra dla dw" << ó << "ch os" << ó << "b " << endl << endl;
		cout << "2.  Gra dla jednej osoby " << endl << endl;
		cout << " 3. Ustawienia " << endl << endl;
		cout << "4.  Wyjd" << Ÿ << endl << endl;
		cout << endl;
		do
		{
			cout << endl << "Tw" << ó << "j wyb" << ó << "r: ";
			cin >> wyborMenu;
			if (wyborMenu == 1)
			{
				system("CLS");
				graDwochGraczy();
			}
			else if (wyborMenu == 2)
			{
				system("CLS");
				graZAI();
			}
			else if (wyborMenu == 3)
			{
				system("CLS");
				ustawienia();
			}
			else if (wyborMenu == 4)
			{
				system("CLS");
				koniecMenu = 1;
			}
			else
			{
				cout << endl << "Nieprawid" << ³ << "owa liczba, podaj ponownie. ";
				dobrze = 0;
			}
		} while (dobrze == 0);

	} while (koniecMenu == 0);
}



int main()
{
	Menu();
	
	
	system("pause");


	cout << "ELO";
	Sleep(100);
}