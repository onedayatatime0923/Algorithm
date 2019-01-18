
#include "database.h"

Database::Database(const int& argc, char** argv) {
    if( argc < 3 ){ reportf("Usage: ./pa3 [input_file_name] [output_file_name]\n"); exit(1); }

    AlgParser parser;

    // read the file in the first argument
    if( ! parser.read( argv[1] ) ) { reportf("Error opening input file"); exit(1); }

    _output = fopen(argv[2] , "w");
    if (_output == NULL) { reportf("Error opening output file"); exit(1); }

    // show the information of the input
    _grid[0] = parser.gNumHTiles();
    _grid[1] = parser.gNumVTiles();
    _capacity = parser.gCapacity();
    _netNum = parser.gNumNets();
    for (int i = 0; i < parser.gNumNets(); ++i){
        pair<int, int> posS = parser.gNetStart( i );
        pair<int, int> posE = parser.gNetEnd( i );
        Net net(i);
        net.set(posS.first, posS.second, posE.first, posE.second);
        _net.push_back(net);
    }
}
void Database::sortNet() {
    for(uint i = 0; i < _net.size(); ++i) {
        for(uint j = 0; j < _net.size(); ++j) {
            if( i == j ) continue;
            if(_net[i].inbox(_net[j])) _net[i].increaseBoundingBoxNum();
            else if(_net[j].inbox(_net[i])) _net[j].increaseBoundingBoxNum();
        }
    }
    sort(_net.begin(), _net.end());
}
void Database::route(AStar& astar) {
    // sortNet();
    for(uint i = 0; i < _net.size(); ++i) {
        PointVec path = astar.findPath(_net[i].p1(),_net[i].p2());
        write(_net[i], path);
    }
}

void Database::write(Net& net, PointVec& path) {
    fprintf(_output, "%d %lu\n", net.n(), path.size() - 1);
    for(uint i = 1; i< path.size(); ++i) {
        fprintf(_output, "%d %d %d %d\n", path[i-1][0], path[i-1][1], path[i][0], path[i][1]);
    }
}
void Database::print() {
    printf( "grid %d %d\n", _grid[0], _grid[1]);
    printf( "capacity %d\n", _capacity);
    printf( "num net %d\n", _netNum);
    for (int idNet = 0; idNet < _netNum;++idNet){
        printf("%d  %d  %d  %d  %d\n", idNet, _net[idNet][0],
            _net[idNet][1], _net[idNet][2], _net[idNet][3]);
    }
}
