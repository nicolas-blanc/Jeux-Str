#ifndef LISTEEXCEPTION_H
#define LISTEEXCEPTION_H

#include <exception>

using namespace std;

class ListeException : public exception
{
public:
    ListeException() {}
    const char * what() const throw () { return "Exception"; }
};

class FinDeJeu : public ListeException
{
public:
    FinDeJeu() {}
};

class ManquePtAction : public ListeException
{
public:
    ManquePtAction() {}
    const char * what() const throw () { return "Le joueur n'a pas assez de ptAction"; }
};

class ManquePortee : public ListeException
{
public:
    ManquePortee() {}
    const char * what() const throw () { return "L'unite n'a pas assez de Portee"; }
};
#endif // LISTEEXCEPTION_H
