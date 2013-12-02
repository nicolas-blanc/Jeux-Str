/*
 * File:   Guerrier.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 11:11
 */

#ifndef GUERRIER_H
#define	GUERRIER_H
#include "Unite.h"
using namespace std;

class Guerrier : public Unite {
public:
    Guerrier(vector<Case> c, Joueur j);
    virtual ~Guerrier();
private:

};

#endif	/* GUERRIER_H */

