#ifndef PLATEAU_H
#define PLATEAU_H
#include <iostream>
#include <string>
#include "Case.h"
#include "Unite.h"

using namespace std;

class Plateau {
private :
        int m_largeur;
        int m_longueur;
        Case*** plateau;

public :
        Plateau(string nomFichier="plateau1.data");
        void setPlateau();
        ~Plateau();
};

#endif
