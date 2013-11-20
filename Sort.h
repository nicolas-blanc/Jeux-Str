#ifndef SORT_H
#define	SORT_H

#include "Attaque.h"

class Sort : public Attaque {
public:
    Sort(int degat = 1, int portee = 1, int ptAction = 1, int zone = 1, string nom);
    void lancerAttaque(Case c);

private:
    string m_nomSort;
    int zone;
};


#endif	/* SORT_H */

