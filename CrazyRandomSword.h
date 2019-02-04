/*
 * File:   CrazyRandomSword.h
 * Author: Grant Pennington <grp17b@my.fsu.edu>
 *
 * Created on February 3rd, 2019, 9:18 PM
 */
#include <string>
#include "Weapon.h"
#include <time.h>
#include <cstdlib>
#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H



/**
 * Defines the behavior of a CrazyRandomSword
 *(hitpoint = random 7-100, random armor reduction 2- 1/3)
 */
class CrazyRandomSword : public Weapon {
public:
    CrazyRandomSword() : Weapon("Crazy random sword",7+rand()%93) {}
    //Calls Weapon(name, hitpoints) constructor with values CrazyRandomSword and 0.0

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif  CRAZYRANDOMWORD_H
