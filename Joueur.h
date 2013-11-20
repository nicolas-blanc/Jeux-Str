/* 
 * File:   Joueur.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 10:39
 */

#ifndef JOUEUR_H
#define	JOUEUR_H

#include <vector>

class Joueur {
public:
    Joueur();
    virtual ~Joueur();
    
    int getModifMouvement();
    
    void deleteUnite(Unite unite);
    
    int& operator[] (unsigned int i) { return m_listeBonusJoueur[i]; };
private:
    int m_couleur;
    int m_numero;
    
    int m_PtActionJoueur;

    vector<int> m_listeBonusJoueur;
    // Vecteur des bonus pour le joueur 
        // => exemple, le 1er element correspond à un bonus de dégat
                // le 2e element correspond à un bonus de portée, etc
};

#endif	/* JOUEUR_H */

