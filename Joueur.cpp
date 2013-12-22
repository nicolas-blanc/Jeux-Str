#include "Joueur.h"

Joueur::Joueur(int couleur, int numero) {
    m_couleur = couleur;
    m_numero = numero;

    for (int i = 0; i < 6; i++)
        m_listeBonusJoueur[i] = 0;

    setPtAction(0);
}

Joueur::~Joueur() {
}

