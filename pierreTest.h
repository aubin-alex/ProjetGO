#ifndef PIERRETEST_H_INCLUDED
#define PIERRETEST_H_INCLUDED

// classe test pierre
class PierreTest : public :: testing::Test{


protected:
    virtual void SetUp(){
        Goban plateau;
        stone = new Pierre(2,4,'N');
        stone2=new Pierre(5,5,'B');
        stone3=new Pierre(5,4,'B');
    }
    virtual void TearDown(){}

    Pierre* stone;
    Pierre* stone2;
    Pierre* stone3;

};


#endif // PIERRETEST_H_INCLUDED
