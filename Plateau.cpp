#include "Plateau.h"
#include "Batiment.h"
#include "Tour.h"
#include "Chateau.h"
#include "enumerations.h"
#include <iostream>
#include <fstream>
#include <cstdlib>



Plateau::Plateau(string nomPlateau) : v_Batiment() {
    int nbrChateau = 0;

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
        int x,y,taille;
        catBatiments type;
            fichierPlateau.read((char*)&type, sizeof(catBatiments));
            fichierPlateau.read((char*)&taille, sizeof(int));
            fichierPlateau.read((char*)&x, sizeof(int));
            fichierPlateau.read((char*)&y, sizeof(int));
            vector<Case *> cases;
            for (int i=0; i<taille; i++) {
                for (int j=0; j<taille; j++)
                    cases.push_back(plateau[x+j][y+i]);
            }

            Batiment* bat;

            for (int i=0; i<taille; i++) {
                for (int j=0; j<taille; j++) {
                    switch (type) {
                        case chateau : {
                            bat = new Chateau(cases,"Chateau");
                            /*if (joueurs.size < nbrChateau)
                                joueurs[nbrChateau]->lierChateau(bat);
                            nbrChateau++;*/
                            plateau[x+i][y+j]->setOccupant(bat);
                            break;
                        }
                        case tour : {
                            bat = new Tour(cases,"Tour");
                            plateau[x+i][y+j]->setOccupant(bat);
                            break;
                        }
                    }
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

Plateau::~Plateau() {
    for ( int i=0; i < m_largeur; i++)
        delete [] plateau[i];
    delete [] plateau;
}
