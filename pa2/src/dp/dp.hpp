
#ifndef _DEFINE_DP_
#define _DEFINE_DP_
#include "dpGlobal.hpp"
#include "../util/chordTable.hpp"
#include "../util/chordVec.hpp"
#include "../util/table.hpp"

class DP{
public:
    DP(){};

    static void construct(ChordTable&, Table<int>&, Table<int>&, const int&);

    static void find(Table<int>&, const int&, const int&, ChortVec&);
private:

};


#endif
