#include <iostream>
using namespace std;
const int longeurTableau = 10;

void afficherTableau(int liste[longeurTableau]) {
	for (int i = 0; i < longeurTableau; i++)
		cout << liste[i] << " ";
}

int main() {
	int switchNum;
	int tableau[longeurTableau];

	cout << "Entrer 10 chiffres aleatoires: ";
	for (int i = 0; i < longeurTableau; i++)
		cin >> tableau[i];

	cout << "Tableau non arrange : ";
	afficherTableau(tableau);

	for (int i = 0; i < longeurTableau; i++) {
		if (tableau[i] % 2 == 0)
			continue;
		for (int j = i + 1; j < longeurTableau; j++) {
			if (tableau[j] % 2 == 0) {
				switchNum = tableau[i];
				tableau[i] = tableau[j];
				tableau[j] = switchNum;
			}
		}
	}

	cout << "\nTableau arrange : ";
	afficherTableau(tableau);
}