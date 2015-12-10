//Classe du plateau de go



#ifndef Goban__h
#define Goban__h

#include <vector>
#include <iostream>
#include <cstdlib>
#include"gtest.h"
#include"pierre.h"

using namespace std;

const int TAILLE=5;

class Goban{

private:
     //Vecteur des cases

public:
    char jeu[TAILLE][TAILLE];
    vector< Groupe > liste_groupe;
    Goban(); //Crée le plateau vide
    ~Goban(); //Destructeur
    void affiche(); //fonction affichage
    void updateCase(); //Mise à jour plateau
    bool posepossible(int x, int y);
};


// classe test goban
class GobanTest : public ::testing::Test{
protected:
    virtual void SetUp(){
        plateau.jeu[2][3]='N';
    }

    virtual void TearDown(){

    }

    bool vraie (){
        return true;
    }

    Goban plateau;
    Goban plateauVide;
    };
#endif
