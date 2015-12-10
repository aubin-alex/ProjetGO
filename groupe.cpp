#include "groupe.h"

using namespace std;

Groupe::Groupe(Pierre* pierre){


    groupePierre.push_back(pierre);

}


//test si une pierre est sur les libertés d'un groupe, si oui on efface la liberté
 bool Groupe::modif_liberte(Pierre adversaire){
 int x=adversaire.getX();
 int y=adversaire.getY();
 int i=0;
 bool a=false;
 while((a==false)||(i!=liste_libertes.size()))
     {
     if((x == liste_libertes[i].x) && (y==liste_libertes[i].y))
        {a=true;
       liste_libertes.erase(liste_libertes[i]);
        }
     i=i+1;
     }
     return a;
 }


//Destructeur
Groupe::~Groupe(){
//Si la pierre et ses voisins sont inexistants supprimer groupe

}
