
/*
 * File:   SimpleHammer.h
 * Author: Grant Pennington <grp17b@my.fsu.edu>
 *
 * Created on February 3rd, 2019, 8:10 PM
 */
#include <string>
#include "Weapon.h"

#ifndef SHARPSCYTHE_H
#define SHARPSCYTHE_H

/**
 * Defines the behavior of a sharp scythe
 * hitpoints = 55. If the armor is divsible by two
 * the scythe ignore roughly half the armor points.
 */
class SharpScythe : public Weapon {
public:

    SharpScythe() : Weapon("Sharps scythe", 55.0) {
    //Calls Weapon(name, hitpoints) constructor with values sharp scythe  and 55.0
    }
    virtual ~SharpScythe() {};
    virtual double hit(double armor);

};

#endif SHARPSCYTHE_H

