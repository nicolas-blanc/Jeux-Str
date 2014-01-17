#include "Batiment.h"

Batiment::Batiment(vector<Case *> ensCase, Joueur * j, string nom, int vieMin, int vieMax)
: Entite(ensCase, j, nom, vieMin, vieMax)
{
    j->setBatiment(this);
}

Batiment::Batiment(vector<Case *> ensCase, string nom, int vieMin, int vieMax)
: Entite(ensCase, nom, vieMin, vieMax)
{}

void Batiment::dessinerEntite() {
    cout << " B |";
}
