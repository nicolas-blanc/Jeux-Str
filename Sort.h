#ifndef SORT_H
#define	SORT_H

#include"Attaque.h"

class Sort : public Attaque {
public:
    Sort(int degat = 1, int portee = 1, int ptAction = 1);
    void lancerAttaque(Case c);

private:

};


#endif	/* SORT_H */

