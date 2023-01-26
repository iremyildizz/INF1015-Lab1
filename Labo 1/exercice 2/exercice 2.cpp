#include <iostream>
using namespace std;

int main()
{
    float sommeDargent = 0.0;
    float montantRembourse = 0.0;
    float tauxAnnuel = 0.0;
    int nDeMois = 0;
    float tauxPayee = 0.0;
    while (sommeDargent <= 0) {
        cout << "La somme d'argent qui est plus grand que 0:" << endl;
        cin >> sommeDargent;
    }
    while (montantRembourse <= 0) {
        cout << "Le montant rembourse qui est plus grand que 0:" << endl;
        cin >> montantRembourse;
    }
    while (tauxAnnuel <= 0 || tauxAnnuel >= 100) {
        cout << "Le taux d'interet annuel qui est plus grand que 0:" << endl;
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
