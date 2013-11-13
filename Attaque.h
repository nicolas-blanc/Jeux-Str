#ifndef ATTAQUE_H
#define	ATTAQUE_H
#include<iostream>
#include<string>
using namespace std;

class Attaque {
public:
    Attaque(int degat = 0 , int portee = 0 , int ptAction = 0);
    void Attaquer();// a completer ...

private:
    float m_Degat;
    int m_Portee;
    int m_PointAction;
};


// bouh !!
#endif	/* ATTAQUE_H */

