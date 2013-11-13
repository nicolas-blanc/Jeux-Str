#include "Plateau.h"
#include "Batiment.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

Plateau::Plateau(string nomPlateau) {
    ifstream fichierPlateau;
    fichierPlateau.open(nomPlateau.c_str(), ios::in | ios::binary);
    fichierPlateau.read((char*)&m_longueur,sizeof(int));
    fichierPlateau.read((char*)&m_largeur,sizeof(int));
    
    //-----initialisation du plateau (tableau de pointeur vers Case à 2 dimensions)
    plateau = new CaseGen**[m_largeur];
    for (int i=0 ; i < m_largeur ; i++) 
        plateau[i] = new CaseGen*[m_longueur];
    
    //-----initialisation de chaque case comme Case pour unité
    for (int i=0; i< m_largeur; i++) {
        for (int j=0; j<m_longueur; j++) {
            plateau[i][j] = (Case<Unite>*)malloc(sizeof(Case<Unite>));
            //plateau[i][j] = new Case<Unite>(i,j);
        }
    }
        
    /*tant que fichier pas fini*/ {
        int x,y;
        int type=0;
            fichierPlateau.read((char*)&type, sizeof(int));
            fichierPlateau.read((char*)&x, sizeof(int));
            fichierPlateau.read((char*)&y, sizeof(int));
            plateau[x][y] = (Case<Batiment>*)realloc(plateau[x][y], sizeof(Case<Batiment>));
            //plateau[x][y] = new Case<Batiment>(x,y);
            //plateau[x][y]->setOccupant(new Batiment(type));
    }
}

void Plateau::setPlateau() {
    cout << "";
}

Plateau::~Plateau() {
    for ( int i=0; i < m_largeur; i++) 
        delete plateau[i]; 
    delete plateau;
}