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

void Jeux::creerGraphiqueConsole() {
}

void Jeux::partieConsole() {
    int x = 0;
    int y = 0;

    bool FinDeTour = false;
    while (!(m_FinDePartie)) {
        m_nbTour++;
        while (!(FinDeTour)) {
            int choix = 0;
            cout << "1. Invoquer une unité     2. Choisir une unité     3. Fin de tour" << endl;
            cin >> choix;
            switch (choix) {
            case 1:
                //Invoquer une unité
                int unite = 0;
                cout << "1. Guerrier  2. Chevalier  3. Archer  4. Voleur  5. Pretre  6. Mage" << endl;
                cin >> unite;
                cout << "Donnez la coordonnée X autour de votre Chateau" << endl;
                cin >> x;
                cout << "Donnez la coordonnée Y autour de votre Chateau" << endl;
                cin >> y;
                m_Joueur[(m_nbTour%m_nbJoueur)]->getBatiment("Chateau")->invoque(unite,Plateau->getCase(x,y)); // a rajouter a plateau => Case * getCase(int x, int y);
                break;
            case 2:
                //Deplacer/Attaquer une unité
                cout << "Donnez la coordonnée X de l'unité" << endl;
                cin >> x;
                cout << "Donnez la coordonnée Y de l'unité" << endl;
                cin >> y;
                Unite * unite = Plateau->getUnite(x,y); // a rajouter a Plateau => Unite * getUnite(int x, int y); retourne null si pas d'unite
                if (unite != NULL) {
                    afficherInfos(unite);
                    if (*(unite->getJoueur()) == m_Joueur[m_nbTour%m_nbJoueur]) {
                        int choix2 = 0;
                        cout << "1. Attaquer  2. Deplacer" << endl;
                        cin >> choix2;
                        switch (choix2) {
                        case 1:
                            cout << "Donnez la coordonnée X de l'unité" << endl;
                            cin >> x;
                            cout << "Donnez la coordonnée Y de l'unité" << endl;
                            cin >> y;
                            unite->attaquer(m_Plateau.getCase(x,y));
                        }

                    }
                }
            }
        }
    }
}

void Jeux::afficherInfo(Unite * unite) {
    //affiche en console les informations
}
