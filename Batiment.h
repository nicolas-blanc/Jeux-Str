/* 
 * File:   Batiment.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 10:32
 */

#ifndef BATIMENT_H
#define	BATIMENT_H

#include "Entite.h"
using std::vector;

class Joueur;
class Batiment : public Entite {
public:
      Batiment(vector<Case> ensCase, Joueur j, string nom, int vieMin, int vieMax);
private:
    
};
#include "Entite.h"

#endif	/* BATIMENT_H */

