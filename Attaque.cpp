#include "attaque.h"

Attaque::Attaque(int portee, int degat, int ptAction) {
    m_Degat = degat;
    m_Portee = portee;
    m_PtAction = ptAction;
    m_Entite = NULL;
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
    c->transmettreAttaque(m_Degat);
}

int Attaque::getDegat() {
    return m_Degat + m_Entite->getJoueur()->getListeBonusJoueur(3);
}

int Attaque::getPortee() {
    return m_Portee + m_Entite->getJoueur()->getListeBonusJoueur(4);
}
