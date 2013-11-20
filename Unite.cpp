#include "Unite.h"

Unite::Unite(unsigned int mvt, unsigned int ct, unsigned int pop, int vie, int min)
: Entite(vie,min)
{
    this->setMouvement(mvt);
    this->setCout(ct);
    this->setPopulation(pop);
}

Case Unite::deplacement(Case c) {
    int dep = this->getDepX(c) + this->getDepY(c);
    if(dep < this->m_mouvement)
        return c;
    else
        return this->m_position;
}

void Unite::modifierVie(int vie) {
    this->m_vie.modifVie(vie);
    if (this->m_vie.estMort())
        this->m_joueur.deleteUnite(this);
}

void Unite::attaquer(Case c, Attaque attaque = getAttaqueParDefaut()) {
    attaque.lancerAttaque(c);
}

int Unite::getMouvement() {
    int mvt;
    mvt = m_mouvement + Joueur::getModifMouvement();
    
    return mvt;
}

void Unite::enleverEffet(Effet effet) {
    vector<Effet>::iterator trouve = find(this->v_effet.begin(), this->v_effet.end(), effet);
    
    this->v_effet.erase(trouve);
}