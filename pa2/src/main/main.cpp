
#include "mainGlobal.hpp"
#include "../dp/dp.hpp"
#include "../io/io.hpp"
#include "../util/chordSet.hpp"
#include "../util/table.hpp"

int main(int argc, const char **argv){
    int n;
    IO io;
    ChordSet chordSet;
    ChordSet answer;
    io.read(argv[1], n, chordSet);

    Table<DType> cost(n);
    for(int i = 0;i < 2*n + 1;++i){
        cost(i,i-1) = 0;
    }
    Table<DType> record(n);
    for(int i = 0;i < 2*n;++i){
        record(i,i) = -2;
    }
    for(int i = 0;i < 2*n + 1;++i){
        record(i,i-1) = -2;
    }
    // Dynamic Programming
    DP::construct(chordSet, cost, record, n);

    DP::find(record, 0, 2*n - 1, answer);

    io.write(argv[2], answer);

    answer.print();
    // cost.print();
    // record.print();
    // chordSet.print();
}
