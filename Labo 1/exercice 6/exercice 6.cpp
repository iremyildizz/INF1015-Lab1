#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct MotDictionnaire {
    string mot;
    string nature;
    string definition;
};

int main()
{
    MotDictionnaire mots[4] = {};

    fstream newfile;
    newfile.open("dictionnaire.txt", ios::in); 
    if (newfile.is_open()) {
        for (int i = 0; i < 4; i++){
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
    for (MotDictionnaire motDictionnaire : mots){  
        if (motDictionnaire.mot.length() > motDictionnairePlusLong.mot.length())
            motDictionnairePlusLong = motDictionnaire;
    }
    cout << motDictionnairePlusLong.mot << " (" << motDictionnairePlusLong.nature << ") " << " : " << motDictionnairePlusLong.definition << endl;
}

