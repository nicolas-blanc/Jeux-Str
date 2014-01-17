#include "Plateau.h"

Plateau::Plateau(vector<Joueur *> joueurs,string nomPlateau) : v_Batiment() {
    stringstream out;

    ifstream fichierPlateau;
    fichierPlateau.open(nomPlateau.c_str(), ios::in | ios::binary);
    fichierPlateau.read((char*)&m_longueur,sizeof(int));
    fichierPlateau.read((char*)&m_largeur,sizeof(int));

    //-----initialisation du plateau (tableau de Case à 2 dimensions)
    plateau = new Case**[m_largeur];
    for (int i=0 ; i < m_largeur ; i++)
        plateau[i] = new Case*[m_longueur];


    for (int i=0; i< m_largeur; i++) {
        for (int j=0; j<m_longueur; j++) {
            plateau[i][j] = new Case(i,j);
        }
    }

    while (!isFini(fichierPlateau)) {
        int joueur,x,y,taille;
        int jTaille = joueurs.size();
        vector<int> nbT(jTaille,0);
        int nbCa = 0;
        int nbV = 0;
        catBatiments type;
            fichierPlateau.read((char*)&type, sizeof(catBatiments));
            fichierPlateau.read((char*)&joueur, sizeof(int));
            fichierPlateau.read((char*)&taille, sizeof(int));
            fichierPlateau.read((char*)&x, sizeof(int));
            fichierPlateau.read((char*)&y, sizeof(int));
            vector<Case *> cases;
            for (int i=0; i<taille; i++) {
                for (int j=0; j<taille; j++)
                    cases.push_back(plateau[x+j][y+i]);
            }

            Batiment* bat;
            switch (type) {
                case chateau : {
                    if(joueur < jTaille)
                        bat = new Chateau(cases,joueurs[joueur],"Chateau");
                    else
                        bat = new Chateau(cases,"Chateau");
                    break;
                }
                case tour : {
                    if(joueur < jTaille) {
                        nbT[joueur]++;
                        out << nbT[joueur];
                        bat = new Chateau(cases,joueurs[joueur],"Tour" + out.str());
                    } else
                        bat = new Tour(cases,"Tour" + out.str());
                    break;
                }
                case campement : {
                    nbCa++;
                    out << nbCa;
                    break;
                }
                case village : {
                    nbV++;
                    out << nbV;
                    break;
                }
                case magie : {
                    break;
                }
            }
            for (int i=0; i<taille; i++) {
                for (int j=0; j<taille; j++) {
                    plateau[x+i][y+j]->setOccupant(bat);
                }
            }
            v_Batiment.push_back(bat);
      }
      fichierPlateau.close();
}

bool Plateau::isFini(ifstream& fichier) {
    bool aLaFin = fichier.peek()==EOF;
    if (fichier.eof())
        fichier.clear();
    return aLaFin;
}

void Plateau::setPlateau() {
    cout << "";
}

void Plateau::lierBatiment(vector<Joueur *>joueurs,vector<Batiment *>v_chateau,vector<Batiment *>v_tour,int nbTour) {
    vector<Batiment *>v_tourJoueur;
    for(int i = 0; i < joueurs.size(); i++) {
        std::vector<Batiment *>::iterator it (v_tour.begin()), itend(v_tour.end());
        int j = 0;
        for(;it!=itend;++j) {
            if (v_tourJoueur.size() < nbTour)
                v_tourJoueur.push_back(v_tour[j]);
            else
                if (testTour(v_chateau[i],v_tour[j],v_tourJoueur))
                    v_tour.erase(it);
            j++;
        }
    }
}

bool Plateau::testTour(Batiment * c, Batiment * t,vector<Batiment *>v_tJ) {
    int k = 0;
    bool nonTrouve = true;
    int posT = abs((t->getPosition()[0]->getX() + t->getPosition()[0]->getY()) - (c->getPosition()[0]->getX() + c->getPosition()[0]->getY()));
    std::vector<Batiment *>::iterator it2 (v_tJ.begin());
    while(k < v_tJ.size() || nonTrouve) {
        if (posT < abs(v_tJ[k]->getPosition()[0]->getX() + v_tJ[k]->getPosition()[0]->getY())) {
            v_tJ.erase(it2);
            v_tJ.push_back(t);
            nonTrouve = false;
        }
        ++it2;
        k++;
    }
    return !(nonTrouve);
}

Plateau::~Plateau() {
    for ( int i=0; i < m_largeur; i++)
        delete [] plateau[i];
    delete [] plateau;
}
