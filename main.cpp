#include <cstdlib>
#include "Jeux.h"
#include "Archer.h"

using namespace std;

int main(int argc, char** argv) {
    cout << 2 << endl;
    Jeux * jeux = new Jeux(2,"Plateau.txt");
    cout << 1 << endl;
    jeux->partieConsole();
    delete jeux;

    return 0;
}

