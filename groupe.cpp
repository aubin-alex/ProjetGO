#include "groupe.h"

using namespace std;

Groupe::Groupe(Pierre* pierre){


    groupePierres.push_back(pierre);
    couleur = pierre->getColor();
    //Il manque la création des libertés

}


//test si une pierre est sur les libertés d'un groupe, si oui on efface la liberté, et si le groupe n'a alors plus de liberté on le supprime
 bool Groupe::modif_libertes(Pierre pierre){
    //On récupère les coordonnées de la pierre
    int x=pierre.getX();
    int y=pierre.getY();
    //itérateur qui va parcourir la liste des libertés du groupe
    int i=0;
    //booleen qui vaut faux si la pierre n'est pas à la place d'une liberté du groupe et vrai sinon
    bool a=false;

    //tant qu'on a pas trouvé de liberté à la place de la pierre et qu'on a pas parcouru toute la liste des libertés
    while((a==false)||(i!=liste_libertes.size())){
        //Dès qu'on trouve une liberté dans la liste correspondant aux coordonnées de la pierre
        if((x == liste_libertes[i].x) && (y==liste_libertes[i].y)){
            a=true;
            //On efface la liberté
            liste_libertes.erase(liste_libertes.begin()+i);
        }
        i=i+1;
     }
    //on renvoie le booleen
     return a;
     if (liste_libertes.size()==0)
    {
        //Quand le groupe n'a plus de libertés, on le supprime
        this->~Groupe();
    }
 }


//Destructeur
Groupe::~Groupe(){
//Si la pierre et ses voisins sont inexistants supprimer groupe, on utilise le destructeur dans goban dans appartientGroupe

}
