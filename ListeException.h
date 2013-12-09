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

#endif // LISTEEXCEPTION_H
