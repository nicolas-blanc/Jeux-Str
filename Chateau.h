/* 
 * File:   Chateau.h
 * Author: MouaHH
 *
 * Created on 21 décembre 2013, 14:26
 */

#ifndef CHATEAU_H
#define	CHATEAU_H
#include "Batiment.h"

class Chateau : public Batiment
{
    Chateau(vector<Case> EnsCase, Joueur j, string nom);
    void Invoquer(int unite, Case c);
};

#endif	/* CHATEAU_H */

