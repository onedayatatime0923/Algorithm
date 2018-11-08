
#ifndef _DEFINE_CHORDSET_
#define _DEFINE_CHORDSET_

#include "utilGlobal.hpp"

class Chord{
public:
    Chord                           (const int&);
    Chord                           (const int&, const int&);
    inline bool         operator<   (const Chord&) const;
    inline const int& get         () const;
    void                print       () const;
    void                write       (FILE*) const;
private:
    int _start;
    int _end;
};

class ChordSet{
public:
    ChordSet    (){};
    void            push2  (const int&, const int&);
    void            push1  (const int&, const int&);
    const int&    get    (const int&) const;
    void            print  ();
    void            write  (FILE*);
private:
    set<Chord> _data;
};
inline bool Chord::operator< (const Chord& rhs) const{
    return _start < rhs._start;
};
inline const int& Chord::get() const{
    return _end;
};

#endif
