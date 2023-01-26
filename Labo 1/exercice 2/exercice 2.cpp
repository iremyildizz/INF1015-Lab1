#include <iostream>
#include <cmath>
using namespace std;

bool dansIntervalle(float numero, float borneSuperieure = INFINITY, float borneInferieure = 0) {
    return (numero > borneInferieure && numero < borneSuperieure);
}

int main()
{
    float sommeDargent = 0.0;
    float montantRembourse = 0.0;
    float tauxAnnuel = 0.0;
    int nDeMois = 0;
    float tauxPayee = 0.0;

    while (!dansIntervalle(sommeDargent)) {
        cout << "La somme d'argent qui est plus grand que 0:" << endl;
        cin >> sommeDargent;
    }
    while (!dansIntervalle(montantRembourse)) {
        cout << "Le montant rembourse qui est plus grand que 0:" << endl;
        cin >> montantRembourse;
    }
    while (!dansIntervalle(tauxAnnuel, 100)) {
        cout << "Le taux d'interet annuel qui est plus grand que 0 et plus petit que 100:" << endl;
        cin >> tauxAnnuel;
    }
    cout << "la somme d'argent:" << sommeDargent << endl << "Le montant rembourse:" << montantRembourse << endl << "Le taux d'interet annuel:" << tauxAnnuel << endl;

    float tauxMensuel = tauxAnnuel / 12;
    cout << "Le taux d'interet mensuel:" << tauxMensuel << endl;

    while (sommeDargent > 0) {
        tauxPayee += sommeDargent * tauxMensuel / 100;
        sommeDargent += sommeDargent * tauxMensuel / 100;
        sommeDargent -= montantRembourse;
        nDeMois += 1;
    }
   
    cout << "Le nombre de mois necessaires: " << nDeMois << endl;
    cout << "Le taux total payee:" << tauxPayee << endl;


        
}
