#include "Entite.h"

Entite::Entite(vector<Case *> ensCase, Joueur* j, string nom, int vieMin, int vieMax)
:m_vie(vieMax,vieMin), m_position(ensCase) {
    setJoueur(j);
    Setnom(nom);
}

Entite::Entite(vector<Case *> ensCase, string nom, int vieMin, int vieMax)
:m_vie(vieMax,vieMin), m_position(ensCase) {
    Setnom(nom);
}

Entite::~Entite()
{
    //dtor
}

void Entite::modifierVie(int vie) {
    m_vie.modifVie(vie);
}

void Entite::dessinerEntite() {
    cout << " E |";
}
