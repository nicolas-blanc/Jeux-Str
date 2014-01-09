#ifndef EFFET_H
#define	EFFET_H

#include "Sort.h"

class Effet {
    private :
        int nbTour;
//        Sort* m_sort;
    public :
        Effet(/*Sort sort,*/ int tour);
        void decreaseTour();
//        inline Sort* getSort(){return m_sort;};
};

#endif	/* EFFET_H */

