
#ifndef PA3__util__graph_h
#define PA3__util__graph_h

#include "point.h"
#include "misc/global.h"

class Vertex {
    public:
        Vertex(Point c, Vertex* p = nullptr) : _G(0), _H(0), _coordinate(c), _parent(p) {}
        const Point&    coordinate()    { return _coordinate; }
        const uint&     G()             { return _G; }
        const uint&     H()             { return _H; }
        Vertex*         parent()        { return _parent; }
        uint            score()         { return _G + _H; }

        void    setG(const uint& G)     { _G = G; }
        void    setH(const uint& H)     { _H = H; }
        void    setParent(Vertex* p)    { _parent = p; }
    private:
        uint    _G, _H;
        Point   _coordinate;
        Vertex* _parent;
};

enum Direction { H, V};
class Edge
{
    public:
        Edge(const Point& grid, const int& capacity);
        ~Edge();

        void        use     (const Point& p, const Point& d);
        void        use     (const Direction& i, const int& n, const int& m) {
                                ++_data[i][n][m]; }
        const float cost    (const Point& p, const Point& d);
        const float cost    (const Direction& i, const int& n, const int& m) {
            // printf("cost\n");
            // reportf(" %d %d %d\n", i, n, m);
            // reportf(" %d\n", _data[i][n][m]);
            // reportf(" %lf\n", pow(2, _data[i][n][m]/ _capacity) - 1);
                                return _data[i][n][m] >= _capacity ? 3600 * _data[i][n][m] * _capacity : 3600 * _data[i][n][m]; }
                                // return (pow(2, _data[i][n][m]/ _capacity) - 1); }

        int**        operator[] (const Direction& i)             { return _data[i]; }

    private:
        Point   _grid;
        int     _capacity;
        int***  _data;
};
#endif
