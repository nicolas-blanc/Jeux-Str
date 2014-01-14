#include "Batiment.h"

Batiment::Batiment(vector<Case *> ensCase, Joueur j, string nom, int vieMin, int vieMax)
: Entite(ensCase, &j, nom, vieMin, vieMax)
{}

Batiment::Batiment(vector<Case *> ensCase, string nom, int vieMin, int vieMax)
: Entite(ensCase, nom, vieMin, vieMax)
{}
