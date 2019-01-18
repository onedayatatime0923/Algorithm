
#ifndef PA3__io__database_h
#define PA3__io__database_h

#include "net.h"
#include "io/parser.h"
#include "misc/global.h"
#include "util/aStar.h"
#include "util/point.h"
#include "util/rect.h"

class Database {
    public:
        Database(const int& argc, char** argv);
        ~Database() { fclose (_output); }

        void sortNet();
        void route(AStar& astar);
        void print();
        void write(Net& net, PointVec& path);

        Point           _grid;
        int             _capacity;
        int             _netNum;
        vector<Net>     _net;
    private:
        FILE*           _output;
};

#endif
