#include <iostream>
#include <cmath>
using namespace std;
int main() {
	while (true) {
		int nombre;
		int diviseur = 2;
		bool estPrime = true;

		cout << "\nEntrez un nombre : ";
		cin >> nombre;

		if (nombre == 0 || nombre == 1 || (nombre != 2 && nombre % diviseur == 0))
			estPrime = false;

		if (estPrime)
			for (diviseur = 3; diviseur <= sqrt(nombre); diviseur += 2)
				if (nombre % diviseur == 0) {
					estPrime = false;
					break;
				}

		if (estPrime)
			cout << "Le nombre choisi est prime.";
		else {
			cout << "Le nombre choisi n'est pas prime ";
			if (nombre != 0 && nombre != 1)
				cout << "et son plus petit diviseur est " << diviseur;				
		}
	}
}