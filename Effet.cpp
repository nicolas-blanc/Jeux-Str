#include "Effet.h"

Effet::Effet(Sort sort, int tour) : Sort(sort) {
    nbTour = tour;
}

void Effet::decreaseTour() {
    nbTour--;
}