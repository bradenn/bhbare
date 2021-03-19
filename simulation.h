/* *
 * @project bh_bare
 * @file Simulation.h
 * 
 * @abstract  
 *
 * @author Braden Nicholson
 * @date 3/15/21
 */

#ifndef BH_BARE_SIMULATION_H
#define BH_BARE_SIMULATION_H

#include <vector>
#include "body.h"

using std::vector;

class Simulation {
private:
    vector<Body*> bodies;
    float time = 0;
    float dt = 0;
public:
    void run();
};

#endif //BH_BARE_SIMULATION_H
