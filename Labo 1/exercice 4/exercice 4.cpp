#include <iostream>
#include <random>
#include <cmath>

using namespace std;

const float maxRandom = 1.0;
const float minRandom = -1.0;


float generator(float max, float min){
    return ((float(rand()) / float(RAND_MAX)) * (max - (min))) + (min);
}


int main()
{

    cout << "Le nombre d'itérations souhaite: " << endl;
    int nIterations;
    cin >> nIterations;
    int compteur = 0;
    for (int i = 0; i < nIterations; i++){
        float x = generator(maxRandom, minRandom);
        float y = generator(maxRandom, minRandom);

        float somme = pow(x, 2) + pow(y, 2);
        if (somme < 1) {
            compteur += 1;
        }
    }
    float approximation = (float(compteur) / float(nIterations)) * 4;
    cout.precision(6);
    cout << "L'approximation trouvee: " << fixed << approximation << endl;
    float ecartRelatif = (3.141593 - approximation);
    cout << "L'ecart relatif entre l'approximation trouvee et la valeur precise a 10^-6: " << fixed << abs(ecartRelatif) << endl;

}

