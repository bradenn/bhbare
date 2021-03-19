/* *
 * @project bh_bare
 * @file bhtree.h
 *
 * @abstract
 *
 * @author Braden Nicholson
 * @date 3/15/21
 */

#ifndef BH_BARE_BHTREE_H
#define BH_BARE_BHTREE_H

#include "body.h"
#include "quad.h"

class BHTree {
private:

    Quad q;
    bool internal, populated;
    Body root{};
    BHTree *NW{}, *NE{}, *SW{}, *SE{};
public:
    explicit BHTree(Quad q);

    void insert(Body b);

    void subdivide();

    void insertRaw(Body b);
};

BHTree::BHTree(Quad q) : q(q) {
    internal = false;
}

void BHTree::insert(Body b) {
    if (!populated) {
        root = b;
        return;
    }
    if(internal){

    }else{
        root = b;
        populated = true;
    }
}

void BHTree::insertRaw(Body b) {
    internal = true;

}

void BHTree::subdivide() {
    NW = new BHTree(q.NW());
    NE = new BHTree(q.NE());
    SW = new BHTree(q.SW());
    SE = new BHTree(q.SE());
}


#endif //BH_BARE_BHTREE_H