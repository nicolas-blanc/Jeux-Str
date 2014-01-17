#ifndef GUERRIER_H
#define	GUERRIER_H

#include "Unite.h"

using namespace std;

class Guerrier : public Unite {
public:
    Guerrier(vector<Case *> ensCase, Joueur* j);
    virtual ~Guerrier();
    void dessinerEntite();
private:

};

#endif	/* GUERRIER_H */

