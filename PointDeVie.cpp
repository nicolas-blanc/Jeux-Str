#include "PointDeVie.h"

PointDeVie::PointDeVie(unsigned int mini, unsigned int maxi)
{
    this->SetMin(mini);
    this->SetMax(maxi);
    this->SetValeur(maxi);
}

void PointDeVie::modifVie(int val) {
    if ((this->GetValeur() + val) > this->GetMax())
        this->SetValeur(this->GetMax());
    else if ((this->GetValeur() + val) < this->GetMin())
        this->SetValeur(this->GetMin());
    else
        this->SetValeur(this->GetValeur() + val);
}
