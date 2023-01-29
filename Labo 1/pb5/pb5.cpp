#include <iostream>
using namespace std;

int main() {
    const int longeurTableau = 10;
    int switchNum;

    int tableau[longeurTableau], i, nombre;
    cout << "Entrer 10 chiffres aleatoires: ";
    for (i = 0; i < longeurTableau; i++)
    {
        cin >> tableau[i];
    }


    cout << "Tableau non arrange : ";
    for (i = 0; i < longeurTableau; i++)
        cout << tableau[i] << " ";
    cout << endl;


    for (i = 0; i < longeurTableau; i++)
    {
        if (tableau[i] % 2 == 0)
        {
            continue;
        }
        for (int j = i + 1; j < longeurTableau; j++)
        {
            if (tableau[j] % 2 == 0)
            {
                switchNum = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = switchNum;
            }
        }
    }


    cout << "Tableau arrange : ";
    for (i = 0; i < longeurTableau; i++)
        cout << tableau[i] << " ";
}