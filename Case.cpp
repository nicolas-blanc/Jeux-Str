#include "Case.h"
#include "Effet.h"

template <class T>
Case<T>::Case(int x, int y) : CaseGen(x,y) {}

template <class T>
void Case<T>::setOccupant(T occ) {
	occupant = occ;
}

template <class T>
void Case<T>::transmettreAttaque(int nbPV) {
    if (occupant!=NULL) {
            occupant.modifPV(nbPV);
    }
}

template <class T>
bool Case<T>::isOccupee() {
    return (occupant != NULL);
}

template <class T>
void Case<T>::declencherEffets() {
    int vectSize = effets.size();
    for (int i=0; i<vectSize; i++) {
        effets[i].lancerSort(this);
        effets[i].decreaseTour();
    }
}