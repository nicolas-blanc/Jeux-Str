#include "Entite.h"

Entite::Entite(int vie, int min, Case c)
:m_vie(min,vie), m_position(c) {}

Entite::~Entite()
{
    //dtor
}
