
#ifndef _DEFINE_CHORDTABLE_
#define _DEFINE_CHORDTABLE_

#include "global.hpp"

class ChordTable{
public:
    ChordTable              (){};
    void            set     (const int&);
    void            push    (const int&, const int&);
    const int&      get     (const int&) const;
    void            print   ();
private:
    int  _n;
    int* _data;
};

#endif
