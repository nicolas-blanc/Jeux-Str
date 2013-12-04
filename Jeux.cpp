#include "Jeux.h"

Jeux::Jeux(int nbrJoueur, string nomPlateau)
{
    m_nbJoueur = nbrJoueur;
    m_FinDePartie = false;

    for(int i = 0; i < nbrJoueur; i++)
        m_Joueur.push_back(new Joueur(i,i));

    setnbTour(0);
    m_Plateau = new Plateau(nomPlateau);
}

Jeux::~Jeux()
{
    //dtor
}

void Jeux::creerGraphique() {
}

void Jeux::partie() {
    bool FinDeTour = false;
    while (!(m_FinDePartie)) {
        while (!(FinDeTour)) {
            m_nbTour++;
            int choix = 0;
            cin >> choix;
            switch (choix) {
            case 1:
                //Invoquer une unité
                int unite = 0;
                int x = 0;
                int y = 0;
                cin >> unite;
                cin >> x;
                cin >> y;
                m_Joueur[(m_nbTour%m_nbJoueur)]->getBatiment("Chateau")->invoque(unite,Plateau->getCase(x,y));
            }
        }
    }
}
