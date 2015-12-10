#include "Goban.h"

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

// Verifie que la case est vide avant de poser une pierre
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
