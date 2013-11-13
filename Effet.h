/* 
 * File:   Effet.h
 * Author: duclotw
 *
 * Created on 4 novembre 2013, 12:31
 */

#ifndef EFFET_H
#define	EFFET_H
#include "Sort.h"

class Effet : public Sort {
    private :
        int nbTour;
        
    public :
        Effet(Sort sort, int tour);
        void decreaseTour();
};

#endif	/* EFFET_H */

