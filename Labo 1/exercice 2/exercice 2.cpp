#include <iostream>
#include <cmath>
using namespace std;

bool dansIntervalle(float numero, float borneSuperieure = INFINITY, float borneInferieure = 0) {
    return (numero > borneInferieure && numero < borneSuperieure);
}

void demandeDeValeur(float& valeurDemandee, string message, float borneSuperieure = INFINITY, float borneInferieure = 0) {
    while (!dansIntervalle(valeurDemandee, borneSuperieure, borneInferieure)) {
        cout << message << endl;
        cin >> valeurDemandee;
    }
}

void predictionDePayement(float somme, float taux, float remboursement) {
    int nDeMois                  = 0;
    float tauxPayee              = 0.0;
    float tauxMensuelPourcentage = (taux / 12) / 100;

    while (somme > 0) {
        tauxPayee += somme * tauxMensuelPourcentage;
        somme += somme * tauxMensuelPourcentage;
        somme -= remboursement;
        nDeMois += 1;
    }

    cout << "Le nombre de mois necessaires: " << nDeMois << endl;
    cout << "Le taux total payee:" << tauxPayee << endl;
}


int main()
{
    float sommeDargent     = 0.0;
    float montantRembourse = 0.0;
    float tauxAnnuel       = 0.0;

    string messageSommeDargent     = "La somme d'argent qui est plus grand que 0:";
    string messageMontantRembourse = "Le montant rembourse qui est plus grand que 0:";
    string messageTauxAnnuel       = "Le taux d'interet annuel qui est plus grand que 0 et plus petit que 100:";

    demandeDeValeur(sommeDargent, messageSommeDargent);
    demandeDeValeur(montantRembourse, messageMontantRembourse);
    demandeDeValeur(tauxAnnuel, messageTauxAnnuel, 100);

    cout << "la somme d'argent:" << sommeDargent << endl;
    cout << "Le montant rembourse:" << montantRembourse << endl;
    cout << "Le taux d'interet annuel:" << tauxAnnuel << endl;

    predictionDePayement(sommeDargent, tauxAnnuel, montantRembourse);        
}
