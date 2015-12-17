#include"pierre.h"

using namespace std;

Pierre::Pierre(int _x, int _y, char col){
    //on prend en mémoire la ligne sur laquelle est posée la pierre
    x=_x;
    //on prend en mémoire la colonne sur laquelle est posée la pierre
    y=_y;
    //on prend en mémoire la couleur de la pierre
    couleur=col;//
}

Pierre::~Pierre(){
    //do nothing
}

