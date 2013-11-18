#ifndef ENTITE_H
#define ENTITE_H


class Entite
{
    public:
        Entite();
        virtual ~Entite();
        string Getnom() { return m_nom; }
        void Setnom(string val) { m_nom = val; }
    protected:
    private:
        string m_nom;
};

#endif // ENTITE_H
