/*
 * File:   Pretre.h
 * Author: MouaHH
 *
 * Created on 21 décembre 2013, 14:45
 */

#ifndef PRETRE_H
#define	PRETRE_H

#include "Unite.h"

class Pretre : public Unite
{
    public:
    Pretre(vector<Case *> ensCase, Joueur* j);
    void dessinerEntite();
};


#endif	/* PRETRE_H */

