//Classe du plateau de go



#ifndef Goban__h
#define Goban__h

#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

const int TAILLE=5;

class Goban{

private:
    vector<vector<char> > jeu; //Vecteur des cases

public:
    Goban(); //Crée le plateau vide
    ~Goban(); //Destructeur
    void affiche(); //fonction affichage
    void updateCase(); //Mise à jour plateau

};
#endif
