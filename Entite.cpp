#include "Entite.h"

Entite::Entite(int vie, int min)
:m_vie(vie,min,vie) {}

Entite::~Entite()
{
    //dtor
}
