#ifndef BATIMENT_H
#define	BATIMENT_H

#include <vector>

#include "Entite.h"
#include "Joueur.h"

using namespace std;

class Batiment : public Entite {
public:
      Batiment(vector<Case *> ensCase, Joueur * j, string nom, int vieMin, int vieMax);
      Batiment(vector<Case *> ensCase, string nom, int vieMin, int vieMax);
      void dessinerEntite();
};
#endif	/* BATIMENT_H */

