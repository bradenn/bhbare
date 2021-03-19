/* *
 * @project bh_bare
 * @file body.h
 * 
 * @abstract  
 *
 * @author Braden Nicholson
 * @date 3/15/21
 */

#ifndef BH_BARE_BODY_H
#define BH_BARE_BODY_H

class Body {
private:
    float px, py;
    float fx, fy;
    float vx, vy;
    float m;
public:
    Body() = default;
};

#endif //BH_BARE_BODY_H
