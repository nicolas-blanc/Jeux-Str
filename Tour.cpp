#include "Tour.h"

Tour::Tour(vector<Case> ensCase, Joueur j, string nom)
: Batiment(ensCase, j, nom, 0, 10),
m_attaque(5) {}

void Tour::attaquer(Case c) {
    getAttaque().lancerAttaque(&c);
}
