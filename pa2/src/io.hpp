
#ifndef _DEFINE_IO_
#define _DEFINE_IO_
#include "global.hpp"
#include "table.hpp"
#include "chordTable.hpp"
#include "chordVec.hpp"

class IO{
public:
    IO(){};
    void read   (const string&, int&, ChordTable&);
    void write  (const string&, ChortVec&);
private:
};
#endif
