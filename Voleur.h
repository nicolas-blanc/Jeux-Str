/*
 * File:   Voleur.h
 * Author: MouaHH
 *
 * Created on 21 décembre 2013, 14:46
 */

#ifndef VOLEUR_H
#define	VOLEUR_H

#include "Unite.h"

class Voleur : public Unite
{
    public:
    Voleur(vector<Case> ensCase, Joueur* j);
};


#endif	/* VOLEUR_H */

