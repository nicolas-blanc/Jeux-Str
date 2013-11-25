#include "Tour.h"

        Tour::Tour(AttaqueDeBase atk) : m_atk(atk)
        {
            
        }
        Tour::attaquer(Case c)
        {
            getAtk().lancerAttaque(c);
        }
