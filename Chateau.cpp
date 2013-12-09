
Chateau::Chateau(vector<Case> ensCase, Joueur j, string nom, int vieMin, int vieMax)
	:Batiment(ensCase, j, nom, vieMin, vieMax);
{}

Chateau::invoque(int unit, Case c){

	switch (unit) {
		case 1:{
			new arch(c);
			*(this.getJoueur())->addUnit(arch);
			break;
		}
		case 2:{
			new che(c);
			*(this.getJoueur())->addUnit(che);
			break;
		}
		case 3:{
			new gue(c);
			*(this.getJoueur())->addUnit(gue);
			break;
		}
	}
}

