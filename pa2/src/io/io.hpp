
#ifndef _DEFINE_IO_
#define _DEFINE_IO_
#include "ioGlobal.hpp"
#include "../util/table.hpp"
#include "../util/chordTable.hpp"
#include "../util/chordVec.hpp"

class IO{
public:
    IO(){};
    void read   (const string&, int&, ChordTable&);
    void write  (const string&, ChortVec&);
private:
};
#endif
