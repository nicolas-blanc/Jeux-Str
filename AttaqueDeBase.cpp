#include "AttaqueDeBase.h"

AttaqueDeBase::AttaqueDeBase(int portee = 1)
: Attaque(portee) {}

void AttaqueDeBase::lancerAttaque(Case c) {
    c.transmettreAttaque(this->getDegat());
}