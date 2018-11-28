
#ifndef _DEFINE_DP_
#define _DEFINE_DP_
#include "global.hpp"
#include "chordTable.hpp"
#include "chordVec.hpp"
#include "table.hpp"

class DP{
public:
    DP(){};

    static void construct(ChordTable&, Table<int>&, Table<int>&, const int&);

    static void find(Table<int>&, const int&, const int&, ChortVec&);

};


#endif
