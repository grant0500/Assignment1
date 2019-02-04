/*
 * File:   SimpleHammer.cpp
 * Author: Grant Pennington <grp17b@my.fsu.edu>
 *
 * Created on February 3rd, 2019, 8:10 PM
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){

    double damage = hitPoints - armor;
    if (armor<30)
        damage=hitPoints;
    if(damage < 0){
        return 0;
    }
    return damage;
}
