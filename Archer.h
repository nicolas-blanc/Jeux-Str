#ifndef ARCHER_H
#define	ARCHER_H

#include "Unite.h"

class Archer : public Unite
{
    public:
    Archer(vector<Case *> ensCase, Joueur* j);
    void dessinerEntite();
};
#endif	/* ARCHER_H */

