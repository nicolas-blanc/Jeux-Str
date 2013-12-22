#include "attaque.h"

Attaque::Attaque(degat,portee,ptAction) {
m_degat=degat;
m_portee=portee;
m_ptAction=ptAction;
}

int Attaque::getDegat(){
return m_degat;
}

void Attaque::setDegat(degat){
this->m_degat=degat;
}

int Attaque::getPortee(){
return m_portee;
}

void Attaque::setPortee(portee){
this->m_portee=portee;
}

int Attaque::getPtAction(){
return m_ptAction;
}

void Attaque::setPtAction(ptAction){
this->m_ptAction=ptAction;
}


void Attaque::lancerAttaque(c : case){
    if ((Joueur::getPtActionJoueur())-m_ptAction => 0){
        if (m_portee =< (std::abs(c.x-c.y){ // me manque position de la case a recuperer pour la comparer a celle de la case (abs fonction absolue en c++)
            c.vie -= m_degat;
            ptjoueur = Joueur::getPtActionJoueur();
            ptjoueur-=m_ptAction;
        }
        if( c.vie < 0 ){
            c.vie = 0;cout<<"ennemi mort"<<endl;} // pour ne pas avoir la vie negative
            cout<<"Attaque reussi. Vie de l'ennemi : "<<c.vie<<endl;
        }
        else
            cout<<"Portee insuffisante"<<endl;}
    else
        cout<<"Ptaction insuffisants("<<Joueur::getPtActionJoueur()<<") il faut minimum"<<m_ptAction<<"points d'actions"<<endl;
}
