//
//  Penelope.h
//  ZombieDash
//
//  Created by christopher kha on 2/15/19.
//  Copyright © 2019 David Smallberg. All rights reserved.
//

#ifndef Penelope_h
#define Penelope_h

#include <stdio.h>
#include "Actor.h"

class Penelope: public Actor{
public:
    Penelope(int startX, int startY)
        :Actor(IID_PLAYER, startX, startY, 1, 0, 1.0)
    {}
    
    virtual ~Penelope();
    virtual void doSomething();
};

#endif /* Penelope_h */
