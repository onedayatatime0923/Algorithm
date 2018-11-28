
#ifndef _DEFINE_CHORDVEC_
#define _DEFINE_CHORDVEC_

#include "global.hpp"

class Chord{
public:
    Chord                           (const int&, const int&);
    inline bool         operator<   (const Chord&) const;
    void                print       () const;
    void                write       (FILE*) const;
private:
    int _start;
    int _end;
};

class ChortVec{
public:
    ChortVec                (){};
    void            push    (const int&, const int&);
    void            set     ();
    void            print   ();
    void            write   (FILE*);
private:
    vector<Chord> _data;
};
inline bool Chord::operator< (const Chord& rhs) const{
    return _start < rhs._start;
};

#endif
