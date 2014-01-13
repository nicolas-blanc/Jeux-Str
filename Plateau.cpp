#include "Plateau.h"
#include "Batiment.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

Plateau::Plateau(string nomPlateau) {
    ifstream fichierPlateau;
    fichierPlateau.open(nomPlateau.c_str(), ios::in | ios::binary);
    fichierPlateau.read((char*)&m_longeur,sizeof(int));
    fichierPlateau.read((char*)&m_largeur,sizeof(int));

    //-----initialisation du plateau (tableau de Case à 2 dimensions)
    plateau = new Case**[m_largeur];
    for (int i=0 ; i < m_largeur ; i++)
        plateau[i] = new Case*[m_longeur];


    for (int i=0; i< m_largeur; i++) {
        for (int j=0; j<m_longeur; j++) {
            plateau[i][j] = new Case(i,j);
        }
    }

    /*lecture du fichier pour ajouter tous les batiments sur le plateau
    tant que fichier pas fini {
     //   int x,y;
    //    int type=0;
            //fichierPlateau.read((char*)&type, sizeof(int));
          //  fichierPlateau.read((char*)&x, sizeof(int));
        //    fichierPlateau.read((char*)&y, sizeof(int));
      //      plateau[x][y].
    //}

}*/
}

void Plateau::setPlateau() {
    cout << "";
}

Plateau::~Plateau() {
    for ( int i=0; i < m_largeur; i++)
        delete [] plateau[i];
    delete [] plateau;
}
