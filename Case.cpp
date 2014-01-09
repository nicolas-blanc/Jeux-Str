#include "Case.h"
#include "Effet.h"


Case::Case(int x, int y) {
    m_x=x;
    m_y=y;
    m_occupant=NULL;
    m_batiment = false;
}

void Case::setOccupant(Entite* occ, bool bat) {
    m_occupant = occ;
    m_batiment = bat;
}

void Case::transmettreAttaque(int nbPV) {
    if (m_occupant!=NULL) {
            m_occupant->getVie()->
    }
}

bool Case::isOccupee() {
    return (m_occupant != NULL);
}

void Case::declencherEffets() {
    int vectSize = effets.size();
    for (int i=0; i<vectSize; i++) {
        effets[i].getSort()->lancerAttaque(this);
        effets[i].decreaseTour();
    }
}


void Case::setCase(Entite* entite)
{
    m_occupant = entite;
}
