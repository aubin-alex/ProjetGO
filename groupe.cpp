#include "groupe.h"

using namespace std;

/*Groupe::Groupe(Pierre pierre){
PierreCentrale=pierre;

//Rajouter les voisins d'une pierre au groupe de cette pierre
if((PierreCentrale.x-1.col)==(PierreCentrale.col)){
    PierreCentrale.x-1.Groupe=Groupe1;
    }
}*/
 bool Groupe::modif_liberte(Pierre adversaire){
 int x=adversaire.getX();
 int y=adversaire.getY();
 int i=0;
 bool a=false;
 while((a==false)||(i!=liste_libertes.size()))
     {
     if((x == liste_libertes[i].first) && (y==liste_libertes[i].second))
        {a=true;
       liste_libertes.erase(i);
        }
     i=i+1;
     }
     return a;
 }


//Destructeur
Groupe::~Groupe(){
//Si la pierre et ses voisins sont inexistants supprimer groupe

}
