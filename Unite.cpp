#include "Unite.h"
#include "ListeException.h"
#include <exception>
Unite::Unite(unsigned int mvt, unsigned int ct, unsigned int pop, int vieMax, int vieMin, vector<Case> ensCase, Joueur* j, string nom)
: Entite(ensCase,j,nom,vieMin,vieMax) {
    this->setMouvement(mvt);
    this->setCout(ct);
    this->setPopulation(pop);
    this->setAttaqueDeBase();
}

void Unite::setAttaqueDeBase() {
    m_AttaqueParDefaut = new AttaqueDeBase();
    m_AttaqueParDefaut->lierEntite(this);
}

void Unite::deplacer(Case c) {
    Case nouveau = deplacement(c);
    if (c.getX()!=nouveau.getX() && c.getY()!=nouveau.getY() && !nouveau.isOccupee())
    {
        nouveau.setCase(this);
        //Rajout de void setCase(Unite unite); -> Test de si la case n'est pas occup�, puis mettre a jour la case
                                // appel d'une exception si la case est occup� (Pour saut� l'instruction suivante)
                                // ou avec un booleen, je ne sais pas
                                // Nicolas :-D
        c.setCase(NULL);
        // mettre a 0 la case
    }
    else
    {
        cout << "case prise"<<endl;
    }
}

Case Unite::deplacement(Case c) {
    int dep = 0;//getDepX(c) + getDepY(c);
    if(dep < m_mouvement)
        return c;
    else
        return m_position[0];
}

void Unite::modifierVie(int vie) {
    Entite::modifierVie(vie);
    if (estMort())
        this->getJoueur()->deleteUnite(this);
}

void Unite::attaquer(Case c, Attaque* attaque) {
    if (getJoueur()->getPtAction()<attaque->getPtAction()) {
        ManquePtAction ex;
        throw ex;
    }
    Case cE = getPosition()[0];
    if ((abs(c.getX() - cE.getX()) + abs(c.getY() - cE.getY())) <= attaque->getPortee()) {
        ManquePortee ex;
        throw ex;
    }
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

//Penser � supprimer l'effet quand il arrive � 0 tours
