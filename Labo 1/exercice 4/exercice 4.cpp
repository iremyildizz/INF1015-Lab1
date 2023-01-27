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
    float x = generator(maxRandom, minRandom);
    float y = generator(maxRandom, minRandom);
    cout << x << " & " << y << endl;

    float somme = pow(x, 2) + pow(y, 2);
    if (somme < 1) {
        cout << "Dans le cercle";
    }
    else {
        cout << "Pas dans le cercle";
    }
}

