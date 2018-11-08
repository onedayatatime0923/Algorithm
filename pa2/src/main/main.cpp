
#include "mainGlobal.hpp"
#include "../dp/dp.hpp"
#include "../io/io.hpp"
#include "../io/io.hpp"
#include "../util/chordTable.hpp"
#include "../util/chordVec.hpp"
#include "../util/table.hpp"

int main(int argc, const char **argv){
    int n;
    IO io;
    ChordTable chordTable;
    ChortVec answer;
    io.read(argv[1], n, chordTable);

    Table<int> cost(n);
    cost.initialize(0,0);
    cost.initialize(1,0);

    Table<int> record(n);
    record.initialize(0,-2);
    record.initialize(1,-2);
    // Dynamic Programming
    DP::construct(chordTable, cost, record, n);

    DP::find(record, 0, 2*n - 1, answer);
    answer.set();

    answer.print();
    io.write(argv[2], answer);

    // answer.print();
    // cost.print();
    // record.print();
    // chordSet.print();
}
