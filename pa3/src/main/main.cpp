

#include "misc/global.h"
#include "database/database.h"
#include "util/aStar.h"


int main(int argc, char** argv)
{
    Database database(argc, argv);
    AStar astar(database._grid, database._capacity);
    database.route(astar);


    return 0;
}
