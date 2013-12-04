/*
 * File:   Joueur.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 10:39
 */

#ifndef JOUEUR_H
#define	JOUEUR_H

#include <vector>
#include <map>
#include <string>

#include "Unite.h"
#include "Batiment.h"

using namespace std;

class Unite;
class Batiment;
class Joueur {
public:
    Joueur(int couleur, int numero);
    virtual ~Joueur();
    inline int getCouleur() { return m_couleur; }
    inline int getNumero() { return m_numero; }
    inline int getPtAction() { return m_PtActionJoueur; }
    inline void setPtAction(int val) { m_PtActionJoueur = val; }
    inline void setListeBonusJoueur(int indice, int bonus){ m_listeBonusJoueur[indice] = bonus;}
    inline vector<int> getListeBonusJoueur() { return m_listeBonusJoueur; }

    inline Batiment* getBatiment(string nomBatiment) { return m_Batiment[nomBatiment].find(); };

    void deleteUnite(Unite* unite);
    void deleteBatiment(Batiment* bat);

    int& operator[] (unsigned int i) { return m_listeBonusJoueur[i]; };
private:
    int m_couleur;
    int m_numero;

    int m_PtActionJoueur;
    std::vector<int> m_listeBonusJoueur;
    // Vecteur des bonus pour le joueur
        // le 1er element correspond à un bonus de population
        // le 2e element correspond à un bonus de pointAction
        // le 3e element correspond à un bonus de pointDeVie
        // le 4e element correspond à un bonus de dégât
        // le 5e element correspond à un bonus de portée
        // le 6e element correspond à un bonus de mouvement

    map <string,Unite> m_Unite;
    map <string,Batiment> m_Batiment;
};
#include "Unite.h"
#include "Batiment.h"

#endif	/* JOUEUR_H */

