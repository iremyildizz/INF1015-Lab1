#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double const constanteGravite = 9.81;

double validerInput(string phrase, double minimum = 0, double maximum = INFINITY) {
	double inputUsager;

	while (true) {
		cout << phrase;
		cin >> inputUsager;

		if ((inputUsager >= minimum) && (inputUsager <= maximum))
			break;
		else
			cout << "La valeur entree est invalide, veuillez recommencer" << endl;
	}
	return inputUsager;
}

double calculerHauteur(double hauteurInitiale, int nombreRebond, double coefficientRebond) {
	double hauteur = hauteurInitiale;

	for (int i = 0; i < nombreRebond; i++) {
		double vitesseAvantRebond = sqrt(2.0 * constanteGravite * hauteur);
		double vitesseApresRebond = coefficientRebond * vitesseAvantRebond;
		hauteur = pow(vitesseApresRebond, 2) / (2 * constanteGravite);
	}

	return hauteur;
}

int main() {
	double hauteurInitialeInput   = validerInput("Veuillez entrez une valeur pour la hauteur : ");
	int nombreRebondInput         = validerInput("Veuillez entez une valeur pour le nombre de rebonds : ");
	double coefficientRebondInput = validerInput("Veuillez entez une valeur pour le coefficient de rebond : ", 0, 1);

	cout << "La hauteur finale apres " << nombreRebondInput << " rebonds est de : " << calculerHauteur(hauteurInitialeInput, nombreRebondInput, coefficientRebondInput);
}