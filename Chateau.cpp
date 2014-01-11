#include "Chateau.h"
#include <math.h>

Chateau::Chateau(vector<Case> EnsCase, Joueur j, string nom) : Batiment(EnsCase, j, nom, 0, 20)
{
    getJoueur()->setBatiment(this);
    //a revoir je sais pas si possible;
}

void Chateau::Invoquer(int unite, Case c)
{
    float distance;
    bool invoc_possible = false;
    for(int x = 0;x<4;x++)
    {
        for(int y = 0; y<4; y++)
        {
         distance = sqrt(((this->getPosition()[x].getX()
                -c.getX())^2)+
                ((this->getPosition()[y].getY()
                -c.getY())^2)); 
         if((distance == 1.0 || distance == sqrt(2)) && !c.isOccupee())
             invoc_possible = true;
        }
    }
    vector<Case> ensCase;
    ensCase.push_back(c);
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
    getJoueur()->setUnite(u); 
            
}
