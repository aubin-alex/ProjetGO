#include "Goban.h"

Goban::Goban(){

    for (int j=0;j<TAILLE+1;j++){
        for (int i=0;i<TAILLE+1;i++){
            jeu[i][j]=' ';
        }
    }
}

void Goban::affiche(){

   for (int x=0;x<TAILLE+1;x++){
        for (int y=0;y<TAILLE+1;y++){
            cout << jeu[x][y]<<'|';
        }
        cout<<endl;
    }
}


Goban::~Goban(){
}
