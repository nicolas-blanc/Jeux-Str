/* 
 * File:   Joueur.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 10:39
 */

#ifndef JOUEUR_H
#define	JOUEUR_H

#include <vector>

class Unite;
class Batiment;
class Joueur {
public:
    Joueur();
    virtual ~Joueur();
        
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
};
#include "Unite.h"
#include "Batiment.h"

#endif	/* JOUEUR_H */

