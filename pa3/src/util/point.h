
#ifndef PA3__util__point_h
#define PA3__util__point_h

#include "misc/global.h"

class Point{
    public:
        Point              ():_x(0), _y(0){};
        Point              (const int& x, const int& y): _x(x), _y(y){};

        void        set        (const int& x, const int& y) {_x = x; _y = y;};

        int&        operator[] (const int& i)                   { if(i == 0) return _x;
                                                                   else       return _y;}
        const int&  operator[] (const int& i) const             { if(i == 0) return _x;
                                                                   else       return _y;}
        bool        operator ==(const Point& coordinates);
        bool        operator == (const Point& coordinates)const ;

        void        print(char* name) const { reportf("%s %d %d\n", name, _x, _y); };

    friend Point operator + (const Point& l, const Point& r);
    friend Point operator - (const Point& l, const Point& r);
    friend Point delta(Point s, Point t);
    friend uint manhattan(Point s, Point t);

    private:
        int _x;
        int _y;
};

inline bool Point::operator == (const Point& coordinates) {
    return (_x == coordinates._x && _y == coordinates._y);
}
inline bool Point::operator == (const Point& coordinates) const {
    return (_x == coordinates._x && _y == coordinates._y);
}

inline Point operator + (const Point& l, const Point& r) {
    return{ l._x + r._x, l._y + r._y };
}
inline Point operator - (const Point& l, const Point& r) {
    return{ l._x - r._x, l._y - r._y };
}
inline Point delta(Point s, Point t) {
    return{ abs(s._x - t._x),  abs(s._y - t._y) };
}

inline uint manhattan(Point s, Point t)
{
    Point d= delta(s, t);
    return d._x + d._y;
}

#endif
