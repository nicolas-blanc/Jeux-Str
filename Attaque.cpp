#include "attaque.h"

Attaque::Attaque(int portee, int degat, int ptAction) {
    m_Degat = degat;
    m_Portee = portee;
    m_PtAction = ptAction;
    m_Entite =
}

/*void Attaque::lancerAttaque(Case* c){
    if ((Joueur::getPtActionJoueur()) - m_ptAction => 0){
        if (m_portee =< (std::abs(c.x-c.y){      // me manque position de la case a recuperer pour la comparer a celle de la case (abs fonction absolue en c++)
            c->vie -= m_degat;
            ptjoueur = Joueur::getPtActionJoueur();
            ptjoueur -= m_ptAction;
        }
        if( c.vie < 0 ){
            c.vie = 0;cout<<"ennemi mort"<<endl; // pour ne pas avoir la vie negative
            cout<<"Attaque reussi. Vie de l'ennemi : "<<c.vie<<endl;
        }
        else
            cout<<"Portee insuffisante"<<endl;}
    else
        cout<<"Ptaction insuffisants("<<Joueur::getPtActionJoueur()<<") il faut minimum"<<m_ptAction<<"points d'actions"<<endl;
}
*/

void Attaque::lancerAttaque(Case* c) {
    if ((Joueur::getPtActionJoueur()) - m_ptAction => 0) {
        if (portee) {
            c.transmettreAttaque(m_Degat);
        } else throw ManquePortee;
    } else throw ManquePtAction;
}

void Attaque::portee(Case* c) {
    cE = m_Entite->getPosition()[0];
    return ((abs(c->getX() - cE->getX()) + abs(c->getY() - cE->getY())) <= m_Portee);
}
