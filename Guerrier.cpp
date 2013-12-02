/*
 * File:   Guerrier.cpp
 * Author: blancn
 *
 * Created on 19 novembre 2013, 11:11
 */

#include "Guerrier.h"
#include "Unite.h"

Guerrier::Guerrier(vector<Case> c, Joueur j)
:Unite(5,2,1,5,0,c,j,"Guerrier")
{
}

Guerrier::~Guerrier() {
}

