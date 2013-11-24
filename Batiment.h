/* 
 * File:   Batiment.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 10:32
 */

#ifndef BATIMENT_H
#define	BATIMENT_H


class Batiment : public Entite {
public:
    Batiment(Vector<case> ensCase, Joueur j, string nom);
    Batiment(const Batiment& orig);
    virtual ~Batiment();
private:

};

#endif	/* BATIMENT_H */

