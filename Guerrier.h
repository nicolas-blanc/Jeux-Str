/* 
 * File:   Guerrier.h
 * Author: blancn
 *
 * Created on 19 novembre 2013, 11:11
 */

#ifndef GUERRIER_H
#define	GUERRIER_H

using namespace std;

class Guerrier : public Unite {
public:
    Guerrier(unsigned int mvt = 5, unsigned int ct = 2, unsigned int pop = 1, int vie = 5, int min = 0);
    virtual ~Guerrier();
private:

};

#endif	/* GUERRIER_H */

