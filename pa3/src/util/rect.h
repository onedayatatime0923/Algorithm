
#ifndef PA3__util__rect_h
#define PA3__util__rect_h

#include "misc/global.h"
#include "point.h"

class Rect{
public:
    Rect                     () {}
    Rect                     (const int x1, const int y1, const int x2, const int y2): _downLeft(x1, y1), _upRight(x2, y2){};

    void         set         (const int x1, const int y1, const int x2, const int y2) { _downLeft.set(x1, y1); _upRight.set(x2, y2); }

    int&       operator[]  (const int i)          { if(i == 0)      return _downLeft[0];
                                                        else if(i == 1) return _downLeft[1];
                                                        else if(i == 2) return _upRight[0];
                                                        else            return _upRight[1];}
    const int& operator[]  (const int i)    const { if(i == 0)      return _downLeft[0];
                                                        else if(i == 1) return _downLeft[1];
                                                        else if(i == 2) return _upRight[0];
                                                        else            return _upRight[1];}
private:
    Point _downLeft;
    Point _upRight;
};

#endif
