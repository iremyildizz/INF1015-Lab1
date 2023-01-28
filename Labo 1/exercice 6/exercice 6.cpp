#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
const int nMotDictionnaire = 4;
const string nomFichier = "dictionnaire.txt";

struct MotDictionnaire {
    string mot;
    string nature;
    string definition;
};

bool comparerMots(string mot1, string mot2) {
    return (mot1.length() > mot2.length());
}

int main()
{
    MotDictionnaire mots[nMotDictionnaire] = {};

    fstream newfile;
    newfile.open(nomFichier, ios::in);
    if (newfile.is_open()) {
        for (int i = 0; i < nMotDictionnaire; i++){
            string ligne;
            getline(newfile, ligne);
            istringstream iss(ligne);
            string partie;

            getline(iss, partie, '\t');
            mots[i].mot = partie;

            getline(iss, partie, '\t');
            mots[i].nature = partie;

            getline(iss, partie, '\t');
            mots[i].definition = partie;
        }
        newfile.close();
    }

    MotDictionnaire motDictionnairePlusLong = {"","",""};
    for (MotDictionnaire motDictionnaire : mots)  
        if (comparerMots(motDictionnaire.mot, motDictionnairePlusLong.mot)) 
            motDictionnairePlusLong = motDictionnaire;

    cout << motDictionnairePlusLong.mot << " (" << motDictionnairePlusLong.nature << ") " << " : " << motDictionnairePlusLong.definition << endl;
}

