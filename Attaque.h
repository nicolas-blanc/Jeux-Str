#ifndef ATTAQUE_H
#define	ATTAQUE_H
#include<iostream>
#include<string>
using namespace std;

class Attaque {
public:
    Attaque(float degat = 0.0 , int portee = 0 , int pointaction = 0);
    void Attaquer();// a completer ...

private:
    float m_Degat;
    int m_Portee;
    int m_PointAction;
};


#endif	/* ATTAQUE_H */

