
#ifndef PA3__io__net_h
#define PA3__io__net_h

#include "io/parser.h"
#include "misc/global.h"
#include "util/point.h"
#include "util/rect.h"

class Net {
    public:
        Net(const int& n) : _n(n) {};
        void set (const int x1, const int y1, const int x2, const int y2) 
                    { _p1.set(x1, y1); _p2.set(x2, y2); }
        bool inbox (Net& net) { return ( (inbox(net._p1) && (! inbox(net._p1))) ||
                                         (inbox(net._p1) && (! inbox(net._p1)))); }
        void increaseBoundingBoxNum () { ++_boundingBoxNum; }

        const int& n()  { return _n; }
        Point&     p1() { return _p1; }
        Point&     p2() { return _p2; }

        int&       operator[]  (const int i);
        const int& operator[]  (const int i) const;

        bool       operator<   (const Net& l);
        bool       operator<   (const Net& l) const;
    private:
        bool    inbox (Point& p) {
            return (((_p1[0] < p[0] && p[0] < _p2[0]) || (_p2[0] < p[0] && p[0] < _p1[0]))&&
                    ((_p1[1] < p[1] && p[1] < _p2[1]) || (_p2[1] < p[1] && p[1] < _p1[1]))); }
        int             _n;
        Point           _p1;
        Point           _p2;
        int             _boundingBoxNum;
};

#endif
