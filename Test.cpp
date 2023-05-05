#include "doctest.h"
#include "sources/Team.hpp"



using namespace std;
using namespace ariel;

TEST_CASE("Checking the constructors"){
    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    CHECK_EQ(p1.getX(), 1.0);
    CHECK_EQ(p2.getX(), 3.0);
    CHECK_EQ(p1.getY(), 2.0);
    CHECK_EQ(p2.getY(), 4.0);
    Cowboy *tom = new Cowboy("Tom", p1);
    OldNinja *sushi = new OldNinja("sushi", p2);
    TrainedNinja *titi = new TrainedNinja("Titi", p1);
    YoungNinja *yogi = new YoungNinja("Yogi", p2);
    CHECK(tom->getName() == "Tom");
    CHECK(sushi->getName() == "sushi");
    CHECK(titi->getName() == "Titi");
    CHECK(yogi->getName() == "Yogi");
    
}

TEST_CASE("Checking the distance between two positions"){
    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    CHECK(p1.distance(p2) == 2.828427);
    CHECK_EQ(p1.distance(p2), p2.distance(p1));

    Point p3(1.0, 2.0);
    Point p4(1.0, 2.0);
    CHECK(p3.distance(p4) == 0);
    CHECK_EQ(p3.distance(p4), p4.distance(p3));

    Point p5(0, 0);
    Point p6(3, 0);
    CHECK(p5.distance(p6) == 3);
    CHECK_EQ(p5.distance(p6), p6.distance(p5));

}

TEST_CASE("Checking if the character is alive"){

    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    OldNinja sushi("sushi", p2);
    TrainedNinja titi("Titi", p1);
    YoungNinja yogi("Yogi", p2);
    CHECK(sushi.isAlive());
    CHECK(titi.isAlive());
    CHECK(yogi.isAlive());
    sushi.hit(150);
    CHECK_FALSE(sushi.isAlive());
    titi.hit(120);
    CHECK_FALSE(titi.isAlive());
    yogi.hit(50);
    CHECK(yogi.isAlive());
    yogi.hit(50);
    CHECK_FALSE(yogi.isAlive());
    Cowboy tom("Tom", p1);
    tom.hit(110);
    CHECK_FALSE(tom.isAlive());


}




