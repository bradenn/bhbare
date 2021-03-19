/* *
 * @project bh_bare
 * @file quad.h
 * 
 * @abstract  
 *
 * @author Braden Nicholson
 * @date 3/15/21
 */

#ifndef BH_BARE_QUAD_H
#define BH_BARE_QUAD_H

class Quad {
private:
    float xm, xy, l;
public:
    Quad(float xm, float xy, float l) : xm(xm), xy(xy), l(l) {}
    Quad NW() {
        float lh = l/2;
        return Quad{xm - lh, xy - lh, lh};
    }
    Quad NE() {
        float lh = l/2;
        return Quad{xm + lh, xy - lh, lh};
    }
    Quad SW() {
        float lh = l/2;
        return Quad{xm - lh, xy + lh, lh};
    }
    Quad SE() {
        float lh = l/2;
        return Quad{xm +lh, xy + lh, lh};
    }
};

#endif //BH_BARE_QUAD_H
