#include "BatimentBonusStat.h"

BatimentBonusStat::BatimentBonusStat(vector<Case> ensCase, Joueur j, string nom, int stat, int vie) : Batiment(ensCase, &j, nom, vie)
 {
     setStat(stat);
     setBonus(0);
     setNbTours(0);
     srand (time(NULL)); 
 }

 void BatimentBonusStat::modifBonus()
 // Modifie le bonus dans le vector de joueur, en fonction du bonus et du nombre de tours
 {

     setNbTours(getNbTours()+1);


     switch(getStat())
     {
         case 0:
             //ecrire algo ex: setBonus(m_Bonus+m_NbTours/5);
             break;
         case 1:
             //algo
             break;
             //...
         default:
             //
             break;
     }

      miseAJourBonus();
 }

 void BatimentBonusStat::randomBonus()
 {
     //setBonus();
     miseAJourBonus();
 }
 void BatimentBonusStat::randomStat()
 {
     setStat(rand_a_b(0, 7));
 }

 void BatimentBonusStat::changementProprio(Joueur j)
 {
     Entite::setJoueur(&j);
     randomBonus();
     if(getStat()>1)
     randomStat();
     setNbTours(0);
 }

void BatimentBonusStat::miseAJourBonus() {
    //getJoueur().m_listeBonusJoueur[getStat()] = getBonus(); <= marche pas
}