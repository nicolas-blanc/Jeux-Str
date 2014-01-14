#include "Tour.h"
#include <math.h>

Tour::Tour(vector<Case *> ensCase, string nom)
: Batiment(ensCase, nom, 0, 10),
m_attaque(5)
{
    getJoueur()->setBatiment(this);
}

void Tour::attaquer(Case * c) {
    getAttaque().lancerAttaque(c);
}


void Tour::attaqueAuto()
{
    Entite* danger_entite;
    float distance;
    float distance_danger;
    vector<Entite*> entite_presentent;
    vector<Case *> ma_position = getPosition();
    for(int x =0; x<ma_position[0]->getX()+m_attaque.getPortee(); x++)
    {
        for(int y = 0; y<ma_position[0]->getY()+m_attaque.getPortee(); y++)
        {
            Case caseoccupee = Case(x,y);
            if(caseoccupee.isOccupee())
            {
                entite_presentent.push_back(ma_position[0]->getOccupant());
            }
        }
    }

    distance_danger = sqrt(((getJoueur()->getBatiment("Chateau")->getPosition()[0]->getX()
                -entite_presentent[0]->getPosition()[0]->getX())^2)+
                ((getJoueur()->getBatiment("Chateau")->getPosition()[0]->getY()
                -entite_presentent[0]->getPosition()[0]->getY())^2));
    danger_entite = entite_presentent[0];
    for(int i =1; i<entite_presentent.size(); i++)
    {
        distance = sqrt(((getJoueur()->getBatiment("Chateau")->getPosition()[0]->getX()
                -entite_presentent[i]->getPosition()[0]->getX())^2)+
                ((getJoueur()->getBatiment("Chateau")->getPosition()[0]->getY()
                -entite_presentent[i]->getPosition()[0]->getY())^2));
        if(distance<distance_danger)
        {
            distance_danger = distance;
            danger_entite = entite_presentent[0];
        }
    }

    attaquer(danger_entite->getPosition()[0]);
}
