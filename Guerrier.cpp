/* 
 * File:   Guerrier.cpp
 * Author: blancn
 * 
 * Created on 19 novembre 2013, 11:11
 */

#include "Guerrier.h"
#include "Unite.h"

Guerrier::Guerrier(unsigned int mvt, unsigned int ct, unsigned int pop, int vie, int min)
:Unite(mvt,ct,pop,vie,min)
{
    this->m_AttaqueParDefaut = new AttaqueDeBase();
}

Guerrier::~Guerrier() {
}

