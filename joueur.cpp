#include"joueur.h"
#include "Goban.h"
//rajouter le fichier include du plateau
//#include""

using namespace std;

Joueur::~Joueur(){
    //do nothing
}

Joueur::Joueur(char col){
    couleur=col;
    score=0;
}

Pierre* Joueur::jouer(){

    Pierre* jouee;
    int x,y;
    cout << "Choix de la position :" << endl;
    cout << "Colonne ? ";
    cin >> y;
    while (y<0 || y>TAILLE){
        cout << "Erreur, non valide !!" << endl;
        cout << "Colonne ? ";
        cin >> y;
    }
    cout << "Ligne ? ";
    cin >> x;
    while (x<0 || x>TAILLE){
        cout << "Erreur, non valide !!" << endl;
        cout << "Colonne ? ";
        cin >> x;
    }

    jouee = new Pierre(x,y,getCouleur());
    return jouee;




}
