#include "Entite.h"

Entite::Entite(vector<Case> ensCase, Joueur j, string nom, int vieMin, int vieMax)
:m_vie(vieMax,vieMin), m_position(ensCase) {
    setJoueur(&j);
    Setnom(nom);

}

Entite::~Entite()
{
    //dtor
}