
#ifndef PA3__util__aStar_h
#define PA3__util__aStar_h

#include "graph.h"

#define PointVec vector<Point>
#define VertexSet set<Vertex*>
#define directions 4

class AStar {
    public:

        AStar(const Point& size, const int& capacity) 
            : _size(size),
              _direction({  { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } }),
              _edge(size, capacity) {}

        PointVec findPath(Point& s, Point& t);

    private:
        bool        detectCollision (Point& co);
        Vertex*     findVertexOnSet (VertexSet& vertexs, Point& co);
        void        releaseVertexs(VertexSet& vetexs);

        Point       _size;
        PointVec    _direction;
        Edge        _edge;
        // temporary use
        VertexSet openSet, closedSet;
};

#endif
