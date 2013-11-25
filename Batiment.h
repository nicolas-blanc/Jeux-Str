/* 
 * File:   Batiment.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 10:32
 */

#ifndef BATIMENT_H
#define	BATIMENT_H

#include "Entite.h"

class Batiment : public Entite {
public:
    Batiment(vector<case> ensCase, Joueur j, string nom, int vieMax, int vieMin);
private:

};

#endif	/* BATIMENT_H */

