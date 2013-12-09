
#ifndef TOUR_H
#define	TOUR_H

#include "Batiment.h"
#include "Case.h"
#include "Joueur.h"
#include "Chateau.h"
#include "Archer.h"
#include "Guerrier.h"
#include "Chevalier.h"

class Chateau : public Batiment {

	public:
		
		Chateau(vector<Case> ensCase, Joueur j, string nom, int vieMin, int vieMax)
		void invoque(int unit, Case c);
		
};
	
	
#endif	/* TOUR_H */