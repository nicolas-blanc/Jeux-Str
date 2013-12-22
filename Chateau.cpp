#include "Chateau.h"
#include <math.h>
Chateau::Chateau(vector<Case> EnsCase, Joueur j, string nom) : Batiment(EnsCase, j, nom, 0, 20)
{
    getJoueur().setBatiment(this);
    //a revoir je sais pas si possible;
}

Chateau::Invoquer(int unite, Case c)
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
    switch(unite)
    {
        case 1:
            Unite* u = new Guerrier(ensCase, this->getJoueur());
            break;
        case 2:
            Unite* u = new Archer(ensCase, getJoueur());
            break;
        case 3:
            Unite* u = new Chevalier(ensCase, getJoueur());
            break;
        case 4:
            Unite* u = new Magicien(ensCase, getJoueur());
            break;
        case 5:
            Unite* u = new Pretre(ensCase, getJoueur());
            break;
        default:
            Unite* u = new Voleur(ensCase, getJoueur());
            break;    
           getJoueur().setUnite(u); 
    }
            
}
