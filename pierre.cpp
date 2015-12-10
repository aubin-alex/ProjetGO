#include"pierre.h"

using namespace std;

Pierre::Pierre(int _x, int _y, char col){
    x=_x;
    y=_y;
    couleur=col;
}

// on teste chaque groupe de la même couleur, si la pierre
// est dans la liberté d'un groupe on l'a met dedans, et on supprime la liberté
//et on ajoute les nouvelles libertés.
//On devrait aussi gérer la fusion des groupes.
void Pierre::misegroupe(vector< Groupe > groupes){

    for (int i=0;i<groupes.size();i++){
        if (groupes[i].modif_liberte(Pierre)){
            groupes[i].groupePierres.push_back();

        }
    }

}

// Vecteur renvoyant les coordonnées des libertés d'une pierre si elle existe
vector<Coordonees> test_liberte(Goban plateau){
    vector<Coordonees> VecLibertes;
    if (plateau.jeu[getX()-1][getY()]==' '){
        VecLibertes.push_back(Coordonees(getX()-1,getY()));
    }
    if (plateau.jeu[getX()+1][getY()]==' '){
        VecLibertes.push_back(Coordonees(getX()+1,getY()));
    }
    if (plateau.jeu[getX()][getY()-1]==' '){
        VecLibertes.push_back(Coordonees(getX(),getY()-1));
    }
     if (plateau.jeu[getX()][getY()+1]==' '){
        VecLibertes.push_back(Coordonees(getX(),getY()+1));
    }

    return VecLibertes;
};



Pierre::~Pierre(){
    //do nothing
}

