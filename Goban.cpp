#include "Goban.h"
#include "groupe.h"

// Création du tableau de jeu dans le costructeur
Goban::Goban(){

    for (int j=0;j<TAILLE+1;j++){
        for (int i=0;i<TAILLE+1;i++){
            jeu[i][j]=' ';
        }
    }
}

// Affichage du tableau de jeu
void Goban::affiche(){

   for (int x=0;x<TAILLE+1;x++){
        for (int y=0;y<TAILLE+1;y++){
            cout << jeu[x][y]<<'|';
        }
        cout<<endl;
    }
}

// Verifie que la case est vide avant de poser une pierremodif_liberte
bool Goban::posepossible(int x, int y){
    if (jeu[x][y]==' '){
        return true;
    }
    else {
        return false;
    }
}



Goban::~Goban(){
}

void Goban::appartientGroupe(Pierre* pierre){

    bool appartient;
    int memoire;
    int nb=0;
    char col = pierre->getColor();
    //On parocurt la liste des groupes existants sur le plateau
    for (int i=0 ; i<liste_groupe.size() ; i++){
        //On regarde la couleur de la pierre pour l'ajouter à un groupe de la même couleur
        if (col==liste_groupe[i].getColor()){
        //La pierre qu'on ajoute peut appartenir à plusieurs groupes
        //On va donc tester chaque groupe un par un, on ajoute la pierre au premier groupe trouvé dont les libertés contiennent les coordonnées de notre pierre
            if (nb=0){
                appartient=liste_groupe[i].modif_libertes(*pierre);
                liste_groupe[i].groupePierres.push_back(pierre);
                nb+=1;
                memoire=i;
            }
            else{
                //Si la pierre appartient à un deuxième groupe, on fusionne le deuxième groupe avec le premier
                liste_groupe[memoire].groupePierres.insert(liste_groupe[memoire].groupePierres.end(), liste_groupe[i].groupePierres.begin(), liste_groupe[i].groupePierres.end());
                //et on efface le deuxième groupe
                liste_groupe.erase(liste_groupe.begin()+i);
                liste_groupe[i].~Groupe();
                i=i-1;
            }
        }
    }
}

// Vecteur renvoyant les coordonnées des libertés d'une pierre si elle existe
vector<Coordonees> Goban::test_liberte(Pierre* pierre){
    vector<Coordonees> VecLibertes;
    if (jeu[pierre->getX()-1][pierre->getY()]==' '){
        VecLibertes.push_back(Coordonees(pierre->getX()-1,pierre->getY()));
    }
    if (jeu[pierre->getX()+1][pierre->getY()]==' '){
        VecLibertes.push_back(Coordonees(pierre->getX()+1,pierre->getY()));
    }
    if (jeu[pierre->getX()][pierre->getY()-1]==' '){
        VecLibertes.push_back(Coordonees(pierre->getX(),pierre->getY()-1));
    }
     if (jeu[pierre->getX()][pierre->getY()+1]==' '){
        VecLibertes.push_back(Coordonees(pierre->getX(),pierre->getY()+1));
    }

    return VecLibertes;
};

