
#ifndef _DEFINE_CHORDSET_
#define _DEFINE_CHORDSET_

#include "utilGlobal.hpp"

class Chord{
public:
    Chord                           (const DType&);
    Chord                           (const DType&, const DType&);
    inline bool         operator<   (const Chord&) const;
    inline const DType& get         () const;
    void                print       () const;
private:
    DType _start;
    DType _end;
};

class ChordSet{
public:
    ChordSet    (){};
    void            push   (const DType&, const DType&);
    const DType&    get    (const DType&) const;
    void            print  ();
private:
    set<Chord> _data;
};
inline bool Chord::operator< (const Chord& rhs) const{
    return _start < rhs._start;
};
inline const DType& Chord::get() const{
    return _end;
};

#endif
