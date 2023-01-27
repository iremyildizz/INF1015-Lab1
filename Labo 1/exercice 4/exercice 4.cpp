#include <iostream>
#include <random>
#include <cmath>

using namespace std;

const float maxRandom = 1.0;
const float minRandom = -1.0;
const float pi        = 3.141593;


float generator(float max, float min){
    return ((float(rand()) / float(RAND_MAX)) * (max - (min))) + (min);
}

bool estDansCercle(float x, float y, int rayon = 1) {
    return (pow(x, 2) + pow(y, 2)) < rayon;
}

int compteurDeSucces(int iterations) {
    int compteur = 0;
    for (int i = 0; i < iterations; i++) {
        float x = generator(maxRandom, minRandom);
        float y = generator(maxRandom, minRandom);

        if (estDansCercle(x, y))
            compteur += 1;
    }
    return compteur;
}

int main()
{
    int nIterations;
    cout << "Le nombre d'iterations souhaite: " << endl;
    cin >> nIterations;
    
    float approximation = (float(compteurDeSucces(nIterations)) / float(nIterations)) * 4;
    cout.precision(6);
    cout << "L'approximation trouvee: " << fixed << approximation << endl;

    float ecartRelatif = (pi - approximation);
    cout << "L'ecart relatif: " << fixed << abs(ecartRelatif) << endl;
}

