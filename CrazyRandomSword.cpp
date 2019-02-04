/*
 * File:   CrazyRandomSword.cpp
 * Author: Grant Pennington <grp17b@my.fsu.edu>
 *
 * Created on February 3rd, 2019, 9:33 PM
 */

#include "CrazyRandomSword.h"
#include <time.h>
#include <cstdlib>



double CrazyRandomSword::hit(double armor){
    srand(clock());
    int third = armor/3;
    double randArmor = 2+rand()%third;
    if (randArmor>third)
        randArmor=third;
    double damage;
    if (armor==0)
        return hitPoints;
    else
        damage=hitPoints-randArmor;

    if(damage < 0){
        return 0;
    }
    return damage;
}

