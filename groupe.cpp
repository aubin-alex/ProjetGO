#include "groupe.h"

using namespace std;

Groupe::Groupe(Pierre* pierre){


    groupePierres.push_back(pierre);
    couleur = pierre->getColor();
    //liste_libertes = pierre.test_liberte(plateau);

}


//test si une pierre est sur les libertés d'un groupe, si oui on efface la liberté, et si le groupe n'a alors plus de liberté on le supprime
 bool Groupe::modif_libertes(Pierre pierre){
    //On récupère les coordonnées de la pierre
    int x=pierre.getX();
    int y=pierre.getY();
    int i=0;

    bool a=false;

    while((a==false)||(i!=liste_libertes.size())){
        //Dès qu'on trouve une liberté dans la liste correspondant aux coorodonnées de la pierre
        if((x == liste_libertes[i].x) && (y==liste_libertes[i].y)){
            a=true;
            //On efface la liberté
            liste_libertes.erase(liste_libertes.begin()+i);
        }
        i=i+1;
     }

     return a;
     if (liste_libertes.size()==0)
    {
        //Quand le groupe n'a plus de libertés, on le supprime
        this->~Groupe();
    }
 }


//Destructeur
Groupe::~Groupe(){
//Si la pierre et ses voisins sont inexistants supprimer groupe

}
