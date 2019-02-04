/*
 * File:   SharpScythe.cpp
 * Author: Grant Pennington <grp17b@my.fsu.edu>
 *
 * Created on February 3rd, 2019, 10:59 PM
 */

#include "SharpScythe.h"

double SharpScythe::hit(double armor){

    double damage;
    if ((int)armor%2==0)
        damage=hitPoints-(armor/2);
    else
        damage=hitPoints-armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}
