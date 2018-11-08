
#ifndef _DEFINE_IO_
#define _DEFINE_IO_
#include "ioGlobal.hpp"
#include "../util/table.hpp"
#include "../util/chordSet.hpp"

class IO{
public:
    IO(){};
    void read   (const string&, ChordSet&);
    void write  (const string&, const int& n, Table<DType>&);
};
#endif
