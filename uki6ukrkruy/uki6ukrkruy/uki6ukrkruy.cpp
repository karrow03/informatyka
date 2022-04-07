

#include <iostream>
using namespace std;

void Funkcja(int klucz1, char tab[] );

int main()
{
	int klucz;
	cout << "Podaj klucz od -26 do 26" << endl;
	cin >> klucz;
	char tab[200];
	cout << "Podaj słowo" << endl;
	cin >> tab;
	Funkcja(klucz, tab);
	cout << tab << endl;
}

void Funkcja(int klucz1, char tab[]) {
	int dl = strlen(tab);
	if (!(klucz1 >= -26 && klucz1 <= 26)) {
		return;
	}
	if (klucz1 >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz1 <='z') {
				tab[i] += klucz1;
			}
			else tab[i] = tab[i] + klucz1 - 26;
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz1 >= 'a') {
				tab[i] += klucz1;
			}
			else tab[i] = tab[i] + klucz1 + 26;
		}
	}
}
