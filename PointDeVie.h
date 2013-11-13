#ifndef POINTDEVIE_H
#define POINTDEVIE_H


class PointDeVie
{
    public:
        PointDeVie(unsigned int mini, unsigned int maxi);
        virtual ~PointDeVie();
        inline int GetMin() { return m_Min; }
        inline void SetMin(int val) { if (val >= 0) m_Min = val; /*else exception*/ }
        inline int GetMax() { return m_Max; }
        inline void SetMax(int val) { if (val >= 0) m_Max = val; /*else exception*/ }
        inline int GetValeur() { return m_Valeur; }
        inline void SetValeur(int val) { if (val >= this->GetMin() && val <= this->GetMax()) m_Valeur = val; /*else exception*/}

        void modifVie(int val);
    protected:
    private:
        unsigned int m_Min;
        unsigned int m_Max;
        unsigned int m_Valeur;
};

#endif // POINTDEVIE_H
