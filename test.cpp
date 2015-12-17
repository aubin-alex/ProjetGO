#include"joueur.h"
#include"pierre.h"
#include"groupe.h"
#include"Goban.h"
#include"gtest.h"

//using namespace std;


//Test pour vérifier si le goban est vide
TEST_F(GobanTest, GobanVide){

    for (int i=0;i<TAILLE+1;i++){
       for (int j=0;j<TAILLE+1;j++){
           EXPECT_EQ(' ',plateauVide.jeu[i][j]);
        }
    }


}

/*TEST_F(PierreTest,couleur){
    EXPECT_EQ('N',stone->getColor());
}

TEST_F(GobanTest,caseVide){
    EXPECT_TRUE(plateau.posepossible(1,5));
    EXPECT_TRUE(plateau.posepossible(2,3)); //erreur volontaire
}

TEST_F(PierreTest,testDeLibertes){
    EXPECT_EQ(NULL, stone->test_liberte(plateau));
    EXPECT_EQ(vector<pair<2,3> >,stone2->test_liberte(plateau));
}*/


