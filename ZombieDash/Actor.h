#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp

class StudentWorld;

    // Actor class
class Actor: public GraphObject{
public:
    Actor(int imageID, double startX, double startY, Direction dir = right, int depth = 0)
    :GraphObject(imageID, startX, startY, dir, depth)
    {}
    
    virtual ~Actor(){};
    virtual void doSomething() = 0;
    
    
    
//    virtual bool isLiving() = 0;
};

// Wall class
class Wall: public Actor{
public:
    Wall(double startX, double startY)
    :Actor(IID_WALL, startX, startY) {}
    virtual void doSomething(){}
};

    // Penelope class
class Penelope: public Actor{
public:
    Penelope(double startX, double startY, StudentWorld* w)
    :Actor(IID_PLAYER, startX, startY)
    {
        m_isAlive = true;
        m_isInfected = false;
        m_nLandmines = m_nFlames = m_nVaccines = 0;
        m_world = w;
    }
    virtual void doSomething();
    
private:
    bool m_isAlive;
    bool m_isInfected;
    int m_nLandmines;
    int m_nFlames;
    int m_nVaccines;
    
    StudentWorld* m_world;
};


#endif // ACTOR_H_
