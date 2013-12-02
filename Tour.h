/*
 * File:   Tour.h
 * Author: ponsma
 *
 * Created on 25 novembre 2013, 17:09
 */

#ifndef TOUR_H
#define	TOUR_H
#include "Batiment.h"
#include "AttaqueDeBase.h"
class Tour : public Batiment
{
    private :
        AttaqueDeBase m_attaque;

    public :
        Tour(vector<Case> ensCase, Joueur j, string nom);
        void attaquer(Case c);
        inline AttaqueDeBase getAttaque(){return m_attaque;}
        inline void setAtttaque(AttaqueDeBase atk){m_attaque = atk;}
};

#endif	/* TOUR_H */

