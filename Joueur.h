#ifndef JOUEUR_H
#define	JOUEUR_H

#include <vector>
#include <map>
#include <string>

#include "ListeException.h"

using namespace std;

class Entite;
class Unite;
class Batiment;

class Joueur {
public :
    Joueur(int couleur, int numero);
    virtual ~Joueur();
    inline int getCouleur() { return m_couleur; }
    inline int getNumero() { return m_numero; }
    inline int getPtAction() { return m_PtActionJoueur; }
    inline int getPopulation() { return m_Population; }
    inline int getPtActionMax() { return m_PtActionMax + m_listeBonusJoueur[1]; }
    inline int getPopMax() { return m_PopMax + m_listeBonusJoueur[0]; }
    inline vector<int> getListeBonusJoueur() { return m_listeBonusJoueur; }
    inline int getListeBonusJoueur(int val) { return m_listeBonusJoueur[val]; }
    inline Batiment* getBatiment(string nomBatiment) { return v_Batiment[nomBatiment]; }

    inline void setPtAction(int val) { if (val < getPtActionMax() || val > 0) m_PtActionJoueur = val; else { PtAction ex; throw ex; } }
    inline void setListeBonusJoueur(int indice, int bonus) { m_listeBonusJoueur[indice] = bonus; }
    inline void setPopulation(int val) { if (val < getPopMax() || val > 0) m_Population = val; else { Population ex; throw ex; } }
    void setBatiment(Batiment * batiment);
    void setUnite(Unite * unite);

    void deleteBatiment(Batiment* bat);
    void deleteUnite(Unite * unite);

    int& operator[] (unsigned int i) {return m_listeBonusJoueur[i];};
    bool operator== (Joueur j) {return m_numero==j.getNumero();};
private :
    int m_couleur;
    int m_numero;
    map<string, Unite * > v_Unite;
    map<string, Batiment* > v_Batiment;
    int m_PtActionMax;
    int m_PtActionJoueur;
    int m_PopMax;
    int m_Population;
    vector<int> m_listeBonusJoueur;
    // Vecteur des bonus pour le joueur
        // le 1er element correspond à un bonus de population
        // le 2e element correspond à un bonus de pointAction
        // le 3e element correcspond à un bonus de pointDeVie
        // le 4e element correspond à un bonus de dégât
        // le 5e element correspond à un bonus de portée
        // le 6e element correspond à un bonus de mouvement


};

#include "Entite.h"
#include "Unite.h"
#include "Batiment.h"

#endif	/* JOUEUR_H */

