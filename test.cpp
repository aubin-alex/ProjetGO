#include"joueur.h"
#include"pierre.h"
#include"groupe.h"
#include"Goban.h"
#include"gtest.h"
#include"pierreTest.h"

//using namespace std;


//Test pour vérifier si le goban est vide
TEST_F(GobanTest, GobanVide){

    for (int i=0;i<TAILLE+1;i++){
       for (int j=0;j<TAILLE+1;j++){
           EXPECT_EQ(' ',plateauVide.jeu[i][j]);
        }
    }


}

TEST_F(PierreTest,couleur){
    EXPECT_EQ('N',stone->getColor());
}

TEST_F(GobanTest,caseVide){
    EXPECT_TRUE(plateau.posepossible(1,5));
    EXPECT_TRUE(plateau.posepossible(2,3)); //erreur volontaire
}

TEST_F(GobanTest2, AppartenanceGroupe){            // Le test ne fonctionne pas (segmentation fault)
                                                   // met en évidence une erreur dans la fonction appartientGroupe
    EXPECT_EQ(2,plateau.liste_groupe.size());

}



