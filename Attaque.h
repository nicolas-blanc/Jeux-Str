#ifndef ATTAQUE_H
#define	ATTAQUE_H

#include<iostream>
#include<string>

using namespace std;

class Attaque {
public:
    Attaque(int portee, int degat = 1, int ptAction = 1);
    void Attaquer();// a completer ...

private:
    int m_Degat;
    int m_Portee;
    int m_PtAction;
};

#endif	/* ATTAQUE_H */

