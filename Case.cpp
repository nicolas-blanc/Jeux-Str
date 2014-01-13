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
            m_occupant->modifierVie(nbPV);
    }
}

bool Case::isOccupee() {
    return (m_occupant != NULL);
}

void Case::declencherEffets() {
    int vectSize = m_effets.size();
    for (int i=0; i<vectSize; i++) {
        m_effets[i]->getSort()->lancerAttaque(this);
        m_effets[i]->decreaseTour();
    }
}


void Case::setCase(Entite* entite)
{
    m_occupant = entite;
}

void Case::dessinerCase() {
    if ( m_occupant == NULL )
        cout << "   |";
    else
        m_occupant->dessinerEntite();
}
