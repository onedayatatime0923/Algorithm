
#ifndef _DEFINE_DP_
#define _DEFINE_DP_
#include "dpGlobal.hpp"
#include "../util/chordSet.hpp"
#include "../util/table.hpp"

class DP{
public:
    DP(){};

    static void construct(ChordSet&, Table<DType>&, Table<DType>&, const int&);

    static void find(Table<DType>&, const int&, const int&, ChordSet&);
private:

};


#endif
