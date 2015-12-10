#include"pierre.h"

using namespace std;

Pierre::Pierre(int _x, int _y, char col){
    x=_x;
    y=_y;
    couleur=col;
}

void misegroupe(Goban.liste_groupe groupes){

    for (int i=0;i<groupes.size();i++){
        if (groupes[i].modif_liberte(Pierre)){
            groupes[i].groupePierres.push_back();

        }
    }

}

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

