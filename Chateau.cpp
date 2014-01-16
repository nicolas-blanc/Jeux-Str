#include "Chateau.h"
#include <math.h>

Chateau::Chateau(vector<Case *> EnsCase, string nom) : Batiment(EnsCase, nom, 0, 20)
{}

void Chateau::Invoquer(int unite, Case c)
{
    float distance;
    bool invoc_possible = false;
    for(int x = 0;x<4;x++)
    {
        for(int y = 0; y<4; y++)
        {
         distance = sqrt(((this->getPosition()[x]->getX()
                -c.getX())^2)+
                ((this->getPosition()[y]->getY()
                -c.getY())^2));
         if((distance == 1.0 || distance == sqrt(2)) && !c.isOccupee())
             invoc_possible = true;
        }
    }
    vector<Case *> ensCase;
    ensCase.push_back(&c);
    Unite* u;

    switch(unite)
    {
        case 1: {
            u = new Guerrier(ensCase, this->getJoueur());
            break;}
        case 2: {
            u = new Archer(ensCase, getJoueur());
            break; }
        case 3: {
            u = new Chevalier(ensCase, getJoueur());
            break;}
        case 4:{
            u = new Magicien(ensCase, getJoueur());
            break;}
        case 5:{
            u = new Pretre(ensCase, getJoueur());
            break;}
        default:{
            u = new Voleur(ensCase, getJoueur());
            break;}
    }

    if(this->getJoueur()->getPopulation()+u->getPopulation() <= u->getPopulation() || this->getJoueur()->getPtAction() >= u->getCout())
    {
        getJoueur()->setUnite(u);
        this->getJoueur()->modifPopulation(u->getPopulation());
        this->getJoueur()->modifPtAction(u->getCout());
    }
    else
    {
        delete(u);
        if(getJoueur()->getPopulation() >= u->getPopulation())
            throw ManquePopulation();
        else
            throw ManquePtAction();
    }


}
