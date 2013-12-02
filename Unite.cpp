#include "Unite.h"

Unite::Unite(unsigned int mvt, unsigned int ct, unsigned int pop, int vieMax, int vieMin, vector<Case> ensCase, Joueur j, string nom)
: Entite(ensCase,j,nom,vieMin,vieMax) {
    this->setMouvement(mvt);
    this->setCout(ct);
    this->setPopulation(pop);
}

Case Unite::deplacement(Case c) {
    int dep = this->getDepX(c) + this->getDepY(c);
    if(dep < this->m_mouvement)
        return c;
    else
        return this->m_position[0];
}

void Unite::modifierVie(int vie) {
    this->m_vie.modifVie(vie);
    if (this->m_vie.estMort())
        getJoueur()->deleteUnite(this);
}

void Unite::attaquer(Case c, Attaque* attaque) {
    attaque->lancerAttaque(&c);
}

void Unite::attaquer(Case c) {
    m_AttaqueParDefaut->lancerAttaque(&c);
}

int Unite::getMouvement() {
    int mvt;
    mvt = m_mouvement; //+bonus

    return mvt;
}

Unite::~Unite() {

}

void Unite::initSort() {

}

//Penser à supprimer l'effet quand il arrive à 0 tours
