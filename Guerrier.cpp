/* 
 * File:   Guerrier.cpp
 * Author: blancn
 * 
 * Created on 19 novembre 2013, 11:11
 */

#include "Guerrier.h"
#include "Unite.h"

Guerrier::Guerrier(Case c)
:Unite(5,2,1,5,0,c)
{
    this->m_AttaqueParDefaut = new AttaqueDeBase();
}

Guerrier::~Guerrier() {
}

