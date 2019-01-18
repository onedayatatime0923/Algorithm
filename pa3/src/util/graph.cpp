
#include "graph.h"

Edge::Edge(const Point& grid, const int& capacity) : _grid(grid), _capacity(capacity) {
    _data = new int**[2];
    _data[0] = new int*[grid[0] - 1];
    for(int i = 0;i < grid[0] -1; ++i) {
        _data[0][i] = new int[grid[1]];
        for(int j = 0; j < grid[1]; ++j) {
            _data[0][i][j] = 0;
        }
    }
    _data[1] = new int*[grid[0]];
    for(int i = 0;i < grid[0]; ++i) {
        _data[1][i] = new int[grid[1] - 1];
        for(int j = 0; j < grid[1] - 1; ++j) {
            _data[1][i][j] = 0;
        }
    }
}

Edge::~Edge() {
    for(int i = 0;i < _grid[0] -1; ++i) {
        delete[] _data[0][i];
    }
    delete[] _data[0];
    for(int i = 0;i < _grid[0]; ++i) {
        delete[] _data[1][i];
    }
    delete[] _data[1];
    delete[] _data;
}
void Edge::use(const Point& p, const Point& d) {
    if(d[0] == 1 && d[1] == 0) use(H, p[0], p[1]);
    else if(d[0] == 0 && d[1] == 1) use(V, p[0], p[1]);
    else if(d[0] == -1 && d[1] == 0) use(H, p[0] - 1, p[1]);
    else if(d[0] == 0 && d[1] == -1) use(V, p[0], p[1] - 1);
    else {
        reportf("Error edge..."); exit(1);
    }
}

const float Edge::cost(const Point& p, const Point& d) {
    if(d[0] == 1 && d[1] == 0) return cost(H, p[0], p[1]);
    else if(d[0] == 0 && d[1] == 1) return cost(V, p[0], p[1]);
    else if(d[0] == -1 && d[1] == 0) return cost(H, p[0] - 1, p[1]);
    else if(d[0] == 0 && d[1] == -1) return cost(V, p[0], p[1] - 1);
    reportf("Error edge..."); exit(1);
}
