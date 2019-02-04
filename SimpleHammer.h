/*
 * File:   SimpleHammer.h
 * Author: Grant Pennington <grp17b@my.fsu.edu>
 *
 * Created on February 3rd, 2019, 8:10 PM
 */
#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer
 * hitpoints = 25. If the armor is lessthan 30,
 * the hammerwill ignore all the armor points.
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) {
    //Calls Weapon(name, hitpoints) constructor with values Simple hammer and 25.0
    }
    virtual ~SimpleHammer() {};
    virtual double hit(double armor);

};

#endif SIMPLEHAMMER_H

