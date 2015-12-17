#include"pierre.h"

using namespace std;

Pierre::Pierre(int _x, int _y, char col){
    x=_x;
    y=_y;
    couleur=col;
}


<<<<<<< HEAD
=======
// Vecteur renvoyant les coordonnées des libertés d'une pierre si elle existe
vector<Coordonees> Pierre::test_liberte(Goban plateau){
    vector<Coordonees> VecLibertes;

    if(getX()-1>=0){
        if (plateau.jeu[getX()-1][getY()]==' '){
            VecLibertes.push_back(Coordonees(getX()-1,getY()));
        }
    }

    if(getX()+1<TAILLE){
        if (plateau.jeu[getX()+1][getY()]==' '){
            VecLibertes.push_back(Coordonees(getX()+1,getY()));
        }
    }

    if(getY()-1>=0){
        if (plateau.jeu[getX()][getY()-1]==' '){
            VecLibertes.push_back(Coordonees(getX(),getY()-1));
        }
    }
    if(getY()+1<TAILLE){
        if (plateau.jeu[getX()][getY()+1]==' '){
            VecLibertes.push_back(Coordonees(getX(),getY()+1));
        }
    }

    return VecLibertes;
};


>>>>>>> 4ec04791a00d1cb2fd450687c63fb0b55c112152

Pierre::~Pierre(){
    //do nothing
}

