#ifndef JOUEUR_H
#define	JOUEUR_H

#include <vector>
#include <map>
#include <string>
#include "Batiment.h"

using namespace std;
class Joueur {
public :
    Joueur(int couleur, int numero);
    virtual ~Joueur();
    inline int getCouleur() { return m_couleur; }
    inline int getNumero() { return m_numero; }
    inline int getPtAction() { return m_PtActionJoueur; }
    inline void setPtAction(int val)
    {
        m_PtActionJoueur = val;
    }
    inline void setListeBonusJoueur(int indice, int bonus)
    {
        m_listeBonusJoueur[indice] = bonus;
    }
    inline void setBatiment(Batiment * batiment) 
    {
        v_Batiment[batiment->Getnom()] = batiment;
    }
    inline void setUnite(Unite* unt) 
    {
        v_Unite[*unt->Getnom()] = *unt;
    }
    inline vector<int> getListeBonusJoueur() 
    {
        return m_listeBonusJoueur;
    }

    inline Batiment* getBatiment(string nomBatiment) 
    {
        return v_Batiment[nomBatiment];
    }

    
    inline void deleteBatiment(Batiment* bat) 
    {
        v_Batiment.erase(bat->Getnom());
    }
    inline void deleteUnite(Unite* unt) 
    {
        v_Unite.erase(*unt->Getnom());
    }
    int& operator[] (unsigned int i) {return m_listeBonusJoueur[i];};
private :
    int m_couleur;
    int m_numero;
    map<string, * Unite> v_Unite;
    map<string, * Batiment> v_Batiment;
    int m_PtActionJoueur;
    vector<int> m_listeBonusJoueur;
    // Vecteur des bonus pour le joueur
        // le 1er element correspond à un bonus de population
        // le 2e element correspond à un bonus de pointAction
        // le 3e element correspond à un bonus de pointDeVie
        // le 4e element correspond à un bonus de dégât
        // le 5e element correspond à un bonus de portée
        // le 6e element correspond à un bonus de mouvement


};
#include "Batiment.h"
#include"Unite.h"

#endif	/* JOUEUR_H */

