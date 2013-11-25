/* 
 * File:   Effet.h
 * Author: duclotw
 *
 * Created on 4 novembre 2013, 12:31
 */

#ifndef EFFET_H
#define	EFFET_H

class Sort;
class Effet {
    private :
        int nbTour;
        Sort* m_sort;
    public :
        Effet(Sort sort, int tour);
        void decreaseTour();
        inline Sort* getSort(){return m_sort;};
};
#include "Sort.h"

#endif	/* EFFET_H */

