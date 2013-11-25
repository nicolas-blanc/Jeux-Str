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
        AttaqueDeBase m_atk;
        
    public :
        Tour(AttaqueDeBase atk);
        attaquer(Case c);
        inline AttaqueDeBase getAtk(){return m_atk;}
        inline void setAtk(AttaqueDeBase atk){m_atk = atk;}
};

#endif	/* TOUR_H */

