/*
 * File:   Chateau.h
 * Author: MouaHH
 *
 * Created on 21 décembre 2013, 14:26
 */

#ifndef CHATEAU_H
#define	CHATEAU_H

#include "Batiment.h"
#include "Unite.h"
#include "Guerrier.h"
#include "Archer.h"
#include "Chevalier.h"
#include "Magicien.h"
#include "Pretre.h"
#include "Voleur.h"

class Chateau : public Batiment
{
    public:
    Chateau(vector<Case> EnsCase, Joueur j, string nom);
    void Invoquer(int unite, Case c);
};

#endif	/* CHATEAU_H */

