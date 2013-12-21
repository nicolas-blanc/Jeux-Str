#include "Chateau.h"

Chateau::Chateau(vector<Case> EnsCase, Joueur j, string nom) : Batiment(EnsCase, j, nom, 0, 20)
{
    
}

Chateau::Invoquer(int unite, Case c)
{
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
