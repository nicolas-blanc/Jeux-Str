#include "Case.h"
#include "Effet.h"


Case::Case(int x, int y) : CaseGen(x,y) {}

void Case::setOccupant(Entite occ) {
	occupant = occ;
}

void Case::transmettreAttaque(int nbPV) {
    if (occupant!=NULL) {
            occupant.modifPV(nbPV);
    }
}

bool Case<T>::isOccupee() {
    return (occupant != NULL);
}

void Case::declencherEffets() {
    int vectSize = effets.size();
    for (int i=0; i<vectSize; i++) {
        effets[i].lancerSort(this);
        effets[i].decreaseTour();
    }
}
