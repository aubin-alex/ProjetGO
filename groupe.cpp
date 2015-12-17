#include "groupe.h"

using namespace std;

Groupe::Groupe(Pierre* pierre, Goban plateau){


    groupePierre.push_back(pierre);
    couleur = pierre->getColor();
    liste_libertes = pierre.test_liberte(plateau);


}


//test si une pierre est sur les libertés d'un groupe, si oui on efface la liberté, et si le groupe n'a alors plus de liberté on le supprime
 bool Groupe::modif_liberte(Pierre pierre){
    int x=pierre.getX();
    int y=pierre.getY();
    int i=0;

    bool a=false;

    while((a==false)||(i!=liste_libertes.size())){
        if((x == liste_libertes[i].x) && (y==liste_libertes[i].y)){
            a=true;
            liste_libertes.erase(liste_libertes[i]);
        }
        i=i+1;
     }

     return a;
     if (liste_libertes.size()==0)
    {
        ~Groupe();
    }
 }


//Destructeur
Groupe::~Groupe(){
//Si la pierre et ses voisins sont inexistants supprimer groupe

}
