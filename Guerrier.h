#ifndef GUERRIER_H
#define	GUERRIER_H

#include "Unite.h"

using namespace std;

class Guerrier : public Unite {
public:
    Guerrier(vector<Case> c, Joueur j);
    virtual ~Guerrier();
private:

};

#endif	/* GUERRIER_H */

