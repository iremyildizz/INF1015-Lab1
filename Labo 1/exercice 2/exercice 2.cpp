#include <iostream>
using namespace std;

int main()
{
    float sommeDargent;
    float montantRembourse;
    float tauxAnnuel;
    int nDeMois = 0;
    float tauxPayee = 0;
    cout << "La somme d'argent:" << endl;
    cin >> sommeDargent;
    cout << "Le montant rembourse:" << endl;
    cin >> montantRembourse;
    cout << "Le taux d'interet annuel:" << endl;
    cin >> tauxAnnuel;
    cout << "la somme d'argent:" << sommeDargent << endl << "Le montant rembourse:" << montantRembourse << endl << "Le taux d'interet annuel:" << tauxAnnuel << endl;

    float tauxMensuel = tauxAnnuel / 12;
    cout << "Le taux d'interet mensuel:" << tauxMensuel << endl;

    while (sommeDargent > 0) {
        sommeDargent -= montantRembourse;
        tauxPayee += sommeDargent * tauxMensuel / 100;
        sommeDargent += sommeDargent * tauxMensuel / 100;
        nDeMois += 1;
    }

    cout << "Le nombre de mois necessaires: " << nDeMois << endl;
    cout << "Le taux total payee:" << tauxPayee << endl;


        
}
